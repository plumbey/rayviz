#include "includes/raylib.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	SetConfigFlags(FLAG_WINDOW_TRANSPARENT); // Configures window to be transparent
	InitWindow(screenWidth, screenHeight, "Transparent");
	SetWindowState(FLAG_WINDOW_UNDECORATED); // Hide border/titlebar; omit if you want them there.
	SetTargetFPS(60);

	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLANK);
		DrawRectangle(50, 50, 200, 100, PINK);
		EndDrawing();
	}
	CloseWindow();
}     

