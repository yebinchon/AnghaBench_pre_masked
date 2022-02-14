
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {int name; int (* exit ) (TYPE_3__*) ;} ;
typedef TYPE_2__ ngx_proc_module_t ;
struct TYPE_16__ {size_t connection_n; int pool; int log; TYPE_4__* connections; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_17__ {int fd; TYPE_1__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_19__ {TYPE_8__* file; } ;
struct TYPE_18__ {int fd; } ;
struct TYPE_14__ {int resolver; int channel; int accept; } ;
struct TYPE_13__ {TYPE_9__* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,TYPE_9__*,int ,char*,...) ;
 TYPE_10__ VAR_5 ;
 TYPE_9__ VAR_6 ;
 TYPE_8__ VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(ngx_cycle_t *VAR_8, ngx_proc_module_t *VAR_9)
{
    ngx_uint_t VAR_10;
    ngx_connection_t *VAR_11;

    if (VAR_9->exit) {
        VAR_9->exit(VAR_8);
    }

    if (VAR_4) {
        VAR_11 = VAR_8->connections;
        for (VAR_10 = 0; VAR_10 < VAR_8->connection_n; VAR_10++) {
            if (VAR_11[VAR_10].fd != -1
                && VAR_11[VAR_10].read
                && !VAR_11[VAR_10].read->accept
                && !VAR_11[VAR_10].read->channel
                && !VAR_11[VAR_10].read->resolver)
            {
                FUNC_3(VAR_0, VAR_8->log, 0,
                              "open socket #%d left in connection %ui",
                              VAR_11[VAR_10].fd, VAR_10);
                VAR_3 = 1;
            }
        }

        if (VAR_3) {
            FUNC_3(VAR_0, VAR_8->log, 0, "aborting");
            FUNC_1();
        }
    }
    VAR_7.fd = VAR_2->log->file->fd;

    VAR_6 = *VAR_2->log;
    VAR_6.file = &VAR_7;

    VAR_5.log = &VAR_6;
    VAR_2 = &VAR_5;

    FUNC_3(VAR_1, VAR_2->log, 0, "process %V exit",
                  &VAR_9->name);

    FUNC_2(VAR_8->pool);

    FUNC_0(0);
}
