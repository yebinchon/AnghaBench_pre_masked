
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_timer* vlc_timer_t ;
struct vlc_timer {void (* func ) (void*) ;int lock; int reschedule; int thread; int overruns; scalar_t__ interval; scalar_t__ value; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void (*) (void*)) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct vlc_timer*) ;
 struct vlc_timer* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,struct vlc_timer*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;

int FUNC_10 (vlc_timer_t *VAR_3, void (*VAR_4) (void *), void *VAR_5)
{
    struct vlc_timer *VAR_6 = FUNC_3 (sizeof (*VAR_6));

    if (FUNC_4(VAR_6 == ((void*)0)))
        return VAR_0;
    FUNC_9 (&VAR_6->lock);
    FUNC_7 (&VAR_6->reschedule);
    FUNC_0 (VAR_4);
    VAR_6->func = VAR_4;
    VAR_6->data = VAR_5;
    VAR_6->value = 0;
    VAR_6->interval = 0;
    FUNC_1(&VAR_6->overruns, 0);

    if (FUNC_5 (&VAR_6->thread, VAR_2, VAR_6,
                   VAR_1))
    {
        FUNC_6 (&VAR_6->reschedule);
        FUNC_8 (&VAR_6->lock);
        FUNC_2 (VAR_6);
        return VAR_0;
    }

    *VAR_3 = VAR_6;
    return 0;
}
