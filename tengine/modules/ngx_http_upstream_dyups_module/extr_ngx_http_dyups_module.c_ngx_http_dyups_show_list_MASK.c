
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {size_t len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_17__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {TYPE_2__* upstream; scalar_t__ deleted; int dynamic; } ;
typedef TYPE_5__ ngx_http_dyups_srv_conf_t ;
struct TYPE_14__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_19__ {TYPE_1__ dy_upstreams; } ;
typedef TYPE_6__ ngx_http_dyups_main_conf_t ;
struct TYPE_20__ {int last; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_15__ {TYPE_3__ host; } ;


 TYPE_7__* FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*,TYPE_3__*) ;

__attribute__((used)) static ngx_buf_t *
FUNC_3(ngx_http_request_t *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3;
    ngx_str_t VAR_4;
    ngx_buf_t *VAR_5;
    ngx_http_dyups_srv_conf_t *VAR_6, *VAR_7;
    ngx_http_dyups_main_conf_t *VAR_8;

    VAR_8 = FUNC_1(VAR_1, VAR_0);

    VAR_3 = 0;
    VAR_6 = VAR_8->dy_upstreams.elts;
    for (VAR_2 = 0; VAR_2 < VAR_8->dy_upstreams.nelts; VAR_2++) {

        VAR_7 = &VAR_6[VAR_2];

        if (!VAR_7->dynamic) {
            continue;
        }

        if (VAR_7->deleted) {
            continue;
        }

        VAR_3 += VAR_7->upstream->host.len + 1;
    }

    VAR_5 = FUNC_0(VAR_1->pool, VAR_3);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_2 = 0; VAR_2 < VAR_8->dy_upstreams.nelts; VAR_2++) {

        VAR_7 = &VAR_6[VAR_2];

        if (!VAR_7->dynamic) {
            continue;
        }

        if (VAR_7->deleted) {
            continue;
        }

        VAR_4 = VAR_7->upstream->host;
        VAR_5->last = FUNC_2(VAR_5->last, "%V\n", &VAR_4);
    }

    return VAR_5;
}
