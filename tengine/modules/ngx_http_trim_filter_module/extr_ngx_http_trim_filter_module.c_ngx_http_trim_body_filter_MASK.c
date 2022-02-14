
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {scalar_t__ saved; int busy; int free; int tout; int tin; TYPE_4__* in; } ;
typedef TYPE_2__ ngx_http_trim_ctx_t ;
struct TYPE_26__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_27__ {struct TYPE_27__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
typedef void* ngx_buf_tag_t ;
typedef int ngx_buf_t ;
struct TYPE_32__ {int len; int * data; } ;
struct TYPE_31__ {int * data; } ;
struct TYPE_30__ {int len; int * data; } ;
struct TYPE_29__ {int len; int * data; } ;
struct TYPE_28__ {int memory; scalar_t__ file_last; scalar_t__ file_pos; int last_buf; void* tag; scalar_t__ in_file; int * pos; int * last; } ;
struct TYPE_24__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__**,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int *,TYPE_4__**,void*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (TYPE_5__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_13, ngx_chain_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_chain_t *VAR_16, *VAR_17, *VAR_18, **VAR_19;
    ngx_http_trim_ctx_t *VAR_20;

    FUNC_7(VAR_6, VAR_13->connection->log, 0,
                   "http trim filter");

    VAR_20 = FUNC_4(VAR_13, VAR_8);
    if (VAR_20 == ((void*)0)) {
        return FUNC_5(VAR_13, VAR_14);
    }

    if (VAR_14 == ((void*)0)) {
        return FUNC_5(VAR_13, VAR_14);
    }

    VAR_20->in = ((void*)0);
    if (FUNC_1(VAR_13->pool, &VAR_20->in, VAR_14) != VAR_7) {
        return VAR_0;
    }

    VAR_18 = ((void*)0);
    VAR_19 = &VAR_18;

    for (VAR_17 = VAR_20->in; VAR_17; VAR_17 = VAR_17->next) {
        VAR_20->tin += VAR_17->buf->last - VAR_17->buf->pos;

        VAR_15 = FUNC_6(VAR_13, VAR_17, VAR_20);
        if (VAR_15 == VAR_0) {
            return VAR_15;
        }

        if (VAR_20->saved) {
            VAR_16 = FUNC_2(VAR_13->pool, &VAR_20->free);
            if (VAR_16 == ((void*)0)) {
                return VAR_0;
            }

            VAR_16->buf->tag = (ngx_buf_tag_t) &VAR_8;
            VAR_16->buf->memory = 1;

            if (VAR_20->saved > 0) {
                VAR_16->buf->pos = VAR_10.data;
                VAR_16->buf->last = VAR_16->buf->pos + VAR_20->saved;

            } else if (VAR_20->saved == VAR_4) {
                VAR_16->buf->pos = VAR_11.data;
                VAR_16->buf->last = VAR_16->buf->pos + 1;

            } else if (VAR_20->saved == VAR_5) {
                VAR_16->buf->pos = (u_char *) " ";
                VAR_16->buf->last = VAR_16->buf->pos + 1;

            } else if (VAR_20->saved == VAR_3) {
                VAR_16->buf->pos = VAR_11.data;
                VAR_16->buf->last = VAR_16->buf->pos + VAR_11.len;

            } else if (VAR_20->saved == VAR_1) {
                VAR_16->buf->pos = VAR_9.data;
                VAR_16->buf->last = VAR_16->buf->pos + VAR_9.len;

            } else if (VAR_20->saved == VAR_2) {
                VAR_16->buf->pos = VAR_12.data;
                VAR_16->buf->last = VAR_16->buf->pos + VAR_12.len - 1;
            }

            *VAR_19 = VAR_16;
            VAR_19 = &VAR_16->next;

            VAR_20->tout += VAR_16->buf->last - VAR_16->buf->pos;

            VAR_20->saved = 0;
        }

        if(VAR_17->buf->in_file
           && (VAR_17->buf->file_last - VAR_17->buf->file_pos)
               != (off_t) (VAR_17->buf->last - VAR_17->buf->pos))
        {
            VAR_17->buf->in_file = 0;
        }

        if (FUNC_0(VAR_17->buf) == 0) {
            if (VAR_17->buf->last_buf) {
                VAR_16 = FUNC_2(VAR_13->pool, &VAR_20->free);
                if (VAR_16 == ((void*)0)) {
                    return VAR_0;
                }

                FUNC_8(VAR_16->buf, sizeof(ngx_buf_t));
                VAR_16->buf->tag = (ngx_buf_tag_t) &VAR_8;
                VAR_16->buf->last_buf = 1;

                *VAR_19 = VAR_16;
                VAR_19 = &VAR_16->next;

            } else {
                if (VAR_17->next == ((void*)0)) {
                    *VAR_19 = ((void*)0);
                }
            }

        } else {
            *VAR_19 = VAR_17;
            VAR_19 = &VAR_17->next;
        }

    }

    if (VAR_18 == ((void*)0)) {
        return VAR_7;
    }

    VAR_15 = FUNC_5(VAR_13, VAR_18);

    FUNC_3(VAR_13->pool, &VAR_20->free, &VAR_20->busy, &VAR_18,
                           (ngx_buf_tag_t) &VAR_8);

    return VAR_15;
}
