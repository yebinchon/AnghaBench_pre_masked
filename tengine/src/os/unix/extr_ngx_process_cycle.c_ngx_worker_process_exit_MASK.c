
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_18__ {size_t connection_n; int pool; TYPE_7__* log; TYPE_4__* connections; TYPE_1__** modules; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_19__ {int fd; int number; TYPE_2__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_20__ {int * writer; int * next; TYPE_10__* file; } ;
struct TYPE_17__ {int resolver; int channel; int accept; } ;
struct TYPE_16__ {int (* exit_process ) (TYPE_3__*) ;} ;
struct TYPE_15__ {TYPE_7__* log; int files_n; int files; } ;
struct TYPE_14__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_12__* VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 TYPE_12__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_10__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,TYPE_7__*,int ,char*,...) ;
 TYPE_7__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(ngx_cycle_t *VAR_8)
{
    ngx_uint_t VAR_9;
    ngx_connection_t *VAR_10;

    for (VAR_9 = 0; VAR_8->modules[VAR_9]; VAR_9++) {
        if (VAR_8->modules[VAR_9]->exit_process) {
            VAR_8->modules[VAR_9]->exit_process(VAR_8);
        }
    }

    if (VAR_7) {
        VAR_10 = VAR_8->connections;
        for (VAR_9 = 0; VAR_9 < VAR_8->connection_n; VAR_9++) {
            if (VAR_10[VAR_9].fd != -1
                && VAR_10[VAR_9].read
                && !VAR_10[VAR_9].read->accept
                && !VAR_10[VAR_9].read->channel
                && !VAR_10[VAR_9].read->resolver)
            {
                FUNC_3(VAR_0, VAR_8->log, 0,
                              "*%uA open socket #%d left in connection %ui",
                              VAR_10[VAR_9].number, VAR_10[VAR_9].fd, VAR_9);
                VAR_3 = 1;
            }
        }

        if (VAR_3) {
            FUNC_3(VAR_0, VAR_8->log, 0, "aborting");
            FUNC_1();
        }
    }
    VAR_5 = *FUNC_4(VAR_2->log);

    VAR_6.fd = VAR_5.file->fd;
    VAR_5.file = &VAR_6;
    VAR_5.next = ((void*)0);
    VAR_5.writer = ((void*)0);

    VAR_4.log = &VAR_5;
    VAR_4.files = VAR_2->files;
    VAR_4.files_n = VAR_2->files_n;
    VAR_2 = &VAR_4;

    FUNC_2(VAR_8->pool);

    FUNC_3(VAR_1, VAR_2->log, 0, "exit");

    FUNC_0(0);
}
