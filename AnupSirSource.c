#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{

   long int start_location = 0;
   long int MAIN_GATE = 0;
   int TURN_RIGHT=0;
   int TURN_LEFT=1;
   long int CAFETERIA = 0;
   long int SBA_BUILDING = 1;
   long int target_location = 000000;
   long int FIRST_DIGIT, SECOND_DIGIT, THIRD_DIGIT, FOURTH_DIGIT, FIFTH_DIGIT, SIXTH_DIGIT;
   long int main_move=0;
   printf("Input your starting point\n");
   scanf("%ld",&start_location);
   printf("Input your target location\n");
   scanf("%ld", &target_location);
   long int temp_location = target_location;

   SIXTH_DIGIT = temp_location%10;
   temp_location=temp_location/10;
   FIFTH_DIGIT = temp_location%10;
   temp_location = temp_location/10;
   FOURTH_DIGIT = temp_location%10;
   temp_location = temp_location/10;
   THIRD_DIGIT = temp_location%10;
   temp_location=temp_location/10;
   SECOND_DIGIT = temp_location%10;
   temp_location=temp_location/10;
   FIRST_DIGIT = temp_location%10;

   main_move =FIRST_DIGIT*10+SECOND_DIGIT;

    if(FIRST_DIGIT==CAFETERIA)
    {
       printf("Your target location is Cafeteria\n");
    }
    else{
              printf("Your target location is not found\n");

    }
    int main_road_move_control=0, second_road_move_control=0;
    int first_turn;
    int second_turn;
    if(main_move<10)
    {
        main_road_move_control=2;
        second_road_move_control=1;
    }
    else{
      printf("Implement your logic\n");
    }
    if(SECOND_DIGIT%10==0){
        first_turn=TURN_RIGHT;
    }
    else{
        first_turn = TURN_LEFT;
    }
    int move=0;
    printf("Move through main road\n");
    while(move<main_road_move_control){
        printf("Move\n");
        Sleep(2000);
        ++move;
    }
    if(first_turn==TURN_RIGHT)
    {
    printf("Turn right\n");
    }
    else{
        printf("Turn left\n");
    }

    printf("Move through the road\n");
    move=0;
    while(move<second_road_move_control){
        printf("Move\n");
          Sleep(2000);
        ++move;
    }
    if(main_move<10){
        printf("Reached your target location\n");
    }
    else{
        printf("Implement further logic\n");
    }
    return 0;
}