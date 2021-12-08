#include "CoolStates.h"

#include "EventGenerator.h"
#include "aCoolStateMachine.h"

void StartState::Execute(aCoolStateMachine* pOwner) {
    // std::cout << "StartState: Executing something cool..." << std::endl;
    int event = EventGenerator::GetInstance()->Generate(1);
    if (event) {
        pOwner->ChangeState(pOwner->State1);
    }
};
void State1::Execute(aCoolStateMachine* pOwner) {
    // std::cout << "State1: Executing something cool..." << std::endl;
    int event = EventGenerator::GetInstance()->Generate(2);
    switch (event) {
        case 1:
            pOwner->ChangeState(pOwner->StateN);
            break;
        case 2:
            pOwner->ChangeState(pOwner->State2);
            break;
    }
};
void State2::Execute(aCoolStateMachine* pOwner) {
    // std::cout << "State2: Executing something cool..." << std::endl;
    int event = EventGenerator::GetInstance()->Generate(1);
    if (event) {
        pOwner->ChangeState(pOwner->State1);
    }
};
void StateN::Execute(aCoolStateMachine* pOwner) {
    pOwner->Done();

    std::cout << "StateN: Terminated" << std::endl;
};