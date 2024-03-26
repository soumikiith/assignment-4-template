#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm/IR/LegacyPassManager.h"

using namespace llvm;

namespace {
struct cons_eval : public FunctionPass {
  static char ID;
  cons_eval() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    // write your code here
    return false;
  }
}; // end of struct alias_c
}  // end of anonymous namespace

char cons_eval::ID = 0;
static RegisterPass<cons_eval> X("cons_eval_given", "Constant Propagation Pass for Assignment");
