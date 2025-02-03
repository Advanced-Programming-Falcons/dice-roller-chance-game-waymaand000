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
    Texture2D target = LoadTexture("target.png");
    string instructions = "Press Space to do Russian Roulette";
    while(!WindowShouldClose()){
        if (IsKeyPressed(KEY_SPACE)){
            die.roll_dice();
        }
        BeginDrawing();
        ClearBackground(WHITE);

        DrawTexture(people, 0, 0, WHITE);
        DrawText(instructions.c_str(), 250, 900, 30, BLACK);

        
        if (die.side==0){
        DrawTexture(gun, 0, 20, WHITE); 
           
        }
        else if (die.side==1){
        DrawTexture(gun1, 0, 20, WHITE);
        DrawTexture(target, 363, 17, WHITE);     
        }
        else if (die.side==2){
        DrawTexture(gun2, 0, 20, WHITE);   
        DrawTexture(target, 648, 180, WHITE);  
        }
        else if (die.side==3){
        DrawTexture(gun3, 0, 20, WHITE); 
        DrawTexture(target, 648, 405, WHITE);       
        }
        else if (die.side==4){
        DrawTexture(gun4, -50, 20, WHITE);    
        DrawTexture(target, 363, 545, WHITE); 
        }
        else if (die.side==5){
        DrawTexture(gun5, 0, 20, WHITE);
        DrawTexture(target, 45, 405, WHITE);    
        }
        else if (die.side==6){
        DrawTexture(gun6, 0, 20, WHITE);
        DrawTexture(target, 45, 180, WHITE);    
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