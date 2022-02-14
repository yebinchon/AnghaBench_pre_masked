
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UnitDependency ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ ignore_order; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;

int FUNC_2(Job *VAR_6, Job *VAR_7, UnitDependency VAR_8) {
        FUNC_1(VAR_6->type < VAR_5);
        FUNC_1(VAR_7->type < VAR_5);
        FUNC_1(FUNC_0(VAR_8, VAR_3, VAR_4));


        if (VAR_6->type == VAR_0 || VAR_7->type == VAR_0)
                return 0;

        if (VAR_6->ignore_order || VAR_7->ignore_order)
                return 0;

        if (VAR_8 == VAR_3)
                return -FUNC_2(VAR_7, VAR_6, VAR_4);




        if (FUNC_0(VAR_7->type, VAR_2, VAR_1))
                return 1;
        else
                return -1;
}
