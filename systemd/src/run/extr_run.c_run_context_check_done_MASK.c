
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; scalar_t__ forward; int active_state; scalar_t__ match; } ;
typedef TYPE_1__ RunContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(RunContext *VAR_1) {
        bool VAR_2;

        FUNC_1(VAR_1);

        if (VAR_1->match)
                VAR_2 = FUNC_0(VAR_1->active_state, "inactive", "failed");
        else
                VAR_2 = 1;

        if (VAR_1->forward && VAR_2)
                VAR_2 = FUNC_2(VAR_1->forward);

        if (VAR_2)
                FUNC_3(VAR_1->event, VAR_0);
}
