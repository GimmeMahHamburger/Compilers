grammar PascalIINoRelation;

type:CLASSID
	|CHARACTERID
	|INTID
	|VOID
	|FLOATID
	|BOOLEANID
	;

operation:PLUS
	|MINUS
	|DIVIDE
	|STAR
	|MODULO
	|LESSTHAN
	|GREATERTHAN
	|EQUAL
	|OR OR
	|AMPERSAND AMPERSAND
	;
arrayaccess: IDENTIFIER LEFTBRACKET expression RIGHTBRACKET;

expression: IDENTIFIER
	|FLOAT
	|INTEGER
	|BOOLEAN



UNDERSCORE: '_';
PLUS: '+';
MINUS: '-';
DIVIDE: '/';
STAR: '*';
MODULO: '%';
SIGNATURE: '<-';
LESSTHAN: '<';
GREATERTHAN: '>';
EQUAL: '=';
OR: '|';
AMPERSAND: '&';
NOT: '!';
MULTICOMMENT: '~~~';
COMMENT: '~';
REFERENCE: '$';
FLOAT:[0-9]+[.][0-9]+;
INTEGER: [0-9]+;
BOOLEAN: true | false;
CHAR: ['][a-zA-Z]['];
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]+;
NEWLINE: '\n';
WHITESPACE: '[\t\n\r]' -> skip;
LBRACKET: '[';
RBRACKET: ']';
LCURLY: '{';
RCURLY: '}';
ACCESSOR: '.';
ESCAPE: '\\';
COLON: ':';
SINGLEQUOTE: '\'';
DOUBLEQUOTE: '"';

FOR: 'for';
WRITE: 'write';
READ: 'read';
IF: 'if';
RETURN: 'return';
CLASSID: 'class';
CHARACTERID: 'char';
INTID: 'int';
VOID: 'void';
FLOATID: 'float';
BOOLEANID: 'bool';
