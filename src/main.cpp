#include "camera.hpp"
#include "raylib.h"

int main(int argc, char* argv[]) {
    InitWindow(800, 600, "SchplunkQuest");
    InitAudioDevice();

    while (!WindowShouldClose()) {
        BeginDrawing();
        BeginMode2D(get_camera());
        {}
        EndMode2D();
        EndDrawing();
    }

    CloseAudioDevice();
    CloseWindow();

    return 0;
}
