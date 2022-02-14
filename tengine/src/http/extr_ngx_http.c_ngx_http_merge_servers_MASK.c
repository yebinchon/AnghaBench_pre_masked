
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef size_t ngx_uint_t ;
struct TYPE_23__ {char* (* merge_srv_conf ) (TYPE_8__*,int ,int ) ;char* (* merge_loc_conf ) (TYPE_8__*,TYPE_6__*,TYPE_6__*) ;} ;
typedef TYPE_3__ ngx_http_module_t ;
struct TYPE_24__ {TYPE_2__* ctx; } ;
typedef TYPE_4__ ngx_http_core_srv_conf_t ;
struct TYPE_21__ {size_t nelts; TYPE_4__** elts; } ;
struct TYPE_25__ {TYPE_1__ servers; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
struct TYPE_26__ {int locations; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_27__ {TYPE_6__** loc_conf; int * srv_conf; } ;
typedef TYPE_7__ ngx_http_conf_ctx_t ;
struct TYPE_28__ {scalar_t__ ctx; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_22__ {TYPE_6__** loc_conf; int * srv_conf; } ;
struct TYPE_20__ {size_t ctx_index; } ;


 char* VAR_0 ;
 TYPE_19__ VAR_1 ;
 char* FUNC_0 (TYPE_8__*,int ,TYPE_6__**,TYPE_3__*,size_t) ;
 char* FUNC_1 (TYPE_8__*,int ,int ) ;
 char* FUNC_2 (TYPE_8__*,TYPE_6__*,TYPE_6__*) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_2, ngx_http_core_main_conf_t *VAR_3,
    ngx_http_module_t *VAR_4, ngx_uint_t VAR_5)
{
    char *VAR_6;
    ngx_uint_t VAR_7;
    ngx_http_conf_ctx_t *VAR_8, VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;
    ngx_http_core_srv_conf_t **VAR_11;

    VAR_11 = VAR_3->servers.elts;
    VAR_8 = (ngx_http_conf_ctx_t *) VAR_2->ctx;
    VAR_9 = *VAR_8;
    VAR_6 = VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_3->servers.nelts; VAR_7++) {



        VAR_8->srv_conf = VAR_11[VAR_7]->ctx->srv_conf;

        if (VAR_4->merge_srv_conf) {
            VAR_6 = VAR_4->merge_srv_conf(VAR_2, VAR_9.srv_conf[VAR_5],
                                        VAR_11[VAR_7]->ctx->srv_conf[VAR_5]);
            if (VAR_6 != VAR_0) {
                goto failed;
            }
        }

        if (VAR_4->merge_loc_conf) {



            VAR_8->loc_conf = VAR_11[VAR_7]->ctx->loc_conf;

            VAR_6 = VAR_4->merge_loc_conf(VAR_2, VAR_9.loc_conf[VAR_5],
                                        VAR_11[VAR_7]->ctx->loc_conf[VAR_5]);
            if (VAR_6 != VAR_0) {
                goto failed;
            }



            VAR_10 = VAR_11[VAR_7]->ctx->loc_conf[VAR_1.ctx_index];

            VAR_6 = FUNC_0(VAR_2, VAR_10->locations,
                                          VAR_11[VAR_7]->ctx->loc_conf,
                                          VAR_4, VAR_5);
            if (VAR_6 != VAR_0) {
                goto failed;
            }
        }
    }

failed:

    *VAR_8 = VAR_9;

    return VAR_6;
}
