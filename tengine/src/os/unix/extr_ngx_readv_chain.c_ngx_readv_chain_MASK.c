
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
struct iovec {scalar_t__ iov_len; void* iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {scalar_t__ pending_eof; scalar_t__ available; int eof; int error; scalar_t__ ready; scalar_t__ kq_errno; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_12__ {TYPE_2__* read; int log; int fd; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_14__ {scalar_t__ nelts; int size; int nalloc; struct iovec* elts; int pool; } ;
typedef TYPE_5__ ngx_array_t ;
struct TYPE_10__ {int * end; int * last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct iovec* FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,char*) ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__,char*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_7 (int ,struct iovec*,scalar_t__) ;

ssize_t
FUNC_8(ngx_connection_t *VAR_14, ngx_chain_t *VAR_15, off_t VAR_16)
{
    u_char *VAR_17;
    ssize_t VAR_18, VAR_19;
    ngx_err_t VAR_20;
    ngx_array_t VAR_21;
    ngx_event_t *VAR_22;
    struct iovec *VAR_23, VAR_24[VAR_5];

    VAR_22 = VAR_14->read;
    VAR_17 = ((void*)0);
    VAR_23 = ((void*)0);
    VAR_19 = 0;

    VAR_21.elts = VAR_24;
    VAR_21.nelts = 0;
    VAR_21.size = sizeof(struct iovec);
    VAR_21.nalloc = VAR_5;
    VAR_21.pool = VAR_14->pool;



    while (VAR_15) {
        VAR_18 = VAR_15->buf->end - VAR_15->buf->last;

        if (VAR_16) {
            if (VAR_19 >= VAR_16) {
                break;
            }

            if (VAR_19 + VAR_18 > VAR_16) {
                VAR_18 = (ssize_t) (VAR_16 - VAR_19);
            }
        }

        if (VAR_17 == VAR_15->buf->last) {
            VAR_23->iov_len += VAR_18;

        } else {
            if (VAR_21.nelts >= VAR_0) {
                break;
            }

            VAR_23 = FUNC_0(&VAR_21);
            if (VAR_23 == ((void*)0)) {
                return VAR_4;
            }

            VAR_23->iov_base = (void *) VAR_15->buf->last;
            VAR_23->iov_len = VAR_18;
        }

        VAR_19 += VAR_18;
        VAR_17 = VAR_15->buf->end;
        VAR_15 = VAR_15->next;
    }

    FUNC_3(VAR_6, VAR_14->log, 0,
                   "readv: %ui, last:%uz", VAR_21.nelts, VAR_23->iov_len);

    do {
        VAR_18 = FUNC_7(VAR_14->fd, (struct iovec *) VAR_21.elts, VAR_21.nelts);

        if (VAR_18 == 0) {
            VAR_22->ready = 0;
            VAR_22->eof = 1;
            return 0;
        }

        if (VAR_18 > 0) {
            if (VAR_18 < VAR_19 && !(VAR_11 & VAR_9)) {
                VAR_22->ready = 0;
            }

            return VAR_18;
        }

        VAR_20 = VAR_12;

        if (VAR_20 == VAR_2 || VAR_20 == VAR_3) {
            FUNC_2(VAR_6, VAR_14->log, VAR_20,
                           "readv() not ready");
            VAR_18 = VAR_1;

        } else {
            VAR_18 = FUNC_1(VAR_14, VAR_20, "readv() failed");
            break;
        }

    } while (VAR_20 == VAR_3);

    VAR_22->ready = 0;

    if (VAR_18 == VAR_4) {
        VAR_14->read->error = 1;
    }

    return VAR_18;
}
