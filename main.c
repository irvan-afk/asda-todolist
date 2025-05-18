
#define RAYGUI_IMPLEMENTATION
#include "./raylib/include/raygui.h"
#include "./raylib/include/raylib.h"
#include "./include/linkedlist.h"
#include "./include/stack.h"
#include "./include/queue.h"
#include "utils.h"
#include <stdio.h>

int main(void)
{

    // Inisialisasi window
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    Font myFont = LoadFontEx("./assets/font/poppins.ttf", 64, 0, 0);
    GuiSetFont(myFont);
    SetTargetFPS(60); // Set frame per second
    // Loop utama aplikasi
    while (!WindowShouldClose()) // Loop sampai user tekan ESC atau close
    {
        Vector2 position = GetMousePosition();
        BeginDrawing();

        ClearBackground(RAYWHITE);
        drawMenu();
        EndDrawing();
    }

    // Tutup window dan bersihkan resource
    UnloadFont(myFont);
    CloseWindow();

    return 0;
}
