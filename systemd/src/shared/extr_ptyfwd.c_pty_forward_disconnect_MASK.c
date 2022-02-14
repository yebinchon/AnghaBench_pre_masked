
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saved_stdout; int saved_stdin; int saved_stdin_attr; int saved_stdout_attr; int event; void* sigwinch_event_source; void* master_event_source; void* stdout_event_source; void* stdin_event_source; } ;
typedef TYPE_1__ PTYForward ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(PTYForward *VAR_3) {

        if (VAR_3) {
                VAR_3->stdin_event_source = FUNC_1(VAR_3->stdin_event_source);
                VAR_3->stdout_event_source = FUNC_1(VAR_3->stdout_event_source);

                VAR_3->master_event_source = FUNC_1(VAR_3->master_event_source);
                VAR_3->sigwinch_event_source = FUNC_1(VAR_3->sigwinch_event_source);
                VAR_3->event = FUNC_2(VAR_3->event);

                if (VAR_3->saved_stdout)
                        FUNC_3(VAR_1, VAR_2, &VAR_3->saved_stdout_attr);
                if (VAR_3->saved_stdin)
                        FUNC_3(VAR_0, VAR_2, &VAR_3->saved_stdin_attr);

                VAR_3->saved_stdout = VAR_3->saved_stdin = 0;
        }


        (void) FUNC_0(VAR_0, 0);
        (void) FUNC_0(VAR_1, 0);
}
