
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ifindex; TYPE_1__* link; } ;
struct TYPE_5__ {int ifindex; } ;
typedef TYPE_2__ DnsServer ;


 int FUNC_0 (TYPE_2__ const*) ;

int FUNC_1(const DnsServer *VAR_0) {
        FUNC_0(VAR_0);


        if (VAR_0->link)
                return VAR_0->link->ifindex;

        if (VAR_0->ifindex > 0)
                return VAR_0->ifindex;

        return 0;
}
