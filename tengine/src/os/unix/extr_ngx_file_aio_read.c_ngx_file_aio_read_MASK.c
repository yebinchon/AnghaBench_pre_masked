
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
struct aiocb {int dummy; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef int ngx_pool_t ;
struct TYPE_21__ {struct TYPE_21__* data; } ;
struct TYPE_17__ {int fd; int log; TYPE_8__ name; TYPE_5__* aio; } ;
typedef TYPE_3__ ngx_file_t ;
struct TYPE_18__ {int active; scalar_t__ complete; scalar_t__ ready; int handler; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_15__ {TYPE_4__* sival_ptr; } ;
struct TYPE_16__ {TYPE_1__ sigev_value; int sigev_notify; int sigev_notify_kqueue; } ;
struct TYPE_20__ {size_t aio_nbytes; TYPE_2__ aio_sigevent; int * aio_buf; int aio_offset; int aio_fildes; } ;
struct TYPE_19__ {scalar_t__ err; int file; TYPE_7__ aiocb; int nbytes; TYPE_4__ event; } ;
typedef TYPE_5__ ngx_event_aio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_7__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,TYPE_5__*,TYPE_4__*) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int ,char*,int ,int) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,int ,size_t,TYPE_8__*) ;
 int FUNC_5 (int ,int ,int,char*,TYPE_8__*) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_3__*,int *,size_t,int ) ;
 int FUNC_8 (scalar_t__) ;

ssize_t
FUNC_9(ngx_file_t *VAR_13, u_char *VAR_14, size_t VAR_15, off_t VAR_16,
    ngx_pool_t *VAR_17)
{
    int VAR_18;
    ngx_event_t *VAR_19;
    ngx_event_aio_t *VAR_20;

    if (!VAR_10) {
        return FUNC_7(VAR_13, VAR_14, VAR_15, VAR_16);
    }

    if (VAR_13->aio == ((void*)0) && FUNC_1(VAR_13, VAR_17) != VAR_7) {
        return VAR_3;
    }

    VAR_20 = VAR_13->aio;
    VAR_19 = &VAR_20->event;

    if (!VAR_19->ready) {
        FUNC_5(VAR_4, VAR_13->log, 0,
                      "second aio post for \"%V\"", &VAR_13->name);
        return VAR_0;
    }

    FUNC_4(VAR_6, VAR_13->log, 0,
                   "aio complete:%d @%O:%uz %V",
                   VAR_19->complete, VAR_16, VAR_15, &VAR_13->name);

    if (VAR_19->complete) {
        VAR_19->complete = 0;
        FUNC_8(VAR_20->err);

        if (VAR_20->err == 0) {
            return VAR_20->nbytes;
        }

        FUNC_5(VAR_5, VAR_13->log, VAR_9,
                      "aio read \"%s\" failed", VAR_13->name.data);

        return VAR_3;
    }

    FUNC_6(&VAR_20->aiocb, sizeof(struct aiocb));

    VAR_20->aiocb.aio_fildes = VAR_13->fd;
    VAR_20->aiocb.aio_offset = VAR_16;
    VAR_20->aiocb.aio_buf = VAR_14;
    VAR_20->aiocb.aio_nbytes = VAR_15;





    VAR_19->handler = VAR_11;

    VAR_18 = FUNC_0(&VAR_20->aiocb);

    if (VAR_18 == -1) {
        VAR_18 = VAR_9;

        if (VAR_18 == VAR_1) {
            return FUNC_7(VAR_13, VAR_14, VAR_15, VAR_16);
        }

        FUNC_5(VAR_5, VAR_13->log, VAR_18,
                      "aio_read(\"%V\") failed", &VAR_13->name);

        if (VAR_18 == VAR_2) {
            VAR_10 = 0;
            return FUNC_7(VAR_13, VAR_14, VAR_15, VAR_16);
        }

        return VAR_3;
    }

    FUNC_3(VAR_6, VAR_13->log, 0,
                   "aio_read: fd:%d %d", VAR_13->fd, VAR_18);

    VAR_19->active = 1;
    VAR_19->ready = 0;
    VAR_19->complete = 0;

    return FUNC_2(VAR_20->file, VAR_20, VAR_19);
}
