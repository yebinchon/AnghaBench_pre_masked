
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ,int ,...) ;
 TYPE_1__* FUNC_1 (int *) ;
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
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_14) {
        Socket *VAR_15 = FUNC_1(VAR_14);

        FUNC_2(VAR_15);


        if (FUNC_0(VAR_15->state,
                   VAR_10,
                   VAR_12,
                   VAR_11,
                   VAR_9,
                   VAR_3,
                   VAR_2))
                return 0;



        if (FUNC_0(VAR_15->state,
                   VAR_8,
                   VAR_6,
                   VAR_7)) {
                FUNC_3(VAR_15, VAR_12, VAR_13);
                return -VAR_0;
        }


        if (VAR_15->state == VAR_1) {
                FUNC_3(VAR_15, VAR_2, VAR_13);
                return 0;
        }

        FUNC_2(FUNC_0(VAR_15->state, VAR_4, VAR_5));

        FUNC_4(VAR_15, VAR_13);
        return 1;
}
