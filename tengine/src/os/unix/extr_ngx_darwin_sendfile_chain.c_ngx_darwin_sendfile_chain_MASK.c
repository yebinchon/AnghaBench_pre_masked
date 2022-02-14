
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct sf_hdtr {scalar_t__ hdr_cnt; scalar_t__ trl_cnt; struct iovec* trailers; struct iovec* headers; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
struct TYPE_23__ {int nalloc; scalar_t__ size; scalar_t__ count; struct iovec* iovs; } ;
typedef TYPE_3__ ngx_iovec_t ;
struct TYPE_24__ {int kq_errno; int error; scalar_t__ ready; scalar_t__ pending_eof; } ;
typedef TYPE_4__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_25__ {int sent; int log; int fd; TYPE_4__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_26__ {TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_27__ {int file_pos; TYPE_2__* file; scalar_t__ in_file; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_21__ {int data; } ;
struct TYPE_22__ {TYPE_1__ name; int fd; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_6__**,scalar_t__) ;
 TYPE_6__* FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 TYPE_6__* FUNC_7 (TYPE_3__*,TYPE_6__*,scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_9 (int ,int ,int ,scalar_t__*,struct sf_hdtr*,int ) ;

ngx_chain_t *
FUNC_10(ngx_connection_t *VAR_11, ngx_chain_t *VAR_12, off_t VAR_13)
{
    int VAR_14;
    off_t VAR_15, VAR_16, VAR_17;
    off_t VAR_18;
    ssize_t VAR_19;
    ngx_uint_t VAR_20;
    ngx_err_t VAR_21;
    ngx_buf_t *VAR_22;
    ngx_event_t *VAR_23;
    ngx_chain_t *VAR_24;
    ngx_iovec_t VAR_25, VAR_26;
    struct sf_hdtr VAR_27;
    struct iovec VAR_28[VAR_3];
    struct iovec VAR_29[VAR_3];

    VAR_23 = VAR_11->write;

    if (!VAR_23->ready) {
        return VAR_12;
    }
    if (VAR_13 == 0 || VAR_13 > (off_t) (VAR_6 - VAR_10)) {
        VAR_13 = VAR_6 - VAR_10;
    }

    VAR_15 = 0;

    VAR_25.iovs = VAR_28;
    VAR_25.nalloc = VAR_3;

    VAR_26.iovs = VAR_29;
    VAR_26.nalloc = VAR_3;

    for ( ;; ) {
        VAR_20 = 0;
        VAR_16 = VAR_15;



        VAR_24 = FUNC_7(&VAR_25, VAR_12, VAR_13 - VAR_15, VAR_11->log);

        if (VAR_24 == VAR_1) {
            return VAR_1;
        }

        VAR_15 += VAR_25.size;

        if (VAR_24 && VAR_24->buf->in_file && VAR_15 < VAR_13) {
            VAR_22 = VAR_24->buf;



            VAR_18 = FUNC_0(&VAR_24, VAR_13 - VAR_15);

            VAR_15 += VAR_18;

            if (VAR_25.count == 0 && VAR_15 < VAR_13) {





                VAR_24 = FUNC_7(&VAR_26, VAR_24, VAR_13 - VAR_15,
                                               VAR_11->log);
                if (VAR_24 == VAR_1) {
                    return VAR_1;
                }

                VAR_15 += VAR_26.size;

            } else {
                VAR_26.count = 0;
            }






            VAR_27.headers = VAR_25.count ? VAR_25.iovs : ((void*)0);
            VAR_27.hdr_cnt = VAR_25.count;
            VAR_27.trailers = VAR_26.count ? VAR_26.iovs : ((void*)0);
            VAR_27.trl_cnt = VAR_26.count;

            VAR_17 = VAR_25.size + VAR_18;

            FUNC_4(VAR_5, VAR_11->log, 0,
                           "sendfile: @%O %O h:%uz",
                           VAR_22->file_pos, VAR_17, VAR_25.size);

            VAR_14 = FUNC_9(VAR_22->file->fd, VAR_11->fd, VAR_22->file_pos,
                          &VAR_17, &VAR_27, 0);

            if (VAR_14 == -1) {
                VAR_21 = VAR_8;

                switch (VAR_21) {
                case 129:
                    break;

                case 128:
                    VAR_20 = 1;
                    break;

                default:
                    VAR_23->error = 1;
                    (void) FUNC_2(VAR_11, VAR_21, "sendfile() failed");
                    return VAR_1;
                }

                FUNC_3(VAR_5, VAR_11->log, VAR_21,
                               "sendfile() sent only %O bytes", VAR_17);
            }

            if (VAR_14 == 0 && VAR_17 == 0) {







                FUNC_6(VAR_4, VAR_11->log, 0,
                              "sendfile() reported that \"%s\" was truncated",
                              VAR_22->file->name.data);

                return VAR_1;
            }

            FUNC_5(VAR_5, VAR_11->log, 0,
                           "sendfile: %d, @%O %O:%O",
                           VAR_14, VAR_22->file_pos, VAR_17, VAR_18 + VAR_25.size);

        } else {
            VAR_19 = FUNC_8(VAR_11, &VAR_25);

            if (VAR_19 == VAR_2) {
                return VAR_1;
            }

            VAR_17 = (VAR_19 == VAR_0) ? 0 : VAR_19;
        }

        VAR_11->sent += VAR_17;

        VAR_12 = FUNC_1(VAR_12, VAR_17);

        if (VAR_20) {
            VAR_15 = VAR_16 + VAR_17;
            continue;
        }

        if (VAR_15 - VAR_16 != VAR_17) {
            VAR_23->ready = 0;
            return VAR_12;
        }

        if (VAR_15 >= VAR_13 || VAR_12 == ((void*)0)) {
            return VAR_12;
        }
    }
}
