
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int marked; struct TYPE_3__* domains_next; } ;
typedef TYPE_1__ DnsSearchDomain ;



void FUNC_0(DnsSearchDomain *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->marked = 1;
        FUNC_0(VAR_0->domains_next);
}
