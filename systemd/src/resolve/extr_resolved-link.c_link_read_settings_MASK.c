
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int is_managed; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,char*) ;

__attribute__((used)) static void FUNC_12(Link *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);



        VAR_1 = FUNC_2(VAR_0);
        if (VAR_1 < 0) {
                FUNC_11(VAR_0, VAR_1, "Failed to determine whether the interface is managed: %m");
                return;
        }
        if (VAR_1 == 0) {


                if (VAR_0->is_managed)
                        FUNC_1(VAR_0);

                VAR_0->is_managed = 0;
                return;
        }

        VAR_0->is_managed = 1;

        VAR_1 = FUNC_5(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read DNS servers for the interface, ignoring: %m");

        VAR_1 = FUNC_8(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read LLMNR support for the interface, ignoring: %m");

        VAR_1 = FUNC_9(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read mDNS support for the interface, ignoring: %m");

        VAR_1 = FUNC_4(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read DNS-over-TLS mode for the interface, ignoring: %m");

        VAR_1 = FUNC_6(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read DNSSEC mode for the interface, ignoring: %m");

        VAR_1 = FUNC_7(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read DNSSEC negative trust anchors for the interface, ignoring: %m");

        VAR_1 = FUNC_10(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read search domains for the interface, ignoring: %m");

        VAR_1 = FUNC_3(VAR_0);
        if (VAR_1 < 0)
                FUNC_11(VAR_0, VAR_1, "Failed to read default route setting for the interface, proceeding anyway: %m");
}
