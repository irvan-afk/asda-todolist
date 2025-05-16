#include "./raylib/include/raylib.h"
#include <stdio.h>

int main(void)
{
    // Inisialisasi window
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    Font myFont = LoadFontEx("./assets/font/poppins.ttf", 32, 0, 0);
    // Loop utama aplikasi
    while (!WindowShouldClose()) // Loop sampai user tekan ESC atau close
    {
        Vector2 position = GetMousePosition();
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTextEx(myFont, "Ini pakai font custom!", (Vector2){ 100, 200 }, 32, 2, BLACK);
         char posText[64];
        sprintf(posText, "x = %d, y = %d", (int)position.x, (int)position.y);
        DrawTextEx(myFont, posText, (Vector2){ 100, 250 }, 32, 2, BLACK);
        EndDrawing();
    }

    // Tutup window dan bersihkan resource
    UnloadFont(myFont);
    CloseWindow();

    return 0;
}
