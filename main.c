
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
    const int screenWidth = 1300;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Raylib Test Window");
    Font myFont = LoadFontEx("./assets/font/poppins.ttf", 100, 0, 0);
    GuiSetFont(myFont);
    GuiSetStyle(DEFAULT, TEXT_SIZE, 30);
    SetTargetFPS(60); // Set frame per second
    // Loop utama aplikasi
    bool exit = 0;
    while (!WindowShouldClose() && !exit) // Loop sampai user tekan ESC atau close
    {
        Vector2 mousePos = GetMousePosition();
        BeginDrawing();
        ClearBackground(GREEN);

        //to do list
        DrawTextEx(myFont,"To Do List",(Vector2){30,30},70,1.5,BLACK);
        
        // button
        if (GuiButton((Rectangle){30,100,250,50}, "Tambah Tugas")) {
            DrawText("PilihKategori", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,170,250,50}, "Tambah Kategori")) {
            DrawText("menambah cabang tree", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,240,250,50}, "Lihat Tugas")) {
            DrawText("PilihKategori", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,310,250,50}, "Tandai Selesai")) {
            DrawText("PilihKategori", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,380,250,50}, "Undo")) {
            DrawText("undo", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,450,250,50}, "Hapus Tugas")) {
            DrawText("PilihKategori", 310, 320, 20, RED);
        }
        if (GuiButton((Rectangle){30,520,250,50}, "Exit")) {
            exit = 1;
        }


        //mouse
        char buffer[64];
        sprintf(buffer, "Mouse Position: (%.0f, %.0f)", mousePos.x, mousePos.y);
        DrawText(buffer, screenHeight * 0.5f, screenWidth * 0.5f, 20, DARKGRAY);
        DrawCircleV(mousePos, 5, RED);

        EndDrawing();
    }

    // Tutup window dan bersihkan resource
    UnloadFont(myFont);
    CloseWindow();

    return 0;
}
