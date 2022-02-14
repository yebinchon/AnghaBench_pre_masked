
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {int last_modified; int value_len; int types; int enable; } ;
typedef TYPE_3__ ngx_http_ssi_loc_conf_t ;
struct TYPE_20__ {int size; int pool; int nalloc; int elts; } ;
struct TYPE_22__ {int output; int errmsg; int timefmt; TYPE_2__ params; int params_array; int encoding; int out; int * last_out; int value_len; } ;
typedef TYPE_4__ ngx_http_ssi_ctx_t ;
struct TYPE_19__ {scalar_t__ content_length_n; } ;
struct TYPE_23__ {int filter_need_in_memory; int preserve_body; struct TYPE_23__* main; int pool; TYPE_1__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_4__* FUNC_9 (int ,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_request_t *VAR_5)
{
    ngx_http_ssi_ctx_t *VAR_6;
    ngx_http_ssi_loc_conf_t *VAR_7;

    VAR_7 = FUNC_4(VAR_5, VAR_3);

    if (!VAR_7->enable
        || VAR_5->headers_out.content_length_n == 0
        || FUNC_7(VAR_5, &VAR_7->types) == ((void*)0))
    {
        return FUNC_5(VAR_5);
    }

    VAR_6 = FUNC_9(VAR_5->pool, sizeof(ngx_http_ssi_ctx_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_5, VAR_6, VAR_3);


    VAR_6->value_len = VAR_7->value_len;
    VAR_6->last_out = &VAR_6->out;

    VAR_6->encoding = VAR_1;
    VAR_6->output = 1;

    VAR_6->params.elts = VAR_6->params_array;
    VAR_6->params.size = sizeof(ngx_table_elt_t);
    VAR_6->params.nalloc = VAR_2;
    VAR_6->params.pool = VAR_5->pool;

    VAR_6->timefmt = VAR_4;
    FUNC_10(&VAR_6->errmsg,
                "[an error occurred while processing the directive]");

    VAR_5->filter_need_in_memory = 1;

    if (VAR_5 == VAR_5->main) {
        FUNC_1(VAR_5);
        FUNC_0(VAR_5);

        VAR_5->preserve_body = 1;

        if (!VAR_7->last_modified) {
            FUNC_3(VAR_5);
            FUNC_2(VAR_5);

        } else {
            FUNC_8(VAR_5);
        }
    }

    return FUNC_5(VAR_5);
}
