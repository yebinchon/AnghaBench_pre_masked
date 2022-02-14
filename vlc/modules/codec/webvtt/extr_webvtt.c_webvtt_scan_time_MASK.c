
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,...) ;

bool FUNC_2( const char *VAR_0, vlc_tick_t *VAR_1 )
{
    unsigned VAR_2[4];
    if( FUNC_1( VAR_0, "%2u:%2u.%3u",
                      &VAR_2[1], &VAR_2[2], &VAR_2[3] ) == 3 )
    {
        VAR_2[0] = 0;
        *VAR_1 = FUNC_0( VAR_2 );
        return 1;
    }
    else if( FUNC_1( VAR_0, "%u:%2u:%2u.%3u",
                          &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3] ) == 4 )
    {
        *VAR_1 = FUNC_0( VAR_2 );
        return 1;
    }
    else return 0;
}
