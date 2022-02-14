
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
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int length; int * last; int * image; } ;
typedef TYPE_3__ ngx_http_image_filter_ctx_t ;
struct TYPE_13__ {TYPE_5__* buf; struct TYPE_13__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_14__ {size_t last; size_t pos; scalar_t__ last_buf; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_10__ {int buffered; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,size_t,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int * FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_7, ngx_chain_t *VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10, VAR_11;
    ngx_buf_t *VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_image_filter_ctx_t *VAR_14;

    VAR_14 = FUNC_1(VAR_7, VAR_6);

    if (VAR_14->image == ((void*)0)) {
        VAR_14->image = FUNC_4(VAR_7->pool, VAR_14->length);
        if (VAR_14->image == ((void*)0)) {
            return VAR_1;
        }

        VAR_14->last = VAR_14->image;
    }

    VAR_9 = VAR_14->last;

    for (VAR_13 = VAR_8; VAR_13; VAR_13 = VAR_13->next) {

        VAR_12 = VAR_13->buf;
        VAR_10 = VAR_12->last - VAR_12->pos;

        FUNC_2(VAR_3, VAR_7->connection->log, 0,
                       "image buf: %uz", VAR_10);

        VAR_11 = VAR_14->image + VAR_14->length - VAR_9;

        if (VAR_10 > VAR_11) {
            FUNC_3(VAR_4, VAR_7->connection->log, 0,
                          "image filter: too big response");
            return VAR_1;
        }

        VAR_9 = FUNC_0(VAR_9, VAR_12->pos, VAR_10);
        VAR_12->pos += VAR_10;

        if (VAR_12->last_buf) {
            VAR_14->last = VAR_9;
            return VAR_5;
        }
    }

    VAR_14->last = VAR_9;
    VAR_7->connection->buffered |= VAR_2;

    return VAR_0;
}
