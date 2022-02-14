
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_16__ {struct TYPE_16__* dhcp_lease_old; struct TYPE_16__* dhcp_lease; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,struct in_addr*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_5 (struct in_addr*,struct in_addr*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,struct in_addr*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;

void FUNC_9(Link *VAR_0) {
        struct in_addr VAR_1 = {}, VAR_2 = {};

        FUNC_0(VAR_0);

        if (!VAR_0->dhcp_lease_old)
                return;

        FUNC_0(VAR_0->dhcp_lease);

        (void) FUNC_7(VAR_0->dhcp_lease_old, &VAR_2);
        (void) FUNC_7(VAR_0->dhcp_lease, &VAR_1);

        (void) FUNC_4(VAR_0, VAR_0->dhcp_lease_old, &VAR_2, 0);
        (void) FUNC_3(VAR_0, VAR_0->dhcp_lease_old, &VAR_2, 0);
        (void) FUNC_2(VAR_0, VAR_0->dhcp_lease_old, &VAR_2, 0);

        if (!FUNC_5(&VAR_2, &VAR_1))
                (void) FUNC_1(VAR_0, VAR_0->dhcp_lease_old, &VAR_2, ((void*)0));

        VAR_0->dhcp_lease_old = FUNC_8(VAR_0->dhcp_lease_old);
        FUNC_6(VAR_0);
}
