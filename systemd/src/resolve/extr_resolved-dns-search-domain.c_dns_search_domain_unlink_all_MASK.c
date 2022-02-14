
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* domains_next; } ;
typedef TYPE_1__ DnsSearchDomain ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DnsSearchDomain *VAR_0) {
        DnsSearchDomain *VAR_1;

        if (!VAR_0)
                return;

        VAR_1 = VAR_0->domains_next;
        FUNC_0(VAR_0);

        FUNC_1(VAR_1);
}
