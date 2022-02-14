
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int sd_dhcp6_client ;
struct TYPE_14__ {int dhcp6_configured; int manager; int state; struct TYPE_14__* network; } ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*,...) ;
 int FUNC_12 (TYPE_1__*,int,char*) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static void FUNC_14(sd_dhcp6_client *VAR_3, int VAR_4, void *VAR_5) {
        int VAR_6;
        Link *VAR_7 = VAR_5;

        FUNC_1(VAR_7);
        FUNC_1(VAR_7->network);

        if (FUNC_0(VAR_7->state, VAR_0, VAR_1))
                return;

        switch(VAR_4) {
        case 128:
        case 130:
        case 129:
                if (FUNC_13(VAR_3, ((void*)0)) >= 0)
                        FUNC_11(VAR_7, "DHCPv6 lease lost");

                (void) FUNC_5(VAR_3, VAR_7);
                (void) FUNC_6(VAR_7->manager, VAR_7);

                FUNC_8(VAR_7);
                VAR_7->dhcp6_configured = 0;
                break;

        case 131:
                VAR_6 = FUNC_2(VAR_3, VAR_7);
                if (VAR_6 < 0) {
                        FUNC_9(VAR_7);
                        return;
                }

                VAR_6 = FUNC_4(VAR_3, VAR_7);
                if (VAR_6 < 0)
                        FUNC_10(VAR_7, "DHCPv6 did not receive prefixes to delegate");

                VAR_2;
        case 132:
                VAR_6 = FUNC_3(VAR_3, VAR_7);
                if (VAR_6 < 0) {
                        FUNC_9(VAR_7);
                        return;
                }

                FUNC_8(VAR_7);
                VAR_7->dhcp6_configured = 1;
                break;

        default:
                if (VAR_4 < 0)
                        FUNC_12(VAR_7, VAR_4, "DHCPv6 error: %m");
                else
                        FUNC_11(VAR_7, "DHCPv6 unknown event: %d", VAR_4);
                return;
        }

        FUNC_7(VAR_7);
}
