#pragma once
#include "GLOBAL.h"

#define SNAKE_MAXLEN 100 /* chiều dài tối đa của rắn */
#define SNAKE_INITLEN 2 /* chiều dài bắt đầu của rắn */

typedef struct snake {
	COORD coords[SNAKE_MAXLEN]; /* rắn là™ 2D */
	int len; /* độ dài hiện thời của rắn */
} SNAKE;

typedef struct fruit {
	COORD loc; /* vị trí mồi */
	Uint32 color; /* màu sắc*/
} FRUIT;

/* vẽ 1 ô của thân rắn hoặc đầu rắn */
void snakeCell(COORD c, SDL_bool head);

/* khời tạo rắn */
void snakeInit(SNAKE* s);

/* vẽ rắn */
void snakeDraw(const SNAKE* s);

/* cập nhật trạng thái của rắn */
void snakeUpdate(SNAKE* s);

/* phát sinh mồi*/
void fruitGen(FRUIT* f, const SNAKE* s);

/* vẽ mồi */
void fruitDraw(const FRUIT* f);