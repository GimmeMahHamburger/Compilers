#include <PascalIINoRelationParserBaseVisitor.h>
#include "Table.h"
using namespace std;
using namespace antlrcpptest;
using namespace antlr4;

class SemanticVisitor : public PascalIINoRelationParserBaseVisitor {
public:
	Table table;
	virtual std::any visitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext* ctx) override {

		return visitChildren(ctx);
	}



};