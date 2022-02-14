
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * addresses; } ;
typedef TYPE_1__ DHCP6IA ;
typedef int DHCP6Address ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

DHCP6IA *FUNC_2(DHCP6IA *VAR_1) {
        DHCP6Address *VAR_2;

        if (!VAR_1)
                return ((void*)0);

        while (VAR_1->addresses) {
                VAR_2 = VAR_1->addresses;

                FUNC_0(VAR_0, VAR_1->addresses, VAR_2);

                FUNC_1(VAR_2);
        }

        return ((void*)0);
}
