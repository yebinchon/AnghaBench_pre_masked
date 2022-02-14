
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;
typedef int time_t ;
struct timeval {int dummy; } ;
typedef int ULONG ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct timeval*) ;

int FUNC_3 (vlc_cond_t *VAR_0, vlc_mutex_t *VAR_1,
                                time_t VAR_2)
{
    ULONG VAR_3;
    vlc_tick_t VAR_4;
    struct timeval VAR_5;

    FUNC_0 (&VAR_5, ((void*)0));

    VAR_4 = FUNC_2( &VAR_5 );
    VAR_4 = (VAR_2 - VAR_4) / 1000;
    if( VAR_4 < 0 )
        VAR_4 = 0;

    VAR_3 = ( VAR_4 > 0x7fffffff ) ? 0x7fffffff : VAR_4;

    return FUNC_1 (VAR_0, VAR_1, VAR_3);
}
