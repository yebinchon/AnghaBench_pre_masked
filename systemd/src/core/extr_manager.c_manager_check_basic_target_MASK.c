
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {scalar_t__ taint_logged; scalar_t__ ready_sent; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Manager *VAR_1) {
        Unit *VAR_2;

        FUNC_1(VAR_1);


        if (VAR_1->ready_sent && VAR_1->taint_logged)
                return;

        VAR_2 = FUNC_3(VAR_1, VAR_0);
        if (!VAR_2 || !FUNC_0(FUNC_5(VAR_2)))
                return;


        FUNC_4(VAR_1);


        FUNC_2(VAR_1);
}
