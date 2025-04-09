# Syntax
All syntax is subject to change. The absence of instruction on the matter necessitates flimsy definitions.
My own inexperience with writing a language is also a factor in the apparent jank-ness.
It's rather jarring to be told "write a unique language from scratch" and having the deadline be in a week.

### Meta-syntax
To help with deciphering things.

**something** = mandatory argument

**something\*** = optional argument

[ ] = an array

## Function signature
**return type** <- **parameter type**:**parameter**, ... : FunctionName{ body }

...Any number of parameters may be specified. Exactly one return type is specified.

Function definition returns a reference to the function.

## Function call
"_" delineates a parameter. Function calls will consume parameters from right to left.

I recently passed a Mobile Dev class and have developed a hatred of nested functions. Every time I opened up Android Studio, I was faced with more brackets and braces than I've ever had in my mouth, and I've been through orthodontics *twice.*
I want to figure out how viable it is to use no parentheses for function calls.
## Variable definition signature
**var type** VariableName

**var type** VariableName = **value**

Variable definition returns a reference to the variable.

As simple as possible. There is no need to innovate.
## Classes
class **class name** { body } 

Classes can be instantiated from nothing, but may contain garbage data. Default "constructors" are the user's problem.

Otherwise, again, no need to innovate. If I try to be "clever" with something as primitive as a struct I will just look silly.
## Comments
~ = Single line comment, goes until \\n

\~\~\~ = Multi-line comment, goes until \~\~\~
## Identifiers
Identifiers for user-defined variables, functions, and classes must satisfy the following:

Begin with a letter of the alphabet,

Consist of alphanumeric characters,

Not conflict with any reserved or predefined identifiers.

## Assignment-mandated extra features

### Reserved words
for: formatted as _**reference to function** _**reference to counter** _**reference to condition** _**increment** for

Each iteration: "function" is called, "counter + increment" is called, then if "condition" is true, retry

if: formatted as _**reference to function** _**reference to condition** if

else: shorthand for "if condition of previous if returned false"

Two-argument operators: +, -, *, /, %, <, >, ==, <=, >=, | &&

(add, subtract, mutiply, divide \[int and float\], modulo, less than, greater than, equal to, less than or equal to, greater than or equal to, or, and)

Used as they are in c-style languages.

One-argument operators: !, $, & 

(not, dereference, address of)

Used as they are in c-style languages.

write, read

Defined below.

return **value\***

Return control and scope to enclosing scope. Provides a value to the enclosing scope.
### Built-in IO:
_**string-able expression** write

Writes an expression to the standard output. Accepts ints, c-strings, floats, and chars.

read

Reads from standard input until newline and returns all characters.
### Valid characters
Identifiers may consist of, in any order:

  any number,
  any alphanumeric character,
  no special characters.

Convention as I arbitrarily dictate it is as such: Object identifiers are in PascalCase, variables and functions are lower pascalCase.

### Data types
I will support ints and floats. ints will default to signed 64bit integers. 

I will support a single-character datatype, of which strings will be artificially composed. I am tempted to only support ints and force them to be interpreted as chars by whatever procedure prints them, but I know that will be both difficult and unwieldly.

Void will be supported as a pseudo-type of no value.

c-strings will be supported, hopefully under a different moniker. They will be fixed length, null-terminated, adjacent lengths of chars.

Literals: 1, 1.0, 'a'

I will allow top-level statements executed in order, Python-style.

Statements will be terminated with a newline.

Ternaries are cool. They're allowed unless I mess something up.

I don't have enough information to figure out whether or not I'll support pass-by-reference *and* pass-by-value, nor do I know if move semantics are feasible.

I will support reference-type variables. I don't yet know how I'll denote them.

