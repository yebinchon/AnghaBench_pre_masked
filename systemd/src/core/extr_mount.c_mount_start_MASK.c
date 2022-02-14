
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_1__ Mount ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ,int ,...) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(Unit *VAR_9) {
        Mount *VAR_10 = FUNC_1(VAR_9);
        int VAR_11;

        FUNC_2(VAR_10);



        if (FUNC_0(VAR_10->state,
                   VAR_6,
                   VAR_8,
                   VAR_7,
                   VAR_1))
                return -VAR_0;


        if (VAR_10->state == VAR_5)
                return 0;

        FUNC_2(FUNC_0(VAR_10->state, VAR_2, VAR_3));

        VAR_11 = FUNC_7(VAR_9);
        if (VAR_11 < 0) {
                FUNC_4(VAR_10, VAR_4);
                return VAR_11;
        }

        VAR_11 = FUNC_6(VAR_9);
        if (VAR_11 < 0)
                return VAR_11;

        FUNC_3(VAR_10);
        FUNC_5(VAR_10);

        return 1;
}
