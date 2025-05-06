#include <PascalIINoRelationParserBaseVisitor.h>
#include "Table.h"
using namespace std;
using namespace antlrcpptest;
using namespace antlr4;

class PascalSymbolVisitor : public PascalIINoRelationParserBaseVisitor {
public:
	Table table;
	vector<Scope*> scopeNames;
	string getTable() {
		return table.toString();
	}

	virtual std::any visitProgram(PascalIINoRelationParser::ProgramContext* ctx) override {
		Scope * Global  = new Scope;
		Global->name = "Global";
		Global->enclosing = nullptr;
		scopeNames.push_back(Global);
		table.scopes.push_back(Global);
		visitChildren(ctx);
		return -1;
	}

	virtual std::any visitClassdefinition(PascalIINoRelationParser::ClassdefinitionContext* ctx) override {
		ClassEntry* clss = new ClassEntry;
		clss->name = ctx->IDENTIFIER()->getText();
		clss->start = ctx->getStart()->getStartIndex();
		scopeNames.back()->entries.push_back(clss);

		Scope * temp = new Scope;
		temp->name = ctx->IDENTIFIER()->getText();
		temp->enclosing = scopeNames.back();
		scopeNames.push_back(temp);
		table.scopes.push_back(temp);
		visitChildren(ctx);
		
		scopeNames.pop_back();
		
		return 1;
	}
	virtual std::any visitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext* ctx) override {
		VariableEntry* temp = new VariableEntry;
		temp->name = ctx->IDENTIFIER()->getText();
		temp->type = ctx->type()->getText();
		temp->start = ctx->getStart()->getStartIndex();

		scopeNames.back()->entries.push_back(temp);
		return 1;
	}
	virtual std::any visitObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext* ctx) override {
		VariableEntry* temp = new VariableEntry;
		if (!ctx->IDENTIFIER().empty()) { temp->name = ctx->IDENTIFIER()[0]->getText() + " ptr"; }
		temp->start = ctx->getStart()->getStartIndex();
		temp->type = "object";
		scopeNames.back()->entries.push_back(temp);
		return 1;
	}
	virtual std::any visitPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext* ctx) override {
		VariableEntry* temp = new VariableEntry;
		if (!ctx->IDENTIFIER().empty()) { temp->name = ctx->IDENTIFIER()[0]->getText() + " ptr"; } //only the first one matters for type
		temp->type = ctx->type()->getText();
		temp->start = ctx->getStart()->getStartIndex();

		scopeNames.back()->entries.push_back(temp);
		return visitChildren(ctx);
	}
	virtual std::any visitFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext* ctx) override {
		FunctionEntry* func = new FunctionEntry;
		func->name = ctx->IDENTIFIER()->getText();
		func->returnType = ctx->type()->getText();
		func->start = ctx->getStart()->getStartIndex();
		scopeNames.back()->entries.push_back(func);

		Scope* temp = new Scope;
		temp->name = ctx->IDENTIFIER()->getText();
		temp->enclosing = scopeNames.back();
		scopeNames.push_back(temp);
		table.scopes.push_back(temp);
		visitChildren(ctx);

		scopeNames.pop_back();
		return 1;
	}

};