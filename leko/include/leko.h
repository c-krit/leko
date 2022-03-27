/*
    Copyright (c) 2022 jdeokkim

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef LEKO_H
#define LEKO_H

#include <stdbool.h>

#include "raylib.h"

/* | 매크로 정의... | */

#define LEKO_NAME      "c-krit/leko"
#define LEKO_VERSION   "0.0.1"

#define TARGET_FPS     60

#define SCREEN_WIDTH   1024
#define SCREEN_HEIGHT  768

/* | 자료형 정의... | */

/* 게임의 현재 화면을 나타내는 열거형. */
typedef enum GameScreen {
    GSC_INIT,     // 초기 화면
    GSC_LOADING,  // 로딩 화면
    GSC_TITLE,    // 타이틀 화면
    GSC_SELECT,   // 레벨 선택 화면
    GSC_GAME      // 게임 플레이 화면
} GameScreen;

/* | `screen` 모듈 함수... | */

/* 게임의 현재 화면을 `screen`에 대응하는 화면으로 변경한다. */
void LoadScreen(GameScreen screen);

/* 게임의 현재 화면을 업데이트한다. */
void UpdateScreen(void);

/* | `loader` 모듈 함수... | */

/* ID가 `id`인 `Music` 리소스를 반환한다. */
Music *GetMusicResource(int id);

/* ID가 `id`인 `Sound` 리소스를 반환한다. */
Sound *GetSoundResource(int id);

/* ID가 `id`인 `Texture2D` 리소스를 반환한다. */
Texture2D *GetTextureResource(int id);

/* 로딩 화면을 초기화한다. */
void InitLoadingScreen(void);

/* 로딩 화면을 업데이트한다. */
void UpdateLoadingScreen(void);

/* 로딩 화면을 종료한다. */
int FinishLoadingScreen(void);

/* | `title` 모듈 함수... | */

/* 타이틀 화면을 초기화한다. */
void InitTitleScreen(void);

/* 타이틀 화면을 업데이트한다. */
void UpdateTitleScreen(void);

/* 타이틀 화면을 종료한다. */
int FinishTitleScreen(void);

/* | `select` 모듈 함수... | */

/* 레벨 선택 화면을 초기화한다. */
void InitSelectScreen(void);

/* 레벨 선택 화면을 업데이트한다. */
void UpdateSelectScreen(void);

/* 레벨 선택 화면을 종료한다. */
int FinishSelectScreen(void);

/* | `game` 모듈 함수... | */

/* 게임 플레이 화면을 초기화한다. */
void InitGameScreen(void);

/* 게임 플레이 화면을 업데이트한다. */
void UpdateGameScreen(void);

/* 게임 플레이 화면을 종료한다. */
int FinishGameScreen(void);

#endif