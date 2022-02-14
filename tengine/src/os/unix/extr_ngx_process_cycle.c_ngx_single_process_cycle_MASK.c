
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_uid_t ;
struct TYPE_14__ {int log; TYPE_1__** modules; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_13__ {scalar_t__ (* init_process ) (TYPE_2__*) ;int (* exit_process ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

void
FUNC_10(ngx_cycle_t *VAR_8)
{
    ngx_uint_t VAR_9;

    if (FUNC_7(VAR_8, ((void*)0)) == ((void*)0)) {

        FUNC_0(2);
    }

    for (VAR_9 = 0; VAR_8->modules[VAR_9]; VAR_9++) {
        if (VAR_8->modules[VAR_9]->init_process) {
            if (VAR_8->modules[VAR_9]->init_process(VAR_8) == VAR_0) {

                FUNC_0(2);
            }
        }
    }

    for ( ;; ) {
        FUNC_2(VAR_1, VAR_8->log, 0, "worker cycle");

        FUNC_5(VAR_8);

        if (VAR_7 || VAR_4) {

            for (VAR_9 = 0; VAR_8->modules[VAR_9]; VAR_9++) {
                if (VAR_8->modules[VAR_9]->exit_process) {
                    VAR_8->modules[VAR_9]->exit_process(VAR_8);
                }
            }

            FUNC_4(VAR_8);
        }

        if (VAR_5) {
            VAR_5 = 0;
            FUNC_3(VAR_2, VAR_8->log, 0, "reconfiguring");

            VAR_8 = FUNC_1(VAR_8);
            if (VAR_8 == ((void*)0)) {
                VAR_8 = (ngx_cycle_t *) VAR_3;
                continue;
            }

            VAR_3 = VAR_8;
        }

        if (VAR_6) {
            VAR_6 = 0;
            FUNC_3(VAR_2, VAR_8->log, 0, "reopening logs");
            FUNC_6(VAR_8, (ngx_uid_t) -1);
        }
    }
}
