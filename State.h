#pragma once

template <class T>
class State {
   public:
    virtual ~State(){};
    virtual void Enter(T* pOwner) = 0;
    virtual void Execute(T* pOwner) = 0;
    virtual void Exit(T* pOwner) = 0;
};