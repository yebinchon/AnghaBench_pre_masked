
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int flags; int configure_without_carrier; struct TYPE_15__* network; int kind; scalar_t__ bridge; scalar_t__ use_br_vlan; scalar_t__ bond; int bound_to_links; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int,char*) ;
 scalar_t__ FUNC_13 (char*,int ) ;

__attribute__((used)) static int FUNC_14(Link *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->network);

        if (!FUNC_1(VAR_2->bound_to_links)) {
                VAR_3 = FUNC_4(VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
        } else if (!(VAR_2->flags & VAR_0)) {
                VAR_3 = FUNC_11(VAR_2);
                if (VAR_3 < 0) {
                        FUNC_3(VAR_2);
                        return VAR_3;
                }
        }

        if (VAR_2->network->bridge) {
                VAR_3 = FUNC_8(VAR_2);
                if (VAR_3 < 0)
                        FUNC_12(VAR_2, VAR_3, "Could not set bridge message: %m");

                VAR_3 = FUNC_2(VAR_2, VAR_2->network->bridge);
                if (VAR_3 < 0)
                        FUNC_12(VAR_2, VAR_3, "Failed to add to bridge master's slave list: %m");
        }

        if (VAR_2->network->bond) {
                VAR_3 = FUNC_7(VAR_2);
                if (VAR_3 < 0)
                        FUNC_12(VAR_2, VAR_3, "Could not set bond message: %m");

                VAR_3 = FUNC_2(VAR_2, VAR_2->network->bond);
                if (VAR_3 < 0)
                        FUNC_12(VAR_2, VAR_3, "Failed to add to bond master's slave list: %m");
        }

        if (VAR_2->network->use_br_vlan &&
            (VAR_2->network->bridge || FUNC_13("bridge", VAR_2->kind))) {
                VAR_3 = FUNC_9(VAR_2);
                if (VAR_3 < 0)
                        FUNC_12(VAR_2, VAR_3, "Could not set bridge vlan: %m");
        }




        if (!FUNC_5(VAR_2) && !VAR_2->network->configure_without_carrier)
                return 0;

        FUNC_10(VAR_2, VAR_1);
        return FUNC_6(VAR_2);
}
