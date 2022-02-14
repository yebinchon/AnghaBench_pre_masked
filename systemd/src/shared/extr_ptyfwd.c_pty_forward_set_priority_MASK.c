
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int sigwinch_event_source; int master_event_source; int stdout_event_source; int stdin_event_source; } ;
typedef TYPE_1__ PTYForward ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(PTYForward *VAR_0, int64_t VAR_1) {
        int VAR_2;
        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0->stdin_event_source, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->stdout_event_source, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->master_event_source, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->sigwinch_event_source, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
