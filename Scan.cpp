//中文utf8输出
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#ifdef _WIN32
#include <Windows.h>
#endif

int main(void)
{

#ifdef _WIN32
    SetConsoleOutputCP (65001);
    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = 24;
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
#endif

    printf("This is 中文!\n");

    return 0;
}
