#include <stdio.h>
#include <Windows.h>

#define screenHeight  40
#define screenWidth  120
#define SIZE screenHeight * screenWidth

int main(){
    char buffer[SIZE];
    HANDLE console = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(console);
    DWORD written = 0;
    COORD writeCoords = {0,0};

    while(1){


        buffer[SIZE - 1] = '\0';
        WriteConsoleOutputCharacter(console, buffer, SIZE, writeCoords, &written);
    }

    

    return 0;
}