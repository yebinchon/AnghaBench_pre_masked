
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* servers_next; } ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DnsServer *VAR_0) {
        DnsServer *VAR_1;

        if (!VAR_0)
                return;

        VAR_1 = VAR_0->servers_next;
        FUNC_0(VAR_0);

        FUNC_1(VAR_1);
}
