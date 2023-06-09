//
// Created by EgrZver on 11.04.2023.
//
#include <tchar.h>
#include <windows.h>
#define _UNICODE


#ifndef CHECKERS_DEFS_H
#define CHECKERS_DEFS_H

wchar_t fileName[256];
OPENFILENAMEW openFile;

WNDCLASSEX newWindowClass(HBRUSH backgroundColor, HCURSOR cursor, HINSTANCE instance, HICON icon/*, TCHAR name*/, WNDPROC procedureToCall);
LRESULT CALLBACK applicationProcessor(HWND window, UINT message, WPARAM wParam, LPARAM lParam);
Difficulty getDifficultyByNumber(int number);
int getNumberByDifficulty(Difficulty difficulty);
void defineOpenFile(HWND ofWindow);
void setWhoMovesCaption(HWND caption, Color color);
void setCGameTypeCaption(HWND caption, GameType gameType, Difficulty difficulty = Dumbass);
void renderBoard(); //todo define args

#endif //CHECKERS_DEFS_H
