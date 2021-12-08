#pragma once

#include "StateMachine.h"

class aCoolStateMachine : public StateMachine<aCoolStateMachine> {
    State<aCoolStateMachine>* StartState;
    State<aCoolStateMachine>* State1;
    State<aCoolStateMachine>* State2;
    State<aCoolStateMachine>* StateN;

    bool m_done;

   public:
    aCoolStateMachine();
    ~aCoolStateMachine();
    void Update();

    void Done() { m_done = true; };
    bool HasDone() { return m_done; };

    friend class StartState;
    friend class State1;
    friend class State2;
    friend class StateN;
};