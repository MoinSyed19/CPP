#include "game.h"
using namespace std;

int main() {

	Game game;

	game.welcome();

	cout << "\nPress Enter to continue";
	getchar();

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	game.showAllPlayers();

	game.selectPlayers();

	game.showTeamPlayers();

	game.toss();

	game.startFirstInnings();

	game.playInnings();

	return 0;
}
