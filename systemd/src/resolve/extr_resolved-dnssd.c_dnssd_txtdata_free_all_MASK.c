
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* items_next; } ;
typedef TYPE_1__ DnssdTxtData ;


 int FUNC_0 (TYPE_1__*) ;

DnssdTxtData *FUNC_1(DnssdTxtData *VAR_0) {
        DnssdTxtData *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        VAR_1 = VAR_0->items_next;

        FUNC_0(VAR_0);

        return FUNC_1(VAR_1);
}
