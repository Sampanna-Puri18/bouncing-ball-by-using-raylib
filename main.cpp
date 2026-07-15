#include<iostream>
#include<raylib.h>
int main()
{
    float x=400,y=300;
    float radius=20;
    float vx=2,vy=2
    ;
    Color colors[]={RED,GREEN,BLUE,YELLOW,PURPLE,ORANGE};
    int colorindex=0;
    Color color=colors[colorindex];
    
    
    InitWindow(800,600,"Bouncing ball");
    Texture2D bg=  LoadTexture("bg.jpg");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        if(IsKeyPressed(KEY_SPACE))
        {
            colorindex++;
            color=colors[colorindex];
            if(colorindex>=6)colorindex=0;

        }
        
        x+=vx;
        y+=vy;
        if(x+radius>=800 || x-radius<=0) vx=-vx;
        if(y+radius>=600 || y-radius<=0) vy=-vy;
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(bg,0,0,WHITE);

        
        DrawCircle(x,y,radius,color);
            DrawText("Click space to change color", 10, 10, 20, GRAY);
        
    
        EndDrawing();

    }
    UnloadTexture(bg);
    
    CloseWindow();
}