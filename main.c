#include "./raylib/include/raylib.h"

int main(void)
{
    // Inisialisasi window
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    Font myFont = LoadFontEx("./assets/fonts/poppins.ttf", 64, 0, 0);
    // Loop utama aplikasi
    while (!WindowShouldClose()) // Loop sampai user tekan ESC atau close
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTextEx(myFont, "Ini pakai font custom!", (Vector2){ 100, 200 }, 32, 2, BLACK);
        EndDrawing();
    }

    // Tutup window dan bersihkan resource
    UnloadFont(myFont);
    CloseWindow();

    return 0;
}
