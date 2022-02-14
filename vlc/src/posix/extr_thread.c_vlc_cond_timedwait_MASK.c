
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,struct timespec*) ;
 struct timespec FUNC_2 (int ) ;

int FUNC_3 (vlc_cond_t *VAR_1, vlc_mutex_t *VAR_2,
                        vlc_tick_t VAR_3)
{
    struct timespec VAR_4 = FUNC_2 (VAR_3);
    int VAR_5 = FUNC_1 (VAR_1, VAR_2, &VAR_4);
    if (VAR_5 != VAR_0)
        FUNC_0 ("timed-waiting on condition");
    return VAR_5;
}
