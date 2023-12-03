
class Time
{
public:
	Time();
	Time(int x, int y, int z);
	Time getCurrentTime();
    Time &setHour( int );                 
    Time &setMinute( int );               
    Time &setSecond( int ); 

	int getHour();
    int getMinute();
    int getSecond();
	~Time();

private:
	int hours;
	int minutes;
	int seconds;
};