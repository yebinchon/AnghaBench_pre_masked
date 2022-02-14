
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ show_status; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(Manager *VAR_2, bool VAR_3) {
        FUNC_0(VAR_2);

        if (VAR_3) {
                if (VAR_2->show_status == VAR_0)
                        FUNC_1(VAR_2, VAR_1);
        } else {
                if (VAR_2->show_status == VAR_1)
                        FUNC_1(VAR_2, VAR_0);
        }
}
