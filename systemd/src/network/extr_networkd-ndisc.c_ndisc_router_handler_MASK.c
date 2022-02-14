
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {struct TYPE_14__* manager; struct TYPE_14__* network; } ;
typedef TYPE_1__ sd_ndisc_router ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_7(Link *VAR_3, sd_ndisc_router *VAR_4) {
        uint64_t VAR_5;
        int VAR_6;

        FUNC_0(VAR_3);
        FUNC_0(VAR_3->network);
        FUNC_0(VAR_3->manager);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_6(VAR_4, &VAR_5);
        if (VAR_6 < 0)
                return FUNC_3(VAR_3, VAR_6, "Failed to get RA flags: %m");

        if (VAR_5 & (VAR_1 | VAR_2)) {

                VAR_6 = FUNC_1(VAR_3, !(VAR_5 & VAR_1));
                if (VAR_6 < 0 && VAR_6 != -VAR_0)
                        FUNC_3(VAR_3, VAR_6, "Could not acquire DHCPv6 lease on NDisc request: %m");
                else {
                        FUNC_2(VAR_3, "Acquiring DHCPv6 lease on NDisc request");
                        VAR_6 = 0;
                }
        }

        (void) FUNC_4(VAR_3, VAR_4);
        (void) FUNC_5(VAR_3, VAR_4);

        return VAR_6;
}
