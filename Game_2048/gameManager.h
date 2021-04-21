#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>  
#include <getopt.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
#include <iomanip>
#include <vector>
#include "player.h"
#define UP 'w'
#define DOWN 'z'
#define LEFT 'a'
#define RIGHT 's'

using namespace std;

//游戏系统
class GameManager {
public:
	//构造函数
	GameManager(int argc, char *const argv[]);   

	//游戏模式选择
	void modeChoosing(); 
	
	//游戏模式代号获取
	int modeGet();

	//游戏运行：单人模式
	void gameExecute();	

	//游戏运行：双人模式
	void gameExecute(int num);

	//打印数盘
	void printMap(); 

	//游戏初始化
	void gameInit();

	//实现方块移动
	int impleMap(char ch, int sign = 0);

	//四种方向的实现
	void directionJudge(int rowL, int colL, int& x, int& y, int& next, char ch);

	//判断只有唯一方向可走
	char directionOnly();

	//随机填充
	void fillMap();

	//判断方块是否已满
	bool isFull();

	//判断是否合成目标方块
	bool isWin();

	//双人模式结果判断
	void resultJudge(Player* players, int num);

private:
	//棋盘
	vector <vector <int>> map;
	//棋盘大小
	int size;
	//获胜条件
	int m_diffy[2];
	//获胜条件代号
	int m_dSign;
	//游戏模式代号
	int m_modeNum;
	//游戏分数
	int m_score;
	//移动是否为有效操作
	bool m_isChange;
	//结束条件
	bool endSign;
	//道具个数
	int cheatnum;
	//道具命令
	string command;
};

