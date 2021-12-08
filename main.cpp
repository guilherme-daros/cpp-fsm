#include <iostream>

#include "aCoolStateMachine.h"

int main() {
    aCoolStateMachine stateMachine;

    while (!stateMachine.HasDone()) {
        stateMachine.Update();
        }
    return 0;
}