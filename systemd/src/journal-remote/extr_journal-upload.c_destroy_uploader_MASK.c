
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int events; int sigint_event; int sigterm_event; int input_event; int url; int current_cursor; int last_cursor; int answer; int header; int easy; } ;
typedef TYPE_1__ Uploader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Uploader *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_3(VAR_0->easy);
        FUNC_4(VAR_0->header);
        FUNC_5(VAR_0->answer);

        FUNC_5(VAR_0->last_cursor);
        FUNC_5(VAR_0->current_cursor);

        FUNC_5(VAR_0->url);

        VAR_0->input_event = FUNC_6(VAR_0->input_event);

        FUNC_1(VAR_0);
        FUNC_2(VAR_0);

        FUNC_6(VAR_0->sigterm_event);
        FUNC_6(VAR_0->sigint_event);
        FUNC_7(VAR_0->events);
}
