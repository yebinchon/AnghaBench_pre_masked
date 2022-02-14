
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_30__ {scalar_t__ len; } ;
struct TYPE_25__ {int hash; TYPE_7__ value; TYPE_7__ key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_24__ {scalar_t__ status; int content_length_n; TYPE_2__* content_encoding; int headers; } ;
struct TYPE_26__ {int gzip_vary; int main_filter_need_in_memory; TYPE_1__ headers_out; int pool; int gzip_ok; int gzip_tested; scalar_t__ header_only; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_27__ {int buffering; TYPE_3__* request; } ;
typedef TYPE_4__ ngx_http_gzip_ctx_t ;
struct TYPE_28__ {int min_length; scalar_t__ postpone_gzipping; scalar_t__ clear_etag; int types; int enable; } ;
typedef TYPE_5__ ngx_http_gzip_conf_t ;
struct TYPE_29__ {scalar_t__ gzip_disable_degradation; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int ) ;
 int * FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_2__* FUNC_11 (int *) ;
 TYPE_4__* FUNC_12 (int ,int) ;
 int FUNC_13 (TYPE_7__*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_14(ngx_http_request_t *VAR_7)
{
    ngx_table_elt_t *VAR_8;
    ngx_http_gzip_ctx_t *VAR_9;
    ngx_http_gzip_conf_t *VAR_10;

    VAR_10 = FUNC_4(VAR_7, VAR_6);

    if (!VAR_10->enable
        || (VAR_7->headers_out.status != VAR_3
            && VAR_7->headers_out.status != VAR_1
            && VAR_7->headers_out.status != VAR_2)
        || (VAR_7->headers_out.content_encoding
            && VAR_7->headers_out.content_encoding->value.len)
        || (VAR_7->headers_out.content_length_n != -1
            && VAR_7->headers_out.content_length_n < VAR_10->min_length)
        || FUNC_9(VAR_7, &VAR_10->types) == ((void*)0)
        || VAR_7->header_only)
    {
        return FUNC_7(VAR_7);
    }

    VAR_7->gzip_vary = 1;
    if (!VAR_7->gzip_tested) {
        if (FUNC_6(VAR_7) != VAR_4) {
            return FUNC_7(VAR_7);
        }

    } else if (!VAR_7->gzip_ok) {
        return FUNC_7(VAR_7);
    }

    VAR_9 = FUNC_12(VAR_7->pool, sizeof(ngx_http_gzip_ctx_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_8(VAR_7, VAR_9, VAR_6);

    VAR_9->request = VAR_7;
    VAR_9->buffering = (VAR_10->postpone_gzipping != 0);

    FUNC_5(VAR_7, VAR_9);

    VAR_8 = FUNC_11(&VAR_7->headers_out.headers);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->hash = 1;
    FUNC_13(&VAR_8->key, "Content-Encoding");
    FUNC_13(&VAR_8->value, "gzip");
    VAR_7->headers_out.content_encoding = VAR_8;

    VAR_7->main_filter_need_in_memory = 1;

    FUNC_1(VAR_7);
    FUNC_0(VAR_7);





    FUNC_10(VAR_7);

    return FUNC_7(VAR_7);
}
