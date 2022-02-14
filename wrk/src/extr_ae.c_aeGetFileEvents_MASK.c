
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; } ;
typedef TYPE_1__ aeFileEvent ;
struct TYPE_5__ {int setsize; TYPE_1__* events; } ;
typedef TYPE_2__ aeEventLoop ;



int FUNC_0(aeEventLoop *VAR_0, int VAR_1) {
    if (VAR_1 >= VAR_0->setsize) return 0;
    aeFileEvent *VAR_2 = &VAR_0->events[VAR_1];

    return VAR_2->mask;
}
