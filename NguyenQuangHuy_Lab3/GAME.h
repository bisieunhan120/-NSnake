#pragma once
//#include "stdafx.h"
#include "GLOBAL.h"
#include "GAME.h"
#include "ENTITIES.h"

#define GAME_MAX_FPS 12 /* giới hạn tới tốc độ khung 12fps */
#define GAME_FRAME_TIME (1000 / GAME_MAX_FPS)

typedef struct game /* cấu trúc trò chơi bao gồm */
{
	FRUIT f; /* mồi */
	SNAKE s; /* rắn */
	DIRECTION dir; /* hướng di chuyển rắn*/
	SDL_bool running; /* cờ trạng thái hoạt động */
} GAME;

/* khời tạo*/
void gameInit(GAME* g, SDL_bool fullscreen);

/* kết thúc trò chơi */
void gameShutdown(GAME* g);

/* vòng lặp trò chơi ádasdas*/
void gameLoop(GAME* g);

/* cập nhật trạng thái trò chơi */
void gameUpdate(GAME* g);

/* dựng hình cho cho 1 frame */
void gameDraw(GAME* g);

/* xử lý input */
void gameInput(GAME* g);