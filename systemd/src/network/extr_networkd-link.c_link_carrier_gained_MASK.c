
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int state; } ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(Link *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_8(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;
        if (VAR_3 > 0) {
                VAR_3 = FUNC_5(VAR_2, 0);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        if (FUNC_0(VAR_2->state, VAR_1, VAR_0)) {
                VAR_3 = FUNC_2(VAR_2);
                if (VAR_3 < 0) {
                        FUNC_3(VAR_2);
                        return VAR_3;
                }

                FUNC_7(VAR_2, VAR_1);
                VAR_3 = FUNC_6(VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_4(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
