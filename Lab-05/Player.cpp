#include "Player.h"
#include <fstream>
#include <iostream>
using namespace std;

Player::Player() {
	TeamName = NULL;
	PlayerName = NULL;
	numberofinnings = 0;
	numberofnotouts = 0;
	scorelist = NULL;
}

char* Player::getTeamName() {
	return TeamName;
}
char* Player::getPlayerName() {
	return PlayerName;
}
int Player::getnumberofinnings() {
	return numberofinnings;
}
int Player::getnumberofnotouts() {
	return numberofnotouts;
}
int* Player::getscorelist() {
	return scorelist;
}

void Player::setTeamName(char* TName) {
	TeamName = TName;
}
void Player::setPlayerName(char* PName) {
	PlayerName = PName;
}
void Player::setnumberofinnings(int num) {
	numberofinnings = num;
}
void Player::setnumberofnotouts(int num) {
	numberofnotouts = num;
}
void Player::setscorelist(int* list) {
	scorelist = list;
}

double Player::avg() {
	double avg;
	avg =  totalScore() / (getnumberofinnings() - getnumberofnotouts());
	return avg;
}
double Player::totalScore() {
	double total = 0.0;
	for (int i = 0; i < getnumberofinnings(); i++)
	{
		total = total + *(scorelist + i);
	}
	return total;
}
void Player::print() {
	cout << "Team Name : " << TeamName <<endl;
	cout << "Name : " << PlayerName << endl;
	cout << "Number of Innings : " << numberofinnings << endl;
	cout << "Average Score : " << avg() << endl;
	cout << "Scores in each match are : ";
	for (int i = 0; i < getnumberofinnings(); i++)
	{
		cout << *(scorelist + i)<<" ";
	}
	cout << endl;
}
void Player::compare(Player p1) {
	if (avg() > p1.avg()) {
		cout << getPlayerName() << " has a better average" << endl;
		print();
	}
	else
	{
		cout << p1.getPlayerName() << " has a better average" << endl;
		p1.print();
	}
}
