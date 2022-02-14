
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int wait; TYPE_2__* picture; } ;
typedef TYPE_1__ vout_snapshot_t ;
struct TYPE_7__ {struct TYPE_7__* p_next; } ;
typedef TYPE_2__ picture_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vout_snapshot_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    picture_t *VAR_1 = VAR_0->picture;
    while (VAR_1) {
        picture_t *VAR_2 = VAR_1->p_next;
        FUNC_1(VAR_1);
        VAR_1 = VAR_2;
    }

    FUNC_2(&VAR_0->wait);
    FUNC_3(&VAR_0->lock);
    FUNC_0(VAR_0);
}
