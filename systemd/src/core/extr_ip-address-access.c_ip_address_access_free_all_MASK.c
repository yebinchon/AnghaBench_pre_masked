
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* items_next; } ;
typedef TYPE_1__ IPAddressAccessItem ;


 int FUNC_0 (TYPE_1__*) ;

IPAddressAccessItem* FUNC_1(IPAddressAccessItem *VAR_0) {
        IPAddressAccessItem *VAR_1, *VAR_2 = VAR_0;

        while (VAR_2) {
                VAR_1 = VAR_2->items_next;
                FUNC_0(VAR_2);

                VAR_2 = VAR_1;
        }

        return ((void*)0);
}
