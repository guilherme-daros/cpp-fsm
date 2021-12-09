#pragma once
#include <iostream>
#define MAX_COUNTER 5

class EventGenerator {
    int m_counter;
    EventGenerator() {
        // init value
        m_counter = rand() % MAX_COUNTER + 1;
    };

   public:
    // This class is a singleton
    static EventGenerator* GetInstance();
    void Cleanup();

    int Generate(int eventNum);
};