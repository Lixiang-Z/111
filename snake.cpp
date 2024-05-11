#include<snake.h>

Map::Map(){
    map = new MapDot*[SIZE];
    for(int i = 0;i<SIZE;++i){
        map[i] = new MapDot[SIZE];
    }
    snake = new Snake ;

    InitMap();
    
}

Map::~Map(){
    for(int i = 0;i<SIZE;++i){
        delete map[SIZE-i];
    }
    delete map;
    delete snake;
}

void Map::InitMap(){

}

void Map::InitSnake(){

}

void Map::Move(int direct){
    
}

void Map::CreateFood(){

}

bool Map::CheckEaten(){

}

bool Map::CheckDead(){

}

void Map::Replay(){

}

int Map::GetScore(){return score;}