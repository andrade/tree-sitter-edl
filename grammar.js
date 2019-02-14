module.exports = grammar({
	name: 'edl',

	extras: $ => [$.comments, $._white_space],

	rules: {
		source_file: $ => seq(
			'enclave',
			'{',
			repeat($._main_item),
			'}',
			';'
		),

		_main_item: $ => choice(
			$.include,
			$.from,
			$.trusted,
			$.untrusted
		),

		include: $ => seq(
			'include',
			$.header_name,
			$.new_line
		),

		from: $ => seq(
			'from',
			$.header_name,
			'import',
			choice('*', $.import_list),
			';'
		),

		header_name: $ => /"[^"]+"/,

		import_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

		trusted: $ => seq(
			'trusted',
			'{',
			optional(repeat1($.trusted_inner_items)),
			'}',
			';'
		),

		untrusted: $ => seq(
			'untrusted',
			'{',
			optional(repeat1($.untrusted_inner_items)),
			'}',
			';'
		),

		trusted_inner_items: $ => choice(
			$.include,
			$.from,
			$.ecall_definition
		),

		untrusted_inner_items: $ => choice(
			$.include,
			$.from,
			$.ocall_definition
		),

		ecall_definition: $ => seq(
			optional($.trusted_prefix_public),
			$.retval,
			$.identifier,
			'(',
			optional(seq($.parameter, repeat(seq(',', $.parameter)))),
			')',
			repeat($._trusted_suffix),
			';'
		),

		ocall_definition: $ => seq(
			$.retval,
			$.identifier,
			'(',
			optional(seq($.parameter, repeat(seq(',', $.parameter)))),
			')',
			optional($.untrusted_suffix_allow),
			repeat($._untrusted_suffix),
			';'
		),

		retval: $ => seq(
			optional($.type_qualifier),
			$.type_specifier,
			optional($.pointer_declarator),
		),

		parameter: $ => seq(
			optional($.attribute_list),
			optional($.type_qualifier),
			$.type_specifier,
			optional($.pointer_declarator),
			$.identifier
		),

		type_qualifier: $ => token(choice(
			'const'
		)),

		type_specifier: $ => choice(
			'void',
			'char',
			'short',
			'int',
			'long',
			'float',
			'double',
			//'signed',
			'unsigned',

			seq('long', 'long'),
			seq('long', 'double'),

			'size_t',
			'wchar_t',

			'int8_t',
			'int16_t',
			'int32_t',
			'int64_t',

			'uint8_t',
			'uint16_t',
			'uint32_t',
			'uint64_t',

			$.struct_specifier,
			$.union_specifier,
			$.enum_specifier,

			$.identifier,

			'bool'
		),

		struct_specifier: $ => seq('struct', $.identifier),
		union_specifier: $ => seq('union', $.identifier),
		enum_specifier: $ => seq('enum', $.identifier),

		pointer_declarator: $ => seq(
			'*'
		),

		attribute_list: $ => seq(
			'[',
			seq($._pointer_attributes, repeat(seq(',', $._pointer_attributes))),
			']'
		),

		_pointer_attributes: $ => choice(
			'in',
			'out',
			'user_check',
			'string',
			'wstring',
			$.size_attribute,
			$.count_attribute,
			'isary',
			'isptr',
			'readonly'
		),

		size_attribute: $ => seq(
			'size',
			'=',
			// token(choice(prec(1, $.number), $.identifier))
			choice($.number, $.identifier)
		),

		count_attribute: $ => seq(
			'count',
			'=',
			// token(choice(prec(1, $.number), $.identifier))
			choice($.number, $.identifier)
		),

		//specifier: $ => choice(
		//	'enclave',
		//	'trusted',
		//	'untrusted',
		//	'from',
		//	'import',
		//	'allow',
		//	'public',
		//	'transition_using_threads',
		//	'include',
		//	'propagate_errno'
		//),

		trusted_prefix_public: $ => 'public',

		_trusted_suffix: $ => choice(
			$.suffix_transition_using_threads
		),

		untrusted_suffix_allow: $ => seq(
			'allow',
			'(',
			seq($.identifier, repeat(seq(',', $.identifier))),
			')'
		),

		_untrusted_suffix: $ => choice(
			$.suffix_propagate_errno,
			$.suffix_transition_using_threads
		),

		suffix_propagate_errno: $ => "propagate_errno",

		suffix_transition_using_threads: $ => "transition_using_threads",

		identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

		string: $ => /"[^"]*"/,

		number: $ => /\d+/,

		comments: $ => token(choice(
			seq('//', /.*/),
			seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
			// /\/\*[\S\s]*?(?=\*\/)\*\//  // error: no support for look around
			// /\/\*[\S\s]*?\*\//g         // Not working, why not?
		)),
		//block comments from: https://github.com/tree-sitter/tree-sitter-c/blob/v0.13.10/grammar.js#L753

		new_line: $ => /(\r\n|\r|\n)/,

		// "white-space characters (space, horizontal tab, new-line,
		// vertical tab, and form-feed)", see ISO/IEC 9899:2018 § 6.4(3)
		_white_space: $ => /( |\t|\r\n|\r|\n|\u000B|\u000C)/
	}
});
