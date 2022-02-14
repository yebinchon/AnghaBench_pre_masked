
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rqueue_size; int rqueue_allocated; int rqueue; } ;
typedef TYPE_1__ sd_bus ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(sd_bus *VAR_3) {
        FUNC_1(VAR_3);

        if (VAR_3->rqueue_size >= VAR_0)
                return -VAR_1;

        if (!FUNC_0(VAR_3->rqueue, VAR_3->rqueue_allocated, VAR_3->rqueue_size + 1))
                return -VAR_2;

        return 0;
}
