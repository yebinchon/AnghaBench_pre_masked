
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ load_state; } ;
typedef TYPE_1__ Unit ;
typedef int Service ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(Unit *VAR_1) {
        Service *VAR_2 = FUNC_0(VAR_1);
        int VAR_3;

        VAR_3 = FUNC_3(VAR_1, 1);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_1->load_state != VAR_0)
                return 0;


        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_2(VAR_2);
}
