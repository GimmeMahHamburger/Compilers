/* lexer header section */

// Generated from TLexer.g4 by ANTLR 4.13.2

/* lexer precinclude section */

#include "TLexer.h"


/* lexer postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


using namespace antlr4;

using namespace antlrcpptest;


using namespace antlr4;

namespace {

struct TLexerStaticData final {
  TLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TLexerStaticData(const TLexerStaticData&) = delete;
  TLexerStaticData(TLexerStaticData&&) = delete;
  TLexerStaticData& operator=(const TLexerStaticData&) = delete;
  TLexerStaticData& operator=(TLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TLexerStaticData> tlexerLexerStaticData = nullptr;

void tlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(tlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TLexerStaticData>(
    std::vector<std::string>{
      "Return", "Continue", "INT", "Digit", "ID", "LETTER", "LessThan", 
      "GreaterThan", "Equal", "And", "Colon", "Semicolon", "Plus", "Minus", 
      "Star", "OpenPar", "ClosePar", "OpenCurly", "CloseCurly", "QuestionMark", 
      "Comma", "Dollar", "Ampersand", "String", "Foo", "Bar", "Any", "Comment", 
      "WS", "Baz", "Dot", "DotDot"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE", "Mode1", "Mode2"
    },
    std::vector<std::string>{
      "", "", "'return'", "'continue'", "", "", "", "'<'", "'>'", "'='", 
      "'and'", "':'", "';'", "'+'", "'-'", "'*'", "'('", "')'", "'{'", "'}'", 
      "'\\u003F'", "','", "", "", "", "", "", "", "'.'", "'..'", "'$'", 
      "'&'"
    },
    std::vector<std::string>{
      "", "DUMMY", "Return", "Continue", "INT", "Digit", "ID", "LessThan", 
      "GreaterThan", "Equal", "And", "Colon", "Semicolon", "Plus", "Minus", 
      "Star", "OpenPar", "ClosePar", "OpenCurly", "CloseCurly", "QuestionMark", 
      "Comma", "String", "Foo", "Bar", "Any", "Comment", "WS", "Dot", "DotDot", 
      "Dollar", "Ampersand"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,31,209,6,-1,6,-1,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,
  	7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,
  	7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,
  	7,20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,
  	7,27,2,28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,2,85,8,2,11,2,12,2,86,1,
  	3,1,3,1,4,1,4,1,4,5,4,94,8,4,10,4,12,4,97,9,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,
  	1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	1,23,1,23,5,23,150,8,23,10,23,12,23,153,9,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,
  	1,26,3,26,175,8,26,1,26,1,26,1,26,1,27,1,27,5,27,182,8,27,10,27,12,27,
  	185,9,27,1,27,3,27,188,8,27,1,27,1,27,1,27,1,27,1,28,4,28,195,8,28,11,
  	28,12,28,196,1,28,1,28,1,29,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,
  	151,0,32,3,2,5,3,7,4,9,5,11,6,13,0,15,7,17,8,19,9,21,10,23,11,25,12,27,
  	13,29,14,31,15,33,16,35,17,37,18,39,19,41,20,43,21,45,30,47,31,49,22,
  	51,23,53,24,55,25,57,26,59,27,61,0,63,28,65,29,3,0,1,2,4,1,0,48,57,3,
  	0,65,90,97,122,128,1114111,2,0,10,10,13,13,3,0,9,10,13,13,32,32,212,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,
  	27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,
  	59,1,0,0,0,1,63,1,0,0,0,2,65,1,0,0,0,3,67,1,0,0,0,5,74,1,0,0,0,7,84,1,
  	0,0,0,9,88,1,0,0,0,11,90,1,0,0,0,13,98,1,0,0,0,15,100,1,0,0,0,17,102,
  	1,0,0,0,19,104,1,0,0,0,21,106,1,0,0,0,23,110,1,0,0,0,25,112,1,0,0,0,27,
  	114,1,0,0,0,29,116,1,0,0,0,31,118,1,0,0,0,33,120,1,0,0,0,35,122,1,0,0,
  	0,37,124,1,0,0,0,39,128,1,0,0,0,41,132,1,0,0,0,43,134,1,0,0,0,45,138,
  	1,0,0,0,47,143,1,0,0,0,49,147,1,0,0,0,51,156,1,0,0,0,53,164,1,0,0,0,55,
  	171,1,0,0,0,57,179,1,0,0,0,59,194,1,0,0,0,61,200,1,0,0,0,63,204,1,0,0,
  	0,65,206,1,0,0,0,67,68,5,114,0,0,68,69,5,101,0,0,69,70,5,116,0,0,70,71,
  	5,117,0,0,71,72,5,114,0,0,72,73,5,110,0,0,73,4,1,0,0,0,74,75,5,99,0,0,
  	75,76,5,111,0,0,76,77,5,110,0,0,77,78,5,116,0,0,78,79,5,105,0,0,79,80,
  	5,110,0,0,80,81,5,117,0,0,81,82,5,101,0,0,82,6,1,0,0,0,83,85,3,9,3,0,
  	84,83,1,0,0,0,85,86,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,8,1,0,0,0,
  	88,89,7,0,0,0,89,10,1,0,0,0,90,95,3,13,5,0,91,94,3,13,5,0,92,94,2,48,
  	57,0,93,91,1,0,0,0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,
  	0,0,0,96,12,1,0,0,0,97,95,1,0,0,0,98,99,7,1,0,0,99,14,1,0,0,0,100,101,
  	5,60,0,0,101,16,1,0,0,0,102,103,5,62,0,0,103,18,1,0,0,0,104,105,5,61,
  	0,0,105,20,1,0,0,0,106,107,5,97,0,0,107,108,5,110,0,0,108,109,5,100,0,
  	0,109,22,1,0,0,0,110,111,5,58,0,0,111,24,1,0,0,0,112,113,5,59,0,0,113,
  	26,1,0,0,0,114,115,5,43,0,0,115,28,1,0,0,0,116,117,5,45,0,0,117,30,1,
  	0,0,0,118,119,5,42,0,0,119,32,1,0,0,0,120,121,5,40,0,0,121,34,1,0,0,0,
  	122,123,5,41,0,0,123,36,1,0,0,0,124,125,5,123,0,0,125,126,1,0,0,0,126,
  	127,6,17,0,0,127,38,1,0,0,0,128,129,5,125,0,0,129,130,1,0,0,0,130,131,
  	6,18,1,0,131,40,1,0,0,0,132,133,5,63,0,0,133,42,1,0,0,0,134,135,5,44,
  	0,0,135,136,1,0,0,0,136,137,6,20,2,0,137,44,1,0,0,0,138,139,5,36,0,0,
  	139,140,1,0,0,0,140,141,6,21,3,0,141,142,6,21,4,0,142,46,1,0,0,0,143,
  	144,5,38,0,0,144,145,1,0,0,0,145,146,6,22,5,0,146,48,1,0,0,0,147,151,
  	5,34,0,0,148,150,9,0,0,0,149,148,1,0,0,0,150,153,1,0,0,0,151,152,1,0,
  	0,0,151,149,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,0,154,155,5,34,0,0,
  	155,50,1,0,0,0,156,157,4,24,0,0,157,158,5,102,0,0,158,159,5,111,0,0,159,
  	160,5,111,0,0,160,161,1,0,0,0,161,162,4,24,1,0,162,163,6,24,6,0,163,52,
  	1,0,0,0,164,165,5,98,0,0,165,166,5,97,0,0,166,167,5,114,0,0,167,168,1,
  	0,0,0,168,169,4,25,2,0,169,170,6,25,7,0,170,54,1,0,0,0,171,172,3,51,24,
  	0,172,174,3,63,30,0,173,175,3,53,25,0,174,173,1,0,0,0,174,175,1,0,0,0,
  	175,176,1,0,0,0,176,177,3,65,31,0,177,178,3,61,29,0,178,56,1,0,0,0,179,
  	183,5,35,0,0,180,182,8,2,0,0,181,180,1,0,0,0,182,185,1,0,0,0,183,181,
  	1,0,0,0,183,184,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,186,188,5,13,
  	0,0,187,186,1,0,0,0,187,188,1,0,0,0,188,189,1,0,0,0,189,190,5,10,0,0,
  	190,191,1,0,0,0,191,192,6,27,8,0,192,58,1,0,0,0,193,195,7,3,0,0,194,193,
  	1,0,0,0,195,196,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,198,1,0,0,
  	0,198,199,6,28,9,0,199,60,1,0,0,0,200,201,5,66,0,0,201,202,5,97,0,0,202,
  	203,5,122,0,0,203,62,1,0,0,0,204,205,5,46,0,0,205,64,1,0,0,0,206,207,
  	5,46,0,0,207,208,5,46,0,0,208,66,1,0,0,0,11,0,1,2,86,93,95,151,174,183,
  	187,196,10,5,1,0,4,0,0,6,0,0,3,0,0,2,1,0,7,1,0,1,24,0,1,25,1,0,2,0,0,
  	99,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tlexerLexerStaticData = std::move(staticData);
}

}

TLexer::TLexer(CharStream *input) : Lexer(input) {
  TLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *tlexerLexerStaticData->atn, tlexerLexerStaticData->decisionToDFA, tlexerLexerStaticData->sharedContextCache);
}

TLexer::~TLexer() {
  delete _interpreter;
}

std::string TLexer::getGrammarFileName() const {
  return "TLexer.g4";
}

const std::vector<std::string>& TLexer::getRuleNames() const {
  return tlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& TLexer::getChannelNames() const {
  return tlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& TLexer::getModeNames() const {
  return tlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& TLexer::getVocabulary() const {
  return tlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TLexer::getSerializedATN() const {
  return tlexerLexerStaticData->serializedATN;
}

const atn::ATN& TLexer::getATN() const {
  return *tlexerLexerStaticData->atn;
}

/* lexer definitions section */

void TLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 24: FooAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 25: BarAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

bool TLexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return FooSempred(antlrcpp::downCast<antlr4::RuleContext *>(context), predicateIndex);
    case 25: return BarSempred(antlrcpp::downCast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

void TLexer::FooAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0:  myFooLexerAction();  break;

  default:
    break;
  }
}

void TLexer::BarAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1:  myBarLexerAction();  break;

  default:
    break;
  }
}


bool TLexer::FooSempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return canTestFoo();
    case 1: return isItFoo();

  default:
    break;
  }
  return true;
}

bool TLexer::BarSempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return isItBar();

  default:
    break;
  }
  return true;
}


void TLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(tlexerLexerOnceFlag, tlexerLexerInitialize);
#endif
}
