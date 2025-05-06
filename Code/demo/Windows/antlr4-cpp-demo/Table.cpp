#include "Table.h"

string SymbolEntry::toString()
{
	return "DUMMY";
}

string SymbolEntry::getSuperType()
{
	return "DUMMY";
}

string VariableEntry::toString()
{
	string output;
	output += type;
	output += "\t \tVariable\t";
	output += name;
	output += " at ";
	output += to_string(start);
	return output;
}

string VariableEntry::getSuperType()
{
	return "Variable";
}

string FunctionEntry::toString()
{
	string output;
	output += returnType;
	output += "\t \tFunction\t";
	output += name;
	/*output += "parameters: ";
	for (int i = 0; i < parameters.size(); i++) {
		output += parameters[i];
		output += " ";
	}*/
	output += " at ";
	output += to_string(start);
	return output;
}

string FunctionEntry::getSuperType()
{
	return "Function";
}

string ClassEntry::toString()
{
	string output;
	output += "Class\t\t";
	output += name;
	output += " at ";
	output += to_string(start);
	return output;
}

string ClassEntry::getSuperType()
{
	return "Class";
}

string Scope::toString()
{
	string output;
	output += "Scope: ";
	output += type;
	output += " ";
	output += name;
	output += ", enclosing: ";
	output += ((enclosing!=nullptr)?enclosing->name:"None");
	output += "\n";
	for (int i = 0; i < entries.size(); i++) {
		output += entries[i]->toString();
		output += "\n";
	}
	return output;
}

string Table::toString()
{
	string output;
	for (int i = 0; i < scopes.size(); i++) {
		output += scopes[i]->toString();
		output += "\n";
	}
	return output;
}
