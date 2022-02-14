
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int UnitActiveState ;
struct TYPE_13__ {int id; } ;
typedef TYPE_1__ Unit ;
struct TYPE_12__ {int (* stop ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_10__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;

int FUNC_8(Unit *VAR_2) {
        UnitActiveState VAR_3;
        Unit *VAR_4;

        FUNC_2(VAR_2);

        VAR_3 = FUNC_5(VAR_2);
        if (FUNC_0(VAR_3))
                return -VAR_0;

        VAR_4 = FUNC_7(VAR_2);
        if (VAR_4) {
                FUNC_3(VAR_2, "Redirecting stop request from %s to %s.", VAR_2->id, VAR_4->id);
                return FUNC_8(VAR_4);
        }

        if (!FUNC_1(VAR_2)->stop)
                return -VAR_1;

        FUNC_6(VAR_2);

        return FUNC_1(VAR_2)->stop(VAR_2);
}
