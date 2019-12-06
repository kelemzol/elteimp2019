stdlib.h
int rand(); // srand(1)
void srand( unsigned seed );

time.h
time_t time( time_t* arg );
char* asctime( const struct tm* time_ptr ); 
  // Www Mmm dd hh:mm:ss yyyy\n
tm* gmtime( const time_t* time );
tm: int    tm_sec   - seconds [0,61]
    int    tm_min   - minutes [0,59]
    int    tm_hour  - hour [0,23]
    int    tm_mday  - day of month [1,31]
    int    tm_mon   - month of year [0,11]
    int    tm_year  - years since 1900
    int    tm_wday  - day of week [0,6] (Sunday = 0)
    int    tm_yday  - day of year [0,365]
    int    tm_isdst - daylight savings flag




