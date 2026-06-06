// PROGRAM:14
// WAP to calculate an angle between hour and minute hand. (Hours and minutes
// should be taken from user).
// DIFFICULTY:8

#include <stdio.h>
int main(void) {

  int hour = -1;
  int minute = -1;

  printf("enter hour and minute in 12 format of hh:mm ");
  scanf("%d:%d", &hour, &minute);

  // 6 deg per minute
  // 1 hour has 30deg + 0.5 deg per minute
  // 60 minute for 30 deg for 1 minute 0.5 deg

  float hour_hand_angle = 30 * hour + 0.5 * minute;
  float minute_hand_angle = 6 * minute;

  float bet_angle = hour_hand_angle - minute_hand_angle;
  if (bet_angle < 0) {
    bet_angle *= -1;
  }

  printf("angle between minute and hour hand is %.2f \n", bet_angle);
  return 0;
}
