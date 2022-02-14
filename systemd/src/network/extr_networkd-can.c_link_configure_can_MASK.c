
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int kind; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

int FUNC_6(Link *VAR_3) {
        int VAR_4;

        FUNC_3(VAR_3, VAR_1);

        if (FUNC_5(VAR_3->kind, "can")) {

                if ((VAR_3->flags & VAR_0)) {
                        VAR_4 = FUNC_0(VAR_3, VAR_2);
                        if (VAR_4 < 0) {
                                FUNC_1(VAR_3);
                                return VAR_4;
                        }
                } else {
                        VAR_4 = FUNC_2(VAR_3);
                        if (VAR_4 < 0) {
                                FUNC_1(VAR_3);
                                return VAR_4;
                        }
                }

                return 0;
        }

        if (!(VAR_3->flags & VAR_0)) {
                VAR_4 = FUNC_4(VAR_3);
                if (VAR_4 < 0) {
                        FUNC_1(VAR_3);
                        return VAR_4;
                }
        }

        return 0;
}
