#include "raylib.h"

int main(){
    
    InitWindow(800, 600, "pixel 1");
    SetTargetFPS(1);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        int i = 0;

        int num1 = 400;
        int num2 = 200;

        
        for (i =0; i < 300; i++){
            DrawPixel(num1++, num2++, WHITE);
           
            
        }
        EndDrawing();
    }
    



    return 0;
}