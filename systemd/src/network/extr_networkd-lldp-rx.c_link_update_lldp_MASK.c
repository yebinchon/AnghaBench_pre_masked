
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int lldp; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        if (!VAR_1->lldp)
                return 0;

        if (VAR_1->flags & VAR_0) {
                VAR_2 = FUNC_3(VAR_1->lldp);
                if (VAR_2 < 0)
                        return FUNC_2(VAR_1, VAR_2, "Failed to start LLDP: %m");
                if (VAR_2 > 0)
                        FUNC_1(VAR_1, "Started LLDP.");
        } else {
                VAR_2 = FUNC_4(VAR_1->lldp);
                if (VAR_2 < 0)
                        return FUNC_2(VAR_1, VAR_2, "Failed to stop LLDP: %m");
                if (VAR_2 > 0)
                        FUNC_1(VAR_1, "Stopped LLDP.");
        }

        return VAR_2;
}
