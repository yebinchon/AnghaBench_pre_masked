
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rqueue_size; int rqueue_allocated; int rqueue; } ;
typedef TYPE_1__ sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

int FUNC_4(sd_netlink *VAR_3) {
        FUNC_2(VAR_3);

        if (VAR_3->rqueue_size >= VAR_2)
                return FUNC_3(FUNC_1(VAR_0),
                                       "rtnl: exhausted the read queue size (%d)",
                                       VAR_2);

        if (!FUNC_0(VAR_3->rqueue, VAR_3->rqueue_allocated, VAR_3->rqueue_size + 1))
                return -VAR_1;

        return 0;
}
