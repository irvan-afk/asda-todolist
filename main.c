
#define RAYGUI_IMPLEMENTATION
#include "./raylib/include/raygui.h"
#include "./raylib/include/raylib.h"
#include "./include/linkedlist.h"
#include "./include/stack.h"
#include "./include/queue.h"

#include "./include/utils/menu.h"
#include <stdio.h>

int main(void)
{

    // Inisialisasi window
    const int screenWidth = 450;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    Font myFont = LoadFontEx("./assets/font/poppins.ttf", 64, 0, 0);
    GuiSetFont(myFont);
    SetTargetFPS(60); // Set frame per second
    // Loop utama aplikasi
    while (!WindowShouldClose()) // Loop sampai user tekan ESC atau close
    {
        Vector2 mousePos = GetMousePosition();
        BeginDrawing();

        char buffer[64];
        sprintf(buffer, "Mouse Position: (%.0f, %.0f)", mousePos.x, mousePos.y);
        DrawText(buffer, 10, 10, 20, DARKGRAY);

        DrawCircleV(mousePos, 5, RED);
        drawMenu();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    // Tutup window dan bersihkan resource
    UnloadFont(myFont);
    CloseWindow();

    return 0;
}
