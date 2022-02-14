
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {TYPE_3__* addrs; } ;
typedef TYPE_4__ ngx_http_upstream_server_t ;
struct TYPE_16__ {int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_17__ {TYPE_2__* upstream; } ;
typedef TYPE_6__ ngx_http_dyups_srv_conf_t ;
struct TYPE_18__ {int last; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {TYPE_1__* servers; } ;
struct TYPE_12__ {size_t nelts; TYPE_4__* elts; } ;


 TYPE_7__* FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static ngx_buf_t *
FUNC_2(ngx_http_request_t *VAR_0,
    ngx_http_dyups_srv_conf_t *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3;
    ngx_buf_t *VAR_4;
    ngx_http_upstream_server_t *VAR_5;

    VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1->upstream->servers->nelts; VAR_2++) {
        VAR_3 += sizeof("server ") + 81;
    }

    VAR_4 = FUNC_0(VAR_0->pool, VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5 = VAR_1->upstream->servers->elts;
    for (VAR_2 = 0; VAR_2 < VAR_1->upstream->servers->nelts; VAR_2++) {
        VAR_4->last = FUNC_1(VAR_4->last, "server %V\n",
                                &VAR_5[VAR_2].addrs->name);
    }

    return VAR_4;
}
