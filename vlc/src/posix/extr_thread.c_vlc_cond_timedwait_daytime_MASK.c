
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;
typedef int time_t ;
struct timespec {int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,struct timespec*) ;

int FUNC_2 (vlc_cond_t *VAR_1, vlc_mutex_t *VAR_2,
                                time_t VAR_3)
{
    struct timespec VAR_4 = { VAR_3, 0 };
    int VAR_5 = FUNC_1 (VAR_1, VAR_2, &VAR_4);
    if (VAR_5 != VAR_0)
        FUNC_0 ("timed-waiting on condition");
    return VAR_5;
}
