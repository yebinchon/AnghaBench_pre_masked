
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ request_count; int lock; TYPE_2__* picture; int wait; scalar_t__ is_available; } ;
typedef TYPE_1__ vout_snapshot_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ picture_t ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__ const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

picture_t *FUNC_4(vout_snapshot_t *VAR_0, vlc_tick_t VAR_1)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    const vlc_tick_t VAR_2 = FUNC_3() + VAR_1;

    FUNC_1(&VAR_0->lock);


    VAR_0->request_count++;


    while (VAR_0->is_available && !VAR_0->picture &&
        FUNC_0(&VAR_0->wait, &VAR_0->lock, VAR_2) == 0);


    picture_t *VAR_3 = VAR_0->picture;
    if (VAR_3)
        VAR_0->picture = VAR_3->p_next;
    else if (VAR_0->request_count > 0)
        VAR_0->request_count--;

    FUNC_2(&VAR_0->lock);

    return VAR_3;
}
