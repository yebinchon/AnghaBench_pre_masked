
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


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_23__ {size_t sfv_len; int sfv_fd; scalar_t__ sfv_off; scalar_t__ sfv_flag; } ;
typedef TYPE_3__ sendfilevec_t ;
typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_24__ {int error; scalar_t__ ready; } ;
typedef TYPE_4__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_25__ {size_t sent; int log; int fd; int sendfile; TYPE_4__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_26__ {TYPE_7__* buf; struct TYPE_26__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_27__ {int last; scalar_t__ pos; scalar_t__ file_last; scalar_t__ file_pos; TYPE_2__* file; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_21__ {int data; } ;
struct TYPE_22__ {int fd; TYPE_1__ name; } ;


 TYPE_6__* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 TYPE_6__* FUNC_2 (TYPE_6__*,size_t) ;
 int FUNC_3 (TYPE_5__*,int,char*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int,char*,size_t) ;
 int FUNC_5 (int ,int ,int ,char*,int,size_t) ;
 int FUNC_6 (int ,int ,int ,char*,...) ;
 scalar_t__ VAR_7 ;
 TYPE_6__* FUNC_7 (TYPE_5__*,TYPE_6__*,scalar_t__) ;
 int FUNC_8 (int ,TYPE_3__*,int,size_t*) ;

ngx_chain_t *
FUNC_9(ngx_connection_t *VAR_8, ngx_chain_t *VAR_9, off_t VAR_10)
{
    int VAR_11;
    u_char *VAR_12;
    off_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    size_t VAR_18;
    ssize_t VAR_19;
    ngx_int_t VAR_20;
    ngx_err_t VAR_21;
    ngx_buf_t *VAR_22;
    ngx_uint_t VAR_23;
    sendfilevec_t *VAR_24, VAR_25[VAR_4];
    ngx_event_t *VAR_26;
    ngx_chain_t *VAR_27;

    VAR_26 = VAR_8->write;

    if (!VAR_26->ready) {
        return VAR_9;
    }

    if (!VAR_8->sendfile) {
        return FUNC_7(VAR_8, VAR_9, VAR_10);
    }




    if (VAR_10 == 0 || VAR_10 > (off_t) (VAR_3 - VAR_7)) {
        VAR_10 = VAR_3 - VAR_7;
    }


    VAR_14 = 0;

    for ( ;; ) {
        VAR_11 = VAR_5;
        VAR_12 = ((void*)0);
        VAR_17 = 0;
        VAR_22 = ((void*)0);
        VAR_24 = ((void*)0);
        VAR_20 = 0;
        VAR_18 = 0;
        VAR_15 = VAR_14;

        VAR_23 = 0;



        for (VAR_27 = VAR_9; VAR_27 && VAR_14 < VAR_10; VAR_27 = VAR_27->next) {

            if (FUNC_1(VAR_27->buf)) {
                continue;
            }

            if (FUNC_0(VAR_27->buf)) {
                VAR_11 = VAR_5;

                VAR_13 = VAR_27->buf->last - VAR_27->buf->pos;

                if (VAR_14 + VAR_13 > VAR_10) {
                    VAR_13 = VAR_10 - VAR_14;
                }

                if (VAR_12 == VAR_27->buf->pos) {
                    VAR_24->sfv_len += (size_t) VAR_13;

                } else {
                    if (VAR_23 == VAR_4) {
                        break;
                    }

                    VAR_24 = &VAR_25[VAR_23++];

                    VAR_24->sfv_fd = VAR_5;
                    VAR_24->sfv_flag = 0;
                    VAR_24->sfv_off = (off_t) (uintptr_t) VAR_27->buf->pos;
                    VAR_24->sfv_len = (size_t) VAR_13;
                }

                VAR_12 = VAR_27->buf->pos + (size_t) VAR_13;
                VAR_14 += VAR_13;

            } else {
                VAR_12 = ((void*)0);

                VAR_13 = VAR_27->buf->file_last - VAR_27->buf->file_pos;

                if (VAR_14 + VAR_13 > VAR_10) {
                    VAR_13 = VAR_10 - VAR_14;

                    VAR_16 = (VAR_27->buf->file_pos + VAR_13 + VAR_7 - 1)
                               & ~((off_t) VAR_7 - 1);

                    if (VAR_16 <= VAR_27->buf->file_last) {
                        VAR_13 = VAR_16 - VAR_27->buf->file_pos;
                    }
                }

                if (VAR_11 == VAR_27->buf->file->fd && VAR_17 == VAR_27->buf->file_pos) {
                    VAR_24->sfv_len += (size_t) VAR_13;

                } else {
                    if (VAR_23 == VAR_4) {
                        break;
                    }

                    VAR_24 = &VAR_25[VAR_23++];

                    VAR_11 = VAR_27->buf->file->fd;
                    VAR_24->sfv_fd = VAR_11;
                    VAR_24->sfv_flag = 0;
                    VAR_24->sfv_off = VAR_27->buf->file_pos;
                    VAR_24->sfv_len = (size_t) VAR_13;
                }

                VAR_22 = VAR_27->buf;
                VAR_17 = VAR_27->buf->file_pos + VAR_13;
                VAR_14 += VAR_13;
            }
        }

        VAR_19 = FUNC_8(VAR_8->fd, VAR_25, VAR_23, &VAR_18);

        if (VAR_19 == -1) {
            VAR_21 = VAR_6;

            switch (VAR_21) {
            case 129:
                break;

            case 128:
                VAR_20 = 1;
                break;

            default:
                VAR_26->error = 1;
                FUNC_3(VAR_8, VAR_21, "sendfilev() failed");
                return VAR_0;
            }

            FUNC_4(VAR_2, VAR_8->log, VAR_21,
                          "sendfilev() sent only %uz bytes", VAR_18);

        } else if (VAR_19 == 0 && VAR_18 == 0) {







            if (VAR_22) {
                FUNC_6(VAR_1, VAR_8->log, 0,
                        "sendfilev() reported that \"%s\" was truncated at %O",
                        VAR_22->file->name.data, VAR_22->file_pos);

            } else {
                FUNC_6(VAR_1, VAR_8->log, 0,
                              "sendfilev() returned 0 with memory buffers");
            }

            return VAR_0;
        }

        FUNC_5(VAR_2, VAR_8->log, 0,
                       "sendfilev: %z %z", VAR_19, VAR_18);

        VAR_8->sent += VAR_18;

        VAR_9 = FUNC_2(VAR_9, VAR_18);

        if (VAR_20) {
            VAR_14 = VAR_15 + VAR_18;
            continue;
        }

        if (VAR_14 - VAR_15 != (off_t) VAR_18) {
            VAR_26->ready = 0;
            return VAR_9;
        }

        if (VAR_14 >= VAR_10 || VAR_9 == ((void*)0)) {
            return VAR_9;
        }
    }
}
