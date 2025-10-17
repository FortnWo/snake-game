#include <iostream>
#include <windows.h>

const int WIDTH = 20;
const int HEIGHT = 10;
int snakeX = HEIGHT / 2;
int snakeY = WIDTH / 2;

void drawMap(void){
    for(int i  = 0; i <WIDTH + 2; i++){
        std::cout << "#";
    }
    std::cout << std::endl;

    for(int i  = 0; i < HEIGHT; i++){
        for (int j = 0; j < WIDTH;j++){
            if(j == 0 || j == WIDTH - 1){
                std::cout << "#";
            }
            else if(i == snakeX && j == snakeY){
                std::cout << "0";
            }
            else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    for(int i  = 0; i <WIDTH + 2; i++){
        std::cout << "#";
    }
    std::cout << std::endl;
}

int main() {
    drawMap();
    Sleep(200);
    return 0;
}