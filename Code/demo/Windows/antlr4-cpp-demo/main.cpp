#include <iostream>
#include <string>

#include "antlr4-runtime.h"

#include <Windows.h>
#include <PascalIINoRelationLexer.h>
#include <PascalIINoRelationParser.h>
#include "PascalListener.cpp"
#include "PascalSymbolVisitor.cpp"
//#include <PascalListener.cpp>

#pragma execution_character_set("utf-8")
using namespace std;
using namespace antlrcpptest;
using namespace antlr4;

PascalIINoRelationParser* currentParser;

string tokenToString(Token * input) {
	string output;
	output += input->getText();
	output += " \n    ";
	output += to_string(input->getStartIndex());
	output += " : ";
	output += to_string(input->getStopIndex());
	output += ", Type: ";
	output += to_string(input->getType());
	return output;
}
void treeToString(int depth, string &output,tree::ParseTree* input) {
	output += "\n";
	for (int i = 0; i < depth; i++) { output += "  "; } //indent properly
	
	//below solution adapted from:
	//https://stackoverflow.com/questions/66251010/antlr4-c-get-name-of-rule-from-parsetree
	antlr4::RuleContext* x = dynamic_cast<antlr4::RuleContext*>(input); //pretend like the tree is a context, java doesnt have to do this apparently ):
	if (x != nullptr) { //ignore terminals aka no rules
		auto ri = x->getRuleIndex();
		auto name = currentParser->getRuleNames()[ri]; //index some hidden table I didn't know existed
		output += name;
		for (int i = 0; i < input->children.size(); i++) { //and since i know its not terminal,
			treeToString(depth + 1, output, input->children[i]); //talk to the babies
		}
	} else { //if it is a terminal, go ahead,
		output += input->getText(); //add it to the list
	}
}
string treeToString(tree::ParseTree* input) { 
	string output; 
	treeToString(0, output, input);   
	return output; 
}

string getTokens(CommonTokenStream *input) {
	string output; 
	auto tokenSilo = input->getTokens();      
	for (int i = 0; i < tokenSilo.size(); i++) {
		output += tokenToString(tokenSilo[i]);
		output+="\n";
	}
	return output;
}


int main(int argc, const char * argv[]) {
	ifstream inputStream;
	if (argc > 1) {
		cout << argv[0] << endl;
		cout << argv[1] << endl;
		inputStream.open(argv[1]);
	} else {
		inputStream.open("C:\\Users\\gimme\\Downloads\\antlr4-cpp-runtime-4.13.2-source\\demo\\Examples\\AhoyThereWorldBadTokens.uniquefileextension");
	}
	
	cout << (inputStream.is_open()?"File opened":"File couldn't be opened") << endl;

	ANTLRInputStream input(inputStream);
	PascalIINoRelationLexer lexer(&input);
	CommonTokenStream tokens(&lexer); 

	PascalIINoRelationParser parser(&tokens);
	

	PascalListener temp;
	//parser.addParseListener(&temp);
	currentParser = &parser; //for the parser printout function above (treeToString)
	tree::ParseTree* tree = parser.program();
	PascalSymbolVisitor visitationRights;  
	visitationRights.visit(tree); 

	if (argc > 2) {
		cout << "argv[2] is " << argv[2] << endl;
		string arg = argv[2];
		if (arg == "-lexer") {
			cout << "found smth" << endl;
			cout << getTokens(&tokens) << endl;
			return 1;
		}
		if (arg == "-parser") {
			cout << treeToString(tree) << endl;
		}
		if (arg == "-semantic") {
			cout << visitationRights.getTable() << endl;
			return 2;
		}
	}

	if (argc == 1) {
		cout << getTokens(&tokens) << endl;
		cout << treeToString(tree) << endl;
		cout << visitationRights.getTable() << endl;
	}
	

	

	return 0;
}
