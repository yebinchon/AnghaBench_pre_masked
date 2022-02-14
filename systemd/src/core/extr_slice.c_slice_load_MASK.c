
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ load_state; } ;
typedef TYPE_1__ Unit ;
typedef int Slice ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(Unit *VAR_2) {
        Slice *VAR_3 = FUNC_0(VAR_2);
        int VAR_4;

        FUNC_1(*VAR_3);
        FUNC_1(VAR_2->load_state == VAR_1);

        VAR_4 = FUNC_4(VAR_2);
        if (VAR_4 < 0)
                return VAR_4;
        VAR_4 = FUNC_5(VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_7(VAR_2, 0);
        if (VAR_4 < 0)
                return VAR_4;

        if (VAR_2->load_state != VAR_0)
                return 0;


        VAR_4 = FUNC_8(VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_3(VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_6(VAR_3);
}
