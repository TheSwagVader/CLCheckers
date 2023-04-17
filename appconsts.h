#ifndef CHECKERS_APPCONSTS_H
#define CHECKERS_APPCONSTS_H

const int WINDOW_SIZE_LENGTH = 600;
const int WINDOW_SIZE_HEIGHT = 600;

TCHAR APPLICATION_MAIN_CLASS_NAME[] = "CLCMain";
const char APPLICATION_TITLE[] = "CLCheckers by TheSwagVader";

const char* mainMenuPoints[36] = {
        "������ ����� ����",
        "��������� ����",
        "������� ����",
        "����������",
        "����� �� ����"
};
const char* mainMenuPointsDescriptions[50] = {
        "������� ������ ��������� ������ ��� ����������",
        "���������� ����������� ����� ����, �������� �",
        "�������� � �������� ����",
        "������ ����������",
        "��� �������?"
};

const char *emptyBlackTexture = "resources\\emptyBlack.bmp";
const char *emptyWhiteTexture = "resources\\emptyWhite.bmp";
const char *regBlackTexture = "resources\\regBlack.bmp";
const char *regWhiteTexture = "resources\\regWhite.bmp";
const char *kingBlackTexture = "resources\\kingBlack.bmp";
const char *kingWhiteTexture = "resources\\kingWhite.bmp";
const char* textures[6] = {
    emptyBlackTexture,
    emptyWhiteTexture,
    regBlackTexture,
    regWhiteTexture,
    kingBlackTexture,
    kingWhiteTexture
};
/*const char* texturePaths[50] = {
    "resource/emptyBlack.bmp",
    "resource/emptyWhite.bmp",
    "resource/regBlack.bmp",
    "resource/regWhite.bmp",
    "resource/kingBlack.bmp",
    "resource/kingWhite.bmp"
};*/
#endif //CHECKERS_APPCONSTS_H
