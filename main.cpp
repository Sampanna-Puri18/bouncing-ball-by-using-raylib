#include<iostream>
#include<raylib.h>
int main()
{
    float x=400,y=300;
    float radius=20;
    float vx=2,vy=2
    ;
    Color color=WHITE;
    
    InitWindow(800,600,"Bouncing ball");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        
        x+=vx;
        y+=vy;
        if(x+radius>=800 || x-radius<=0) vx=-vx;
        if(y+radius>=600 || y-radius<=0) vy=-vy;
        BeginDrawing();

        ClearBackground(BLACK);
        DrawCircle(x,y,radius,color);
        
        
        EndDrawing();

    }
    
    CloseWindow();
}