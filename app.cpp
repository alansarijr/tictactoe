#include <iostream>
#include <string>

#define gridSize 3

using namespace std;

class Game{
private:
	char grid[gridSize][gridSize];
public:
	void generateGrid(){
		int number = 1;
		for(int i=0;i < gridSize;i++){
			for(int j=0;j < gridSize;j++){
				grid[i][j] = to_string(number).c_str()[0];
				number++;
			}
		}
	}
	void showGrid(){
			printf("---------\n");
			for(int x=0;x < gridSize;x++){
				for(int y=0;y < gridSize;y++){
					printf("%c |", grid[x][y]);
			}
			printf("\n--------\n");
		}
	}
	Game(){
		generateGrid();
		showGrid();
	}

};

int main(){
	Game game;	
	return 0;
}