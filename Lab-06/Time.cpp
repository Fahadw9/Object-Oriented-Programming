
#include "Time.h"

Time::Time()
{
	seconds = 0;
	minutes = 0;
	hours = 0;
}

Time::Time(int x, int y, int z)
{
	seconds = x;
	minutes = y;
	hours = z;
}

Time &Time::setHour( int h )
{
   hours = ( h >= 0 && h < 24 ) ? h : 0; 
   return *this; 
} 


Time &Time::setMinute( int m ) 
{
   minutes = ( m >= 0 && m < 60 ) ? m : 0; 
   return *this; 
} 


Time &Time::setSecond( int s ) 
{
   seconds = ( s >= 0 && s < 60 ) ? s : 0; 
   return *this; 
}

int Time::getHour(){
	return hours;
}
int Time::getMinute(){
	return minutes;
}
int Time::getSecond(){
	return seconds;
}

Time Time::getCurrentTime(){
	return *this;
}

Time::~Time()
{

}