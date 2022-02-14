
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int realpath ;
struct TYPE_6__ {int time_now; int last_suit_time; int logname; int suitpath; } ;
typedef TYPE_1__ ngx_pipe_rollback_conf_t ;
struct TYPE_7__ {int log; } ;
typedef TYPE_2__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tm* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,...) ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int,int ,struct tm*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(ngx_cycle_t *VAR_3, ngx_pipe_rollback_conf_t *VAR_4)
{
    char VAR_5[256];
    struct tm *VAR_6;
    int VAR_7;
    time_t VAR_8 = FUNC_3();

    VAR_6 = FUNC_0(&VAR_8);
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_3->log, 0,
                      "get now time failed");
        return;
    }
    if (0 >= FUNC_4(VAR_5, sizeof(VAR_5), VAR_4->suitpath, VAR_6)) {
        FUNC_1(VAR_0, VAR_3->log, 0,
                      "parse suitpath with time now failed");
        return;
    }

    FUNC_2(VAR_5, VAR_3);

    VAR_7 = FUNC_6(VAR_5);
    if (0 == VAR_7) {
        FUNC_1(VAR_1, VAR_3->log, 0,
                      "unlink [%s] success", VAR_5);
    } else {
        FUNC_1(VAR_0, VAR_3->log, VAR_2,
                      "unlink [%s] failed", VAR_5);
    }

    VAR_7 = FUNC_5(VAR_4->logname, VAR_5);
    if (0 == VAR_7) {
        FUNC_1(VAR_1, VAR_3->log, 0,
                      "symlink [%s] success", VAR_5);
    } else {
        FUNC_1(VAR_0, VAR_3->log, VAR_2,
                      "symlink [%s] failed", VAR_5);
    }

    VAR_4->last_suit_time = VAR_4->time_now;
}
