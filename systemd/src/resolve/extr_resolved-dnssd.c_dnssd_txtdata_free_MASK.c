
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int txt; int rr; } ;
typedef TYPE_1__ DnssdTxtData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

DnssdTxtData *FUNC_3(DnssdTxtData *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->rr);
        FUNC_1(VAR_0->txt);

        return FUNC_2(VAR_0);
}
