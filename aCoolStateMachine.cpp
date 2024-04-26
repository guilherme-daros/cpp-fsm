#include "aCoolStateMachine.hpp"

#include "CoolStates.hpp"

aCoolStateMachine::aCoolStateMachine() {
  StartState = new class StartState();
  State1 = new class State1();
  State2 = new class State2();
  StateN = new class StateN();
  StateMachine<aCoolStateMachine>::Init(this, StartState);
};
aCoolStateMachine::~aCoolStateMachine() {
  delete StartState;
  delete State1;
  delete State2;
  delete StateN;
  std::cout << "aCoolStateMachine destroyed" << std::endl;
};
void aCoolStateMachine::Update() {
  /**/
  StateMachine<aCoolStateMachine>::Update();
};
