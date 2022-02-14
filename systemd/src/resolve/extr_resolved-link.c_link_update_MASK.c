
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ llmnr_support; scalar_t__ mdns_support; int manager; } ;
typedef TYPE_1__ Link ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        FUNC_4(VAR_1);
        FUNC_3(VAR_1);

        if (VAR_1->llmnr_support != VAR_0) {
                VAR_2 = FUNC_5(VAR_1->manager);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        if (VAR_1->mdns_support != VAR_0) {
                VAR_2 = FUNC_6(VAR_1->manager);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        FUNC_2(VAR_1);
        FUNC_1(VAR_1, 0);

        return 0;
}
