#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void isItCafetaria(long int FIRST_DIGIT, long int CAFETERIA){
    if(FIRST_DIGIT==CAFETERIA)
    {
       printf("Your target location is Cafeteria\n");
    }
    else{
              printf("Your target location is not found\n");

    }
}

void checkMainMove(int main_move, int *p, int *p2){
     if(main_move<10)
    {
        p=2;
        p2=1;
    }
    else{
      printf("Implement your logic\n");
    }
}

void checkSecondDisit(int SECOND_DIGIT,int *p, int *p2){
    if(SECOND_DIGIT%10==0){
        p= 0;
    }
    else{
        p = 1;
    }
}

void moveAndPrint(int main_road_move_control, int first_turn,int second_road_move_control){
     int move=0;
    printf("Move through main road\n");
    while(move<main_road_move_control){
        printf("Move\n");
        Sleep(2000);
        ++move;
    }
    if(first_turn==0)
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
}

void finalCheck(int main_move){
    if(main_move<10){
        printf("Reached your target location\n");
    }
    else{
        printf("Implement further logic\n");
    }
}


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

    isItCafetaria(FIRST_DIGIT,CAFETERIA);
    
    int main_road_move_control=0, second_road_move_control=0;
    int first_turn;
    int second_turn;

    checkMainMove(main_move,&main_road_move_control, &second_road_move_control);

    checkSecondDisit(SECOND_DIGIT,&first_turn,&second_turn);
   
    moveAndPrint(main_road_move_control,first_turn, second_road_move_control);

    finalCheck(main_move);
    
    
    return 0;
}