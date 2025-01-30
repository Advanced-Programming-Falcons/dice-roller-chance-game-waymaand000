#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <raylib.h>
#include "chance.h"
using namespace std;
int main(void){
    const int screen_width = 1000;
    const int screen_height = 1000;
    srand(time(0));
    Dice die(0);
    
    InitWindow(screen_width,screen_height,"Russian Roulette");

    SetTargetFPS(60);

    Texture2D gun = LoadTexture("gun.png");
    Texture2D gun1 = LoadTexture("gun1.png");
    Texture2D gun2 = LoadTexture("gun2.png");
    Texture2D gun3 = LoadTexture("gun3.png");
    Texture2D gun4 = LoadTexture("gun4.png");
    Texture2D gun5 = LoadTexture("gun5.png");
    Texture2D gun6 = LoadTexture("gun6.png");
    Texture2D people = LoadTexture("people.png");

    while(!WindowShouldClose()){
        if (IsKeyPressed(KEY_SPACE)){
            die.roll_dice();
        }
        BeginDrawing();
        ClearBackground(WHITE);

        DrawTexture(people, 70, 100, WHITE);

        
        if (die.side==0){
        DrawTexture(gun, 70, 120, WHITE);    
        }
        else if (die.side==1){
        DrawTexture(gun1, 70, 120, WHITE);    
        }
        else if (die.side==2){
        DrawTexture(gun2, 70, 120, WHITE);    
        }
        else if (die.side==3){
        DrawTexture(gun3, 70, 120, WHITE);    
        }
        else if (die.side==4){
        DrawTexture(gun4, 20, 120, WHITE);    
        }
        else if (die.side==5){
        DrawTexture(gun5, 70, 120, WHITE);    
        }
        else if (die.side==6){
        DrawTexture(gun6, 70, 120, WHITE);    
        }
        EndDrawing();    

    }
    UnloadTexture(gun);
    UnloadTexture(gun1);
    UnloadTexture(gun2);
    UnloadTexture(gun3);
    UnloadTexture(gun4);
    UnloadTexture(gun5);
    UnloadTexture(gun6);
    UnloadTexture(people);
    CloseWindow();
    return 0;


}