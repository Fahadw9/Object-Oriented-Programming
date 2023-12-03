
class Player
{
public:
	Player();
	Player(char* filename);

	char* getTeamName();
	char* getPlayerName();
	int getnumberofinnings();
	int getnumberofnotouts();
	int* getscorelist();

	void setTeamName(char* TName);
	void setPlayerName(char* PName);
	void setnumberofinnings(int num);
	void setnumberofnotouts(int num);
	void setscorelist(int* list);

	double avg();
	double totalScore();
	void print();
	void compare(Player p1);

private:
	char* TeamName = new char[20]; 
	char* PlayerName = new char[20]; 
	int numberofinnings; 
	int numberofnotouts; 
	int* scorelist = new int[20];
};
