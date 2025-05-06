#pragma once
#include <vector>
#include <string>
using namespace std;

class SymbolEntry {
public:
	string name;
	int start;
	virtual string toString();
	virtual string getSuperType();
};

class VariableEntry : public SymbolEntry {
public:
	string type;
	virtual string toString() override;
	virtual string getSuperType() override;

};

class FunctionEntry : public SymbolEntry {
public:
	vector<string> parameters;
	string returnType;
	virtual string toString() override;
	virtual string getSuperType() override;
	
};

class ClassEntry : public SymbolEntry {
public:

	virtual string toString() override;
	virtual string getSuperType() override;
};

class Scope {
public:
	string name;
	string type;
	vector<SymbolEntry*> entries;
	Scope* enclosing;
	string toString();
};

class Table {
public:
	vector<Scope*> scopes;
	string toString();
};