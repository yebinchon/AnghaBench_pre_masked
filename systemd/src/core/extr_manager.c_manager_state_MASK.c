
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {int failed_units; } ;
typedef int ManagerState ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

ManagerState FUNC_8(Manager *VAR_10) {
        Unit *VAR_11;

        FUNC_3(VAR_10);


        if (!FUNC_0(VAR_10)) {

                VAR_11 = FUNC_4(VAR_10, VAR_6);
                if (!VAR_11 || !FUNC_2(FUNC_7(VAR_11)))
                        return VAR_1;

                return VAR_4;
        }


        VAR_11 = FUNC_4(VAR_10, VAR_9);
        if (VAR_11 && FUNC_6(VAR_11))
                return VAR_5;

        if (FUNC_1(VAR_10)) {

                VAR_11 = FUNC_4(VAR_10, VAR_8);
                if (VAR_11 && FUNC_6(VAR_11))
                        return VAR_2;

                VAR_11 = FUNC_4(VAR_10, VAR_7);
                if (VAR_11 && FUNC_6(VAR_11))
                        return VAR_2;
        }


        if (FUNC_5(VAR_10->failed_units) > 0)
                return VAR_0;

        return VAR_3;
}
