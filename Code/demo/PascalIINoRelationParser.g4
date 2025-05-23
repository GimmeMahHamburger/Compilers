parser grammar PascalIINoRelationParser;
options { tokenVocab=PascalIINoRelationLexer; }
program: statement+;

type:CHARACTERID
	|INTID
	|VOIDTYPE
	|FLOATID
	|BOOLEANID
	;

operator:PLUS
	|MINUS
	|DIVIDE
	|STAR
	|MODULO
	|LESSTHAN
	|GREATERTHAN
	|EQUAL EQUAL
	|OR OR
	|AMPERSAND AMPERSAND
	;

singleoperator: MINUS
	|NOT
	;
	
arrayaccess: IDENTIFIER LBRACKET expression RBRACKET;

expression: IDENTIFIER
	|FLOAT
	|INTEGER
	|BOOLEAN
	|CHAR
	|VOIDTYPE
	|cstring
	|expression operator expression
	|NOT expression
	|objectaccess
	|functioncall
	|addressof
	|pointeraccess
	|singleoperator expression
	|arrayaccess
	;

statement: definition
	|functioncall
	|pointerassignment
	|assignment
	|ifstatement
	|writestatement
	|returnstatement
	|forstatement
	|readstatement
	;

objectaccess: IDENTIFIER ACCESSOR IDENTIFIER;

pointeraccess: REFERENCE IDENTIFIER;

addressof: AMPERSAND IDENTIFIER;

classdefinition: CLASSID IDENTIFIER LCURLY definition* RCURLY;

pointerassignment: REFERENCE assignment
	|arrayaccess EQUAL expression
	;

assignment: IDENTIFIER EQUAL expression
	|objectaccess EQUAL expression
	;

parameter: UNDERSCORE expression;

functioncall: parameter* IDENTIFIER
	|parameter* objectaccess;

variabledefinition: type IDENTIFIER
	|type IDENTIFIER EQUAL expression;

objectdefinition: IDENTIFIER IDENTIFIER;

pointerdefinition: type REFERENCE IDENTIFIER
	|type REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	|type AMPERSAND IDENTIFIER
	|type REFERENCE IDENTIFIER EQUAL cstring
	|IDENTIFIER REFERENCE IDENTIFIER
	|IDENTIFIER REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	|type REFERENCE IDENTIFIER EQUAL LCURLY expression? (COMMA expression)* RCURLY
	;

parametersdefinition: pointerdefinition
	|pointerdefinition ',' parametersdefinition
	|variabledefinition
	|variabledefinition ',' parametersdefinition
	;

functiondefinition: type SIGNATURE parametersdefinition? COLON IDENTIFIER LCURLY statement+ RCURLY;

ifstatement: UNDERSCORE functioncall parameter IF;

forstatement: UNDERSCORE variabledefinition UNDERSCORE functioncall UNDERSCORE expression UNDERSCORE expression FOR
	|UNDERSCORE IDENTIFIER UNDERSCORE functioncall UNDERSCORE expression UNDERSCORE expression FOR
	;

writestatement: UNDERSCORE CSTRING WRITE
	|UNDERSCORE CHAR WRITE
	|UNDERSCORE expression WRITE
	|UNDERSCORE charliteral WRITE
	;
    
readstatement: UNDERSCORE IDENTIFIER UNDERSCORE expression READ
	|UNDERSCORE addressof UNDERSCORE expression READ
	;

definition: classdefinition
	|objectdefinition
	|variabledefinition
	|functiondefinition
	|pointerdefinition
	;
    
returnstatement: RETURN expression
	|RETURN
	;

charliteral: SINGLEQUOTE NEWLINE SINGLEQUOTE
	|CHAR
	;
	
cstring: SINGLEQUOTE ((~'\'')*?) SINGLEQUOTE;