
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_clock_t ;
struct TYPE_3__ {int lock; int * master; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vlc_clock_main_t *VAR_0, vlc_clock_t *VAR_1)
{
    FUNC_3(&VAR_0->lock);
    if (VAR_0->master != ((void*)0))
    {
        FUNC_0(VAR_0->master);
        FUNC_2(VAR_0->master);
    }
    FUNC_1(VAR_1);
    VAR_0->master = VAR_1;
    FUNC_4(&VAR_0->lock);
}
