
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_8__ {int forbid_restart; scalar_t__ state; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (scalar_t__,int ,int ,...) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_18) {
        Service *VAR_19 = FUNC_1(VAR_18);

        FUNC_2(VAR_19);


        VAR_19->forbid_restart = 1;


        if (FUNC_0(VAR_19->state,
                   VAR_12, VAR_15, VAR_14, VAR_13,
                   VAR_6, VAR_5))
                return 0;


        if (VAR_19->state == VAR_0) {
                FUNC_5(VAR_19, VAR_3);
                return 0;
        }



        if (FUNC_0(VAR_19->state, VAR_2, VAR_11, VAR_9, VAR_10, VAR_7, VAR_16)) {
                FUNC_3(VAR_19, VAR_15, VAR_17);
                return 0;
        }


        if (VAR_19->state == VAR_1) {
                FUNC_3(VAR_19, VAR_5, VAR_17);
                return 0;
        }

        FUNC_2(FUNC_0(VAR_19->state, VAR_8, VAR_4));

        FUNC_4(VAR_19, VAR_17);
        return 1;
}
