
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t rqueue_size; size_t wqueue_size; scalar_t__ wqueue_allocated; int * wqueue; scalar_t__ rqueue_allocated; int * rqueue; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sd_bus *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->rqueue_size > 0)
                FUNC_1(VAR_0->rqueue[--VAR_0->rqueue_size], VAR_0);

        VAR_0->rqueue = FUNC_2(VAR_0->rqueue);
        VAR_0->rqueue_allocated = 0;

        while (VAR_0->wqueue_size > 0)
                FUNC_1(VAR_0->wqueue[--VAR_0->wqueue_size], VAR_0);

        VAR_0->wqueue = FUNC_2(VAR_0->wqueue);
        VAR_0->wqueue_allocated = 0;
}
