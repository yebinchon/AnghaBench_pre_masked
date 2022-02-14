
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int tag; } ;
struct TYPE_19__ {char* pos; char* last; int flush; int memory; int tag; } ;
struct TYPE_15__ {int keepalive; TYPE_1__ output; int free_bufs; scalar_t__ length; TYPE_6__* out_bufs; TYPE_7__ buffer; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_16__ {TYPE_2__* connection; int pool; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {char* pos; char* last; scalar_t__ state; scalar_t__ type; scalar_t__ length; int padding; } ;
typedef TYPE_5__ ngx_http_fastcgi_ctx_t ;
struct TYPE_18__ {TYPE_7__* buf; struct TYPE_18__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_14__ {int log; } ;


 char VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_6__* FUNC_0 (int ,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(void *VAR_14, ssize_t VAR_15)
{
    u_char *VAR_16, *VAR_17;
    ngx_int_t VAR_18;
    ngx_buf_t *VAR_19, *VAR_20;
    ngx_chain_t *VAR_21, **VAR_22;
    ngx_http_request_t *VAR_23;
    ngx_http_upstream_t *VAR_24;
    ngx_http_fastcgi_ctx_t *VAR_25;

    VAR_23 = VAR_14;
    VAR_25 = FUNC_2(VAR_23, VAR_10);

    VAR_24 = VAR_23->upstream;
    VAR_20 = &VAR_24->buffer;

    VAR_20->pos = VAR_20->last;
    VAR_20->last += VAR_15;

    for (VAR_21 = VAR_24->out_bufs, VAR_22 = &VAR_24->out_bufs; VAR_21; VAR_21 = VAR_21->next) {
        VAR_22 = &VAR_21->next;
    }

    VAR_25->pos = VAR_20->pos;
    VAR_25->last = VAR_20->last;

    for ( ;; ) {
        if (VAR_25->state < VAR_11) {

            VAR_18 = FUNC_1(VAR_23, VAR_25);

            if (VAR_18 == VAR_2) {
                break;
            }

            if (VAR_18 == VAR_3) {
                return VAR_3;
            }

            if (VAR_25->type == VAR_6 && VAR_25->length == 0) {
                VAR_25->state = VAR_12;

                FUNC_3(VAR_7, VAR_23->connection->log, 0,
                               "http fastcgi closed stdout");

                continue;
            }
        }

        if (VAR_25->state == VAR_12) {

            if (VAR_25->type == VAR_4) {

                if (VAR_25->pos + VAR_25->padding < VAR_25->last) {
                    VAR_24->length = 0;
                    break;
                }

                if (VAR_25->pos + VAR_25->padding == VAR_25->last) {
                    VAR_24->length = 0;
                    VAR_24->keepalive = 1;
                    break;
                }

                VAR_25->padding -= VAR_25->last - VAR_25->pos;

                break;
            }

            if (VAR_25->pos + VAR_25->padding < VAR_25->last) {
                VAR_25->state = VAR_13;
                VAR_25->pos += VAR_25->padding;

                continue;
            }

            if (VAR_25->pos + VAR_25->padding == VAR_25->last) {
                VAR_25->state = VAR_13;

                break;
            }

            VAR_25->padding -= VAR_25->last - VAR_25->pos;

            break;
        }




        if (VAR_25->type == VAR_5) {

            if (VAR_25->length) {

                if (VAR_25->pos == VAR_25->last) {
                    break;
                }

                VAR_17 = VAR_25->pos;

                if (VAR_25->pos + VAR_25->length <= VAR_25->last) {
                    VAR_25->pos += VAR_25->length;
                    VAR_25->length = 0;
                    VAR_25->state = VAR_12;

                } else {
                    VAR_25->length -= VAR_25->last - VAR_25->pos;
                    VAR_25->pos = VAR_25->last;
                }

                for (VAR_16 = VAR_25->pos - 1; VAR_17 < VAR_16; VAR_16--) {
                    if (*VAR_16 != VAR_1 && *VAR_16 != VAR_0 && *VAR_16 != '.' && *VAR_16 != ' ') {
                        break;
                    }
                }

                FUNC_5(VAR_8, VAR_23->connection->log, 0,
                              "FastCGI sent in stderr: \"%*s\"",
                              VAR_16 + 1 - VAR_17, VAR_17);

            } else {
                VAR_25->state = VAR_12;
            }

            continue;
        }

        if (VAR_25->type == VAR_4) {

            if (VAR_25->pos + VAR_25->length <= VAR_25->last) {
                VAR_25->state = VAR_12;
                VAR_25->pos += VAR_25->length;

                continue;
            }

            VAR_25->length -= VAR_25->last - VAR_25->pos;

            break;
        }




        if (VAR_25->pos == VAR_25->last) {
            break;
        }

        VAR_21 = FUNC_0(VAR_23->pool, &VAR_24->free_bufs);
        if (VAR_21 == ((void*)0)) {
            return VAR_3;
        }

        *VAR_22 = VAR_21;
        VAR_22 = &VAR_21->next;

        VAR_19 = VAR_21->buf;

        VAR_19->flush = 1;
        VAR_19->memory = 1;

        VAR_19->pos = VAR_25->pos;
        VAR_19->tag = VAR_24->output.tag;

        FUNC_4(VAR_7, VAR_23->connection->log, 0,
                       "http fastcgi output buf %p", VAR_19->pos);

        if (VAR_25->pos + VAR_25->length <= VAR_25->last) {
            VAR_25->state = VAR_12;
            VAR_25->pos += VAR_25->length;
            VAR_19->last = VAR_25->pos;

            continue;
        }

        VAR_25->length -= VAR_25->last - VAR_25->pos;
        VAR_19->last = VAR_25->last;

        break;
    }

    return VAR_9;
}
