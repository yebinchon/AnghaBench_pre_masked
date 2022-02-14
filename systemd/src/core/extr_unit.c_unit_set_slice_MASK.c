
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int slice; scalar_t__ cgroup_realized; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*) ;

int FUNC_7(Unit *VAR_8, Unit *VAR_9) {
        FUNC_3(VAR_8);
        FUNC_3(VAR_9);







        if (!FUNC_1(VAR_8))
                return -VAR_2;

        if (VAR_8->type == VAR_7)
                return -VAR_1;

        if (FUNC_4(VAR_8) != VAR_6)
                return -VAR_0;

        if (VAR_9->type != VAR_7)
                return -VAR_1;

        if (FUNC_5(VAR_8, VAR_4) &&
            !FUNC_5(VAR_9, VAR_5))
                return -VAR_3;

        if (FUNC_0(VAR_8->slice) == VAR_9)
                return 0;


        if (FUNC_2(VAR_8->slice) && VAR_8->cgroup_realized)
                return -VAR_0;

        FUNC_6(&VAR_8->slice, VAR_8, VAR_9);
        return 1;
}
