
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {scalar_t__ state; } ;
typedef int Manager ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static bool FUNC_7(Manager *VAR_5) {
        Unit *VAR_6;

        FUNC_5(VAR_5);

        if (FUNC_2(VAR_5))
                return 0;


        if (!FUNC_1(VAR_5))
                return 1;


        VAR_6 = FUNC_6(VAR_5, VAR_4);
        if (!VAR_6)
                return 0;
        if (FUNC_4(VAR_6)->state != VAR_2)
                return 0;


        VAR_6 = FUNC_6(VAR_5, VAR_3);
        if (!VAR_6)
                return 0;
        if (!FUNC_0(FUNC_3(VAR_6)->state, VAR_0, VAR_1))
                return 0;

        return 1;
}
