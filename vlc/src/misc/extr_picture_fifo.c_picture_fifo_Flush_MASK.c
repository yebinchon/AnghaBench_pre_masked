
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_10__ {scalar_t__ date; struct TYPE_10__* p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_11__ {int lock; TYPE_1__* first; } ;
typedef TYPE_2__ picture_fifo_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(picture_fifo_t *VAR_1, vlc_tick_t VAR_2, bool VAR_3)
{
    picture_t *VAR_4;

    FUNC_4(&VAR_1->lock);

    VAR_4 = VAR_1->first;
    FUNC_2(VAR_1);

    picture_fifo_t VAR_5;
    FUNC_2(&VAR_5);

    while (VAR_4) {
        picture_t *VAR_6 = VAR_4->p_next;

        VAR_4->p_next = ((void*)0);
        if ((VAR_2 == VAR_0) ||
            ( VAR_3 && VAR_4->date <= VAR_2) ||
            (!VAR_3 && VAR_4->date >= VAR_2))
            FUNC_1(&VAR_5, VAR_4);
        else
            FUNC_1(VAR_1, VAR_4);
        VAR_4 = VAR_6;
    }
    FUNC_5(&VAR_1->lock);

    while ((VAR_4 = FUNC_0(&VAR_5)) != ((void*)0))
        FUNC_3(VAR_4);
}
