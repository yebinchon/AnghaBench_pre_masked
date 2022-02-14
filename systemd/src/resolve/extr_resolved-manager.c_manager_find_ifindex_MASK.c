
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {int ifindex; } ;
typedef int Manager ;
typedef TYPE_2__ LinkAddress ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int,union in_addr_union const*) ;

int FUNC_2(Manager *VAR_0, int VAR_1, const union in_addr_union *VAR_2) {
        LinkAddress *VAR_3;

        FUNC_0(VAR_0);

        VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
        if (VAR_3)
                return VAR_3->link->ifindex;

        return 0;
}
