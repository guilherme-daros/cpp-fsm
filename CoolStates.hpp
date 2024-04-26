#pragma once

#include <iostream>

#include "State.hpp"

class StartState : public State<class aCoolStateMachine> {
  void Enter(aCoolStateMachine *pOwner) {
    std::cout << "Enter StartState" << std::endl;
  };
  void Execute(aCoolStateMachine *pOwner);
  void Exit(aCoolStateMachine *pOwner) {
    std::cout << "Exits StartState" << std::endl;
  };
};

class State1 : public State<class aCoolStateMachine> {
  void Enter(aCoolStateMachine *pOwner) {
    std::cout << "Enter State1" << std::endl;
  };
  void Execute(aCoolStateMachine *pOwner);
  void Exit(aCoolStateMachine *pOwner) {
    std::cout << "Exits State1" << std::endl;
  };
};

class State2 : public State<class aCoolStateMachine> {
  void Enter(aCoolStateMachine *pOwner) {
    std::cout << "Enter State2" << std::endl;
  };
  void Execute(aCoolStateMachine *pOwner);
  void Exit(aCoolStateMachine *pOwner) {
    std::cout << "Exits State2" << std::endl;
  };
};

class StateN : public State<class aCoolStateMachine> {
  void Enter(aCoolStateMachine *pOwner) {
    std::cout << "Enter StateN" << std::endl;
  };
  void Execute(aCoolStateMachine *pOwner);
  void Exit(aCoolStateMachine *pOwner) {
    std::cout << "Exits StateN" << std::endl;
  };
};
