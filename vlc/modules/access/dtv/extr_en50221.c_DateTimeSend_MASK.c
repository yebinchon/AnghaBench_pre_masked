
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_gmtoff; int tm_sec; int tm_min; int tm_hour; } ;
struct TYPE_7__ {int i_last; } ;
typedef TYPE_2__ date_time_t ;
struct TYPE_8__ {TYPE_1__* p_sessions; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_6__ {scalar_t__ p_sys; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,struct tm*) ;
 scalar_t__ FUNC_4 (int *,struct tm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7( cam_t * VAR_1, int VAR_2 )
{
    date_time_t *VAR_3 =
        (date_time_t *)VAR_1->p_sessions[VAR_2 - 1].p_sys;

    time_t VAR_4 = FUNC_5(((void*)0));
    struct tm VAR_5;
    struct tm VAR_6;

    if ( FUNC_3(&VAR_4, &VAR_5) && FUNC_4(&VAR_4, &VAR_6) )
    {
        int VAR_7 = VAR_5.tm_year;
        int VAR_8 = VAR_5.tm_mon + 1;
        int VAR_9 = VAR_5.tm_mday;
        int VAR_10 = (VAR_8 == 1 || VAR_8 == 2) ? 1 : 0;
        int VAR_11 = 14956 + VAR_9 + (int)((VAR_7 - VAR_10) * 365.25)
                    + (int)((VAR_8 + 1 + VAR_10 * 12) * 30.6001);
        uint8_t VAR_12[7];



        FUNC_2( &VAR_12[0], VAR_11 );
        VAR_12[2] = (((VAR_5.tm_hour / 10) << 4) + (VAR_5.tm_hour % 10));
        VAR_12[3] = (((VAR_5.tm_min / 10) << 4) + (VAR_5.tm_min % 10));
        VAR_12[4] = (((VAR_5.tm_sec / 10) << 4) + (VAR_5.tm_sec % 10));
        FUNC_2( &VAR_12[5], VAR_6.tm_gmtoff / 60 );

        FUNC_0( VAR_1, VAR_2, VAR_0, VAR_12, 7 );

        VAR_3->i_last = FUNC_6();
    }
}
