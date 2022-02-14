
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef scalar_t__ UnitActiveState ;
struct TYPE_18__ {scalar_t__ load_state; int id; int type; int inactive_enter_timestamp; } ;
typedef TYPE_1__ Unit ;
struct TYPE_17__ {int (* start ) (TYPE_1__*) ;scalar_t__ once_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_15__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;

int FUNC_16(Unit *VAR_12) {
        UnitActiveState VAR_13;
        Unit *VAR_14;

        FUNC_3(VAR_12);




        VAR_13 = FUNC_9(VAR_12);
        if (FUNC_1(VAR_13))
                return -VAR_1;
        if (VAR_13 == VAR_11)
                return -VAR_0;


        if (VAR_12->load_state != VAR_10)
                return -VAR_4;


        if (FUNC_2(VAR_12)->once_only && FUNC_4(&VAR_12->inactive_enter_timestamp))
                return -VAR_8;




        if (VAR_13 != VAR_9 &&
            !FUNC_13(VAR_12))
                return FUNC_6(VAR_12, FUNC_0(VAR_3), "Starting requested but condition failed. Not starting unit.");


        if (VAR_13 != VAR_9 &&
            !FUNC_12(VAR_12))
                return FUNC_7(VAR_12, FUNC_0(VAR_7), "Starting requested but asserts failed.");





        if (!FUNC_14(VAR_12->type))
                return -VAR_6;




        if (!FUNC_15(VAR_12))
                return -VAR_5;


        VAR_14 = FUNC_11(VAR_12);
        if (VAR_14) {
                FUNC_5(VAR_12, "Redirecting start request from %s to %s.", VAR_12->id, VAR_14->id);
                return FUNC_16(VAR_14);
        }


        if (!FUNC_2(VAR_12)->start)
                return -VAR_2;





        FUNC_10(VAR_12);

        return FUNC_2(VAR_12)->start(VAR_12);
}
