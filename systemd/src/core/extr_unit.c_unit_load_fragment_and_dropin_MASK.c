
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load_state; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Unit *VAR_3, bool VAR_4) {
        int VAR_5;

        FUNC_0(VAR_3);


        VAR_5 = FUNC_3(VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_3->load_state == VAR_2) {
                if (VAR_4)
                        return -VAR_0;

                VAR_3->load_state = VAR_1;
        }





        return FUNC_2(FUNC_1(VAR_3));
}
