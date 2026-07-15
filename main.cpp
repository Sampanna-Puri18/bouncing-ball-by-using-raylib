#include<iostream>
#include<raylib.h>
int main()
{
    int x=400,y=300;
    float radius=20;
    Color color=WHITE;
    InitWindow(800,600,"Bouncing ball");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(x,y,radius,color);
        EndDrawing();

    }
    
    CloseWindow();
}