#include <iostream>

#include "aCoolStateMachine.h"

int main() {
    srand(time(0));
    aCoolStateMachine stateMachine;

    while (!stateMachine.HasDone()) {
        stateMachine.Update();
    }
    return 0;
}
