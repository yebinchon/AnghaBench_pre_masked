
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
struct TYPE_10__ {scalar_t__ state; int timer_event_source; } ;
typedef scalar_t__ ScopeState ;
typedef TYPE_1__ Scope ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int * VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(Scope *VAR_5, ScopeState VAR_6) {
        ScopeState VAR_7;
        FUNC_2(VAR_5);

        if (VAR_5->state != VAR_6)
                FUNC_3(FUNC_1(VAR_5), 0);

        VAR_7 = VAR_5->state;
        VAR_5->state = VAR_6;

        if (!FUNC_0(VAR_6, VAR_3, VAR_2))
                VAR_5->timer_event_source = FUNC_6(VAR_5->timer_event_source);

        if (FUNC_0(VAR_6, VAR_0, VAR_1)) {
                FUNC_9(FUNC_1(VAR_5));
                FUNC_7(FUNC_1(VAR_5));
        }

        if (VAR_6 != VAR_7)
                FUNC_4("%s changed %s -> %s", FUNC_1(VAR_5)->id, FUNC_5(VAR_7), FUNC_5(VAR_6));

        FUNC_8(FUNC_1(VAR_5), VAR_4[VAR_7], VAR_4[VAR_6], 0);
}
