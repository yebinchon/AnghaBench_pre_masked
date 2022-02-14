
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int result; int active_state; int event; int bus; int match; int forward; } ;
typedef TYPE_1__ RunContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(RunContext *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->forward = FUNC_2(VAR_0->forward);
        VAR_0->match = FUNC_3(VAR_0->match);
        VAR_0->bus = FUNC_4(VAR_0->bus);
        VAR_0->event = FUNC_5(VAR_0->event);

        FUNC_1(VAR_0->active_state);
        FUNC_1(VAR_0->result);
}
