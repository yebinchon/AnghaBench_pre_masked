
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {struct TYPE_4__* p_next; int date; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_5__ {int lock; TYPE_1__* first; } ;
typedef TYPE_2__ picture_fifo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(picture_fifo_t *VAR_0, vlc_tick_t VAR_1)
{
    FUNC_0(&VAR_0->lock);
    for (picture_t *VAR_2 = VAR_0->first; VAR_2 != ((void*)0);) {
        VAR_2->date += VAR_1;
        VAR_2 = VAR_2->p_next;
    }
    FUNC_1(&VAR_0->lock);
}
