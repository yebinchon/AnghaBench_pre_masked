
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef scalar_t__ UnitActiveState ;
struct TYPE_16__ {scalar_t__ load_state; int id; } ;
typedef TYPE_1__ Unit ;
struct TYPE_15__ {int (* reload ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_13__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;

int FUNC_10(Unit *VAR_7) {
        UnitActiveState VAR_8;
        Unit *VAR_9;

        FUNC_1(VAR_7);

        if (VAR_7->load_state != VAR_5)
                return -VAR_2;

        if (!FUNC_7(VAR_7))
                return -VAR_1;

        VAR_8 = FUNC_5(VAR_7);
        if (VAR_8 == VAR_6)
                return -VAR_0;

        if (VAR_8 != VAR_4) {
                FUNC_3(VAR_7, "Unit cannot be reloaded because it is inactive.");
                return -VAR_3;
        }

        VAR_9 = FUNC_8(VAR_7);
        if (VAR_9) {
                FUNC_2(VAR_7, "Redirecting reload request from %s to %s.", VAR_7->id, VAR_9->id);
                return FUNC_10(VAR_9);
        }

        FUNC_6(VAR_7);

        if (!FUNC_0(VAR_7)->reload) {

                FUNC_9(VAR_7, FUNC_5(VAR_7), FUNC_5(VAR_7), 0);
                return 0;
        }

        return FUNC_0(VAR_7)->reload(VAR_7);
}
