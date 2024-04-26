#include "EventGenerator.hpp"
#define MAX_COUNTER 5

EventGenerator *EventGenerator::GetInstance() {
  static EventGenerator s_instance;
  return &s_instance;
};

int EventGenerator::Generate(int eventNum) {
  if (m_counter == 0) {
    m_counter = rand() % MAX_COUNTER + 1;
    if (eventNum > 1)
      return rand() % eventNum + 1;
    return 1;
  } else {
    m_counter--;
  }
  return 0;
}
