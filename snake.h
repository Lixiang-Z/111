#include "string"
#include<iostream>
#include<queue>
#include<cstdio>
//还有需要加的头文件

#define SIZE 100 ///<场景大小

enum Direction{UP,DOWN,LEFT,RIGHT};///<按键和方向的转换
/*UP = 0
DOWN = 1
LEFT = 2
RIGHT = 3 */


enum Level{es,nm,hd,at};///<Level决定蛇的移动速度
/*es = 0
  nm = 1
  hd = 2
  at = 3 */

enum Thing{Empty,Barrier,Snake,Fruit};///<地图各点是什么
/*Empty=0
Barrier=1
Snake=2
Fruit=3 */


typedef struct {
	Thing state;
	bool SnakeNext;
} MapDot;


/*!
 * @brief 蛇
 * @param snakebody 蛇的每一个位置用二维队列存储，对应每个点的横纵坐标
 * @param if_last 这个棋子是不是最后下的
 */

typedef struct{
		queue<int> SnakeBody[2];
		Direction SnakeDirection;
		int SnakeLenth;
		Level Speed;
} Snake;



class Map {
	private:
		MapDot** map;
		Snake snake;
		int score;

	public:
		Map();
		~Map();

		void InitMap();
		void InitSnake();
		void Move(int );
		void CreateFood();
		bool CheckEaten();
		bool CheckDead();
		void Replay();
		int  GetScore();

};


int score;

ChooseOption     ChooseMap       	Out    Stop   Restart	
		 	 SetEnd       	
		ShowSnake    ShowBlock    ShowBall   (ShowPoint)   
			Display
