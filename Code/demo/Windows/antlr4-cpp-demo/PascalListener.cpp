#include <PascalIINoRelationParserBaseListener.h>
using namespace std;
using namespace antlrcpptest;
using namespace antlr4;
class PascalListener : public PascalIINoRelationParserBaseListener {
	virtual void enterEveryRule(antlr4::ParserRuleContext* context) override {
		cout <<"YES"<< ((int)context->getTreeType()) << "nope" << endl;
	}
};