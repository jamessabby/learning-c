#include <stdio.h>

// NOTE: I already know the switch cases

// Function prototypes;
void Stop();
void SlowDown();
void Go();
void Broken();

int main() {

  char trafficLightStatus = 'r';

  if ('r' == trafficLightStatus) {
    Stop();
  } else if ('y' == trafficLightStatus) {
    SlowDown();
  } else if ('g'== trafficLightStatus) {
    Go();
  } else {
    Broken();
  }

  return 0;
}

void Stop() {
  printf("The traffic light is red. Stop!");
}

void SlowDown() {
  printf("The traffic light is yellow. Slow down!");
}

void Go() {
  printf("The traffic light is green. Go!");
}

void Broken() {
  printf("The traffic light is broken. Be Cautious!");
}