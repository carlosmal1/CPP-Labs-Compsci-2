#include <iostream>
#include <ctime>

using namespace std;

int main () {

time_t current_time = time(0);
tm* local_time = localtime(&current_time);
int hours = local_time->tm_hour;
int minutes = local_time->tm_min;

info = new tm;
time( &rawtime );

info = localtime( &rawtime );

cout<<asctime(info)<<endl;
cout<tm_hour<<endl;

return(0);
}

