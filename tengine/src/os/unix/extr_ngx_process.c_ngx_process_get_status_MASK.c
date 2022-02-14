
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_pid_t ;
typedef size_t ngx_int_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_4__ {int log; } ;
struct TYPE_3__ {int pid; int status; int exited; char* name; scalar_t__ respawn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (int ,int ,scalar_t__,char*,...) ;
 int FUNC_4 (int ,int,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
    int VAR_10;
    char *VAR_11;
    ngx_pid_t VAR_12;
    ngx_err_t VAR_13;
    ngx_int_t VAR_14;
    ngx_uint_t VAR_15;

    VAR_15 = 0;

    for ( ;; ) {
        VAR_12 = FUNC_6(-1, &VAR_10, VAR_5);

        if (VAR_12 == 0) {
            return;
        }

        if (VAR_12 == -1) {
            VAR_13 = VAR_7;

            if (VAR_13 == VAR_1) {
                continue;
            }

            if (VAR_13 == VAR_0 && VAR_15) {
                return;
            }
            if (VAR_13 == VAR_0) {
                FUNC_3(VAR_3, VAR_6->log, VAR_13,
                              "waitpid() failed");
                return;
            }

            FUNC_3(VAR_2, VAR_6->log, VAR_13,
                          "waitpid() failed");
            return;
        }


        VAR_15 = 1;
        VAR_11 = "unknown process";

        for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
            if (VAR_9[VAR_14].pid == VAR_12) {
                VAR_9[VAR_14].status = VAR_10;
                VAR_9[VAR_14].exited = 1;
                VAR_11 = VAR_9[VAR_14].name;
                break;
            }
        }
        if (FUNC_2(VAR_10)) {






            FUNC_3(VAR_2, VAR_6->log, 0,
                          "%s %P exited on signal %d",
                          VAR_11, VAR_12, FUNC_2(VAR_10));


        } else {
            FUNC_3(VAR_4, VAR_6->log, 0,
                          "%s %P exited with code %d",
                          VAR_11, VAR_12, FUNC_1(VAR_10));
        }

        if (FUNC_1(VAR_10) == 2 && VAR_9[VAR_14].respawn) {
            FUNC_3(VAR_2, VAR_6->log, 0,
                          "%s %P exited with fatal code %d "
                          "and cannot be respawned",
                          VAR_11, VAR_12, FUNC_1(VAR_10));
            VAR_9[VAR_14].respawn = 0;
        }

        FUNC_5(VAR_12);
    }
}
