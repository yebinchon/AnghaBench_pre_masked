
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_10__ {scalar_t__ status; int content_length_n; } ;
struct TYPE_11__ {scalar_t__ method; scalar_t__ http_version; int chunked; scalar_t__ keepalive; TYPE_1__ headers_out; int pool; scalar_t__ expect_trailers; struct TYPE_11__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ chunked_transfer_encoding; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
typedef int ngx_http_chunked_filter_ctx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int * FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_8)
{
    ngx_http_core_loc_conf_t *VAR_9;
    ngx_http_chunked_filter_ctx_t *VAR_10;

    if (VAR_8->headers_out.status == VAR_2
        || VAR_8->headers_out.status == VAR_3
        || VAR_8->headers_out.status < VAR_4
        || VAR_8 != VAR_8->main
        || VAR_8->method == VAR_1)
    {
        return FUNC_2(VAR_8);
    }

    if (VAR_8->headers_out.content_length_n == -1
        || VAR_8->expect_trailers)
    {
        VAR_9 = FUNC_1(VAR_8, VAR_7);

        if (VAR_8->http_version >= VAR_5
            && VAR_9->chunked_transfer_encoding)
        {
            if (VAR_8->expect_trailers) {
                FUNC_0(VAR_8);
            }

            VAR_8->chunked = 1;

            VAR_10 = FUNC_4(VAR_8->pool, sizeof(ngx_http_chunked_filter_ctx_t));
            if (VAR_10 == ((void*)0)) {
                return VAR_0;
            }

            FUNC_3(VAR_8, VAR_10, VAR_6);

        } else if (VAR_8->headers_out.content_length_n == -1) {
            VAR_8->keepalive = 0;
        }
    }

    return FUNC_2(VAR_8);
}
