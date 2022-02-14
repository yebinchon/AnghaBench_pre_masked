
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int log; int conf_ctx; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_12__ {int user; } ;
typedef TYPE_4__ ngx_core_conf_t ;
struct TYPE_9__ {int * data; scalar_t__ len; } ;
struct TYPE_13__ {scalar_t__ generation; TYPE_2__* open_fd; int cmd; int * pfd; int user; TYPE_1__ backup; int configured; } ;
struct TYPE_10__ {TYPE_1__ name; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t VAR_8 ;
 int FUNC_2 (int ,int ,int ,char*,size_t,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ VAR_9 ;
 TYPE_5__* VAR_10 ;

ngx_int_t
FUNC_6(ngx_cycle_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13;
    ngx_core_conf_t *VAR_14;

    VAR_14 = (ngx_core_conf_t *) FUNC_1(VAR_11->conf_ctx, VAR_6);

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {

        if (!VAR_10[VAR_13].configured) {
            continue;
        }

        if (VAR_10[VAR_13].generation != VAR_9) {
            continue;
        }

        VAR_10[VAR_13].backup = VAR_10[VAR_13].open_fd->name;
        VAR_10[VAR_13].user = VAR_14->user;

        VAR_12 = FUNC_5(VAR_11, &VAR_10[VAR_13]);

        FUNC_2(VAR_3, VAR_11->log, 0,
                       "pipe: %ui(%d, %d) \"%s\"",
                       VAR_13, VAR_10[VAR_13].pfd[0],
                       VAR_10[VAR_13].pfd[1], VAR_10[VAR_13].cmd);

        if (VAR_12 == VAR_2) {
            FUNC_3(VAR_4, VAR_11->log, VAR_7,
                          "open pipe \"%s\" failed",
                          VAR_10[VAR_13].cmd);
            return VAR_2;
        }

        if (FUNC_0(VAR_10[VAR_13].open_fd->fd, VAR_1, VAR_0) == -1) {
            FUNC_3(VAR_4, VAR_11->log, VAR_7,
                          "fcntl(FD_CLOEXEC) \"%s\" failed",
                          VAR_10[VAR_13].cmd);
            return VAR_2;
        }

        if (FUNC_4(VAR_10[VAR_13].open_fd->fd) == -1) {
            FUNC_3(VAR_4, VAR_11->log, VAR_7,
                          "nonblock \"%s\" failed",
                          VAR_10[VAR_13].cmd);
            return VAR_2;
        }

        VAR_10[VAR_13].open_fd->name.len = 0;
        VAR_10[VAR_13].open_fd->name.data = ((void*)0);
    }

    return VAR_5;
}
