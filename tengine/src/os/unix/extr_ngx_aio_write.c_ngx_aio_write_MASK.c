
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct aiocb {int dummy; } ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_3__* sigval_ptr; } ;
struct TYPE_11__ {TYPE_1__ sigev_value; int sigev_notify; int sigev_notify_kqueue; } ;
struct TYPE_14__ {size_t aio_nbytes; TYPE_2__ aio_sigevent; int * aio_buf; int aio_fildes; } ;
struct TYPE_12__ {int ready; int complete; int active; int error; int log; TYPE_5__ aiocb; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_13__ {int fd; TYPE_3__* write; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int) ;
 int FUNC_5 (int ,int ,int,char*,...) ;
 int FUNC_6 (TYPE_5__*,int) ;

ssize_t
FUNC_7(ngx_connection_t *VAR_9, u_char *VAR_10, size_t VAR_11)
{
    int VAR_12;
    ngx_event_t *VAR_13;

    VAR_13 = VAR_9->write;

    if (!VAR_13->ready) {
        return VAR_0;
    }

    FUNC_4(VAR_5, VAR_13->log, 0,
                   "aio: wev->complete: %d", VAR_13->complete);

    if (!VAR_13->complete) {
        FUNC_6(&VAR_13->aiocb, sizeof(struct aiocb));

        VAR_13->aiocb.aio_fildes = VAR_9->fd;
        VAR_13->aiocb.aio_buf = VAR_10;
        VAR_13->aiocb.aio_nbytes = VAR_11;







        if (FUNC_2(&VAR_13->aiocb) == -1) {
            FUNC_5(VAR_4, VAR_13->log, VAR_7,
                          "aio_write() failed");
            return VAR_2;
        }

        FUNC_3(VAR_5, VAR_13->log, 0, "aio_write: OK");

        VAR_13->active = 1;
        VAR_13->ready = 0;
    }

    VAR_13->complete = 0;

    VAR_12 = FUNC_0(&VAR_13->aiocb);
    if (VAR_12 == -1) {
        FUNC_5(VAR_4, VAR_13->log, VAR_7, "aio_error() failed");
        VAR_13->error = 1;
        return VAR_2;
    }

    if (VAR_12 != 0) {
        if (VAR_12 == VAR_1) {
            if (VAR_13->ready) {
                FUNC_5(VAR_3, VAR_13->log, VAR_12,
                              "aio_write() still in progress");
                VAR_13->ready = 0;
            }
            return VAR_0;
        }

        FUNC_5(VAR_4, VAR_13->log, VAR_12, "aio_write() failed");
        VAR_13->error = 1;
        VAR_13->ready = 0;


        VAR_12 = FUNC_1(&VAR_13->aiocb);
        if (VAR_12 == -1) {
            FUNC_5(VAR_3, VAR_13->log, VAR_7,
                          "aio_return() failed");
        }

        FUNC_5(VAR_4, VAR_13->log, VAR_12, "aio_return() %d", VAR_12);


        return VAR_2;
    }

    VAR_12 = FUNC_1(&VAR_13->aiocb);
    if (VAR_12 == -1) {
        FUNC_5(VAR_3, VAR_13->log, VAR_7,
                      "aio_return() failed");

        VAR_13->error = 1;
        VAR_13->ready = 0;
        return VAR_2;
    }


    FUNC_4(VAR_5, VAR_13->log, 0, "aio_write: %d", VAR_12);

    VAR_13->active = 0;
    VAR_13->ready = 1;

    return VAR_12;
}
