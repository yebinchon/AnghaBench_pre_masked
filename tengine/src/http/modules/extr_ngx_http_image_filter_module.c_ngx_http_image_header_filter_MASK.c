
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef int off_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int len; int data; } ;
struct TYPE_20__ {scalar_t__ status; int content_length_n; TYPE_3__* refresh; TYPE_1__ content_type; } ;
struct TYPE_21__ {int main_filter_need_in_memory; scalar_t__ allow_ranges; TYPE_4__ headers_out; TYPE_2__* connection; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_22__ {size_t length; } ;
typedef TYPE_6__ ngx_http_image_filter_ctx_t ;
struct TYPE_23__ {scalar_t__ filter; size_t buffer_size; } ;
typedef TYPE_7__ ngx_http_image_filter_conf_t ;
struct TYPE_19__ {scalar_t__ hash; } ;
struct TYPE_18__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 TYPE_6__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_7)
{
    off_t VAR_8;
    ngx_http_image_filter_ctx_t *VAR_9;
    ngx_http_image_filter_conf_t *VAR_10;

    if (VAR_7->headers_out.status == VAR_2) {
        return FUNC_2(VAR_7);
    }

    VAR_9 = FUNC_0(VAR_7, VAR_6);

    if (VAR_9) {
        FUNC_3(VAR_7, ((void*)0), VAR_6);
        return FUNC_2(VAR_7);
    }

    VAR_10 = FUNC_1(VAR_7, VAR_6);

    if (VAR_10->filter == VAR_1) {
        return FUNC_2(VAR_7);
    }

    if (VAR_7->headers_out.content_type.len
            >= sizeof("multipart/x-mixed-replace") - 1
        && FUNC_6(VAR_7->headers_out.content_type.data,
                           (u_char *) "multipart/x-mixed-replace",
                           sizeof("multipart/x-mixed-replace") - 1)
           == 0)
    {
        FUNC_4(VAR_4, VAR_7->connection->log, 0,
                      "image filter: multipart/x-mixed-replace response");

        return VAR_0;
    }

    VAR_9 = FUNC_5(VAR_7->pool, sizeof(ngx_http_image_filter_ctx_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_7, VAR_9, VAR_6);

    VAR_8 = VAR_7->headers_out.content_length_n;

    if (VAR_8 != -1 && VAR_8 > (off_t) VAR_10->buffer_size) {
        FUNC_4(VAR_4, VAR_7->connection->log, 0,
                      "image filter: too big response: %O", VAR_8);

        return VAR_3;
    }

    if (VAR_8 == -1) {
        VAR_9->length = VAR_10->buffer_size;

    } else {
        VAR_9->length = (size_t) VAR_8;
    }

    if (VAR_7->headers_out.refresh) {
        VAR_7->headers_out.refresh->hash = 0;
    }

    VAR_7->main_filter_need_in_memory = 1;
    VAR_7->allow_ranges = 0;

    return VAR_5;
}
