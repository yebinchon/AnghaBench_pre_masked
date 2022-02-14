
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tm {int tm_year; scalar_t__ tm_isdst; int tm_mon; int tm_mday; void* tm_sec; void* tm_min; void* tm_hour; } ;
typedef int int64_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int const,int*,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tm*) ;

__attribute__((used)) static int64_t FUNC_4( uint64_t VAR_0 )
{
    const int VAR_1 = VAR_0 >> 24;
    struct tm VAR_2;

    VAR_2.tm_hour = FUNC_0(VAR_0 >> 16);
    VAR_2.tm_min = FUNC_0(VAR_0 >> 8);
    VAR_2.tm_sec = FUNC_0(VAR_0 );


    if( VAR_0 == FUNC_2(0xffffffffff) )
        return -1;

    FUNC_1( VAR_1, &VAR_2.tm_year, &VAR_2.tm_mon, &VAR_2.tm_mday );
    VAR_2.tm_year -= 1900;
    VAR_2.tm_mon--;
    VAR_2.tm_isdst = 0;

    return FUNC_3( &VAR_2 );
}
