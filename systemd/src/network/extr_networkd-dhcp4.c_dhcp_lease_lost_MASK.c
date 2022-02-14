
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_19__ {int dhcp4_configured; struct TYPE_19__* dhcp_lease; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,struct in_addr*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,struct in_addr*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,struct in_addr*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(Link *VAR_0) {
        struct in_addr VAR_1 = {};

        FUNC_0(VAR_0);
        FUNC_0(VAR_0->dhcp_lease);

        FUNC_8(VAR_0, "DHCP lease lost");

        VAR_0->dhcp4_configured = 0;

        (void) FUNC_9(VAR_0->dhcp_lease, &VAR_1);
        (void) FUNC_4(VAR_0, VAR_0->dhcp_lease, &VAR_1, 1);
        (void) FUNC_3(VAR_0, VAR_0->dhcp_lease, &VAR_1, 1);
        (void) FUNC_2(VAR_0, VAR_0->dhcp_lease, &VAR_1, 1);
        (void) FUNC_1(VAR_0, VAR_0->dhcp_lease, &VAR_1, ((void*)0));
        (void) FUNC_6(VAR_0);
        (void) FUNC_5(VAR_0);

        VAR_0->dhcp_lease = FUNC_10(VAR_0->dhcp_lease);
        FUNC_7(VAR_0);

        return 0;
}
