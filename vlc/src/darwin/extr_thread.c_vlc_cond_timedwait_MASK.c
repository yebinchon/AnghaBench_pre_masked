
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;
typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,struct timespec*) ;
 int FUNC_2 () ;
 struct timespec FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5 (vlc_cond_t *VAR_1, vlc_mutex_t *VAR_2,
                        vlc_tick_t VAR_3)
{


    FUNC_2();





    vlc_tick_t VAR_4 = FUNC_4();
    VAR_3 -= VAR_4;
    if (VAR_3 < 0)
        VAR_3 = 0;

    struct timespec VAR_5 = FUNC_3(VAR_3);
    int VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5);
    if (VAR_6 != VAR_0)
        FUNC_0 ("timed-waiting on condition");
    return VAR_6;
}
