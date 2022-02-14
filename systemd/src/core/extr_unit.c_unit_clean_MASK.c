
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UnitActiveState ;
struct TYPE_8__ {scalar_t__ load_state; scalar_t__ job; } ;
typedef TYPE_1__ Unit ;
struct TYPE_9__ {int (* clean ) (TYPE_1__*,int ) ;} ;
typedef int ExecCleanMask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(Unit *VAR_5, ExecCleanMask VAR_6) {
        UnitActiveState VAR_7;

        FUNC_2(VAR_5);
        if (!FUNC_1(VAR_5)->clean)
                return -VAR_1;

        if (VAR_6 == 0)
                return -VAR_2;

        if (VAR_5->load_state != VAR_4)
                return -VAR_0;

        if (VAR_5->job)
                return -VAR_0;

        VAR_7 = FUNC_4(VAR_5);
        if (!FUNC_0(VAR_7, VAR_3))
                return -VAR_0;

        return FUNC_1(VAR_5)->clean(VAR_5, VAR_6);
}
