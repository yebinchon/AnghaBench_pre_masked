
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_21__ {size_t len; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_22__ {int down; int backup; int fail_timeout; int max_fails; int max_conns; int weight; TYPE_4__* addrs; } ;
typedef TYPE_6__ ngx_http_upstream_server_t ;
struct TYPE_23__ {int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_3__* upstream; scalar_t__ deleted; int dynamic; } ;
typedef TYPE_8__ ngx_http_dyups_srv_conf_t ;
struct TYPE_17__ {size_t nelts; TYPE_8__* elts; } ;
struct TYPE_25__ {TYPE_1__ dy_upstreams; } ;
typedef TYPE_9__ ngx_http_dyups_main_conf_t ;
struct TYPE_16__ {void* last; } ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_20__ {int name; } ;
struct TYPE_19__ {TYPE_2__* servers; TYPE_5__ host; } ;
struct TYPE_18__ {size_t nelts; TYPE_6__* elts; } ;


 TYPE_10__* FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 TYPE_9__* FUNC_1 (TYPE_7__*,int ) ;
 void* FUNC_2 (void*,char*,...) ;

__attribute__((used)) static ngx_buf_t *
FUNC_3(ngx_http_request_t *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3, VAR_4;
    ngx_str_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_http_dyups_srv_conf_t *VAR_7, *VAR_8;
    ngx_http_dyups_main_conf_t *VAR_9;
    ngx_http_upstream_server_t *VAR_10;

    VAR_9 = FUNC_1(VAR_1, VAR_0);

    VAR_4 = 0;
    VAR_7 = VAR_9->dy_upstreams.elts;
    for (VAR_2 = 0; VAR_2 < VAR_9->dy_upstreams.nelts; VAR_2++) {

        VAR_8 = &VAR_7[VAR_2];

        if (!VAR_8->dynamic) {
            continue;
        }

        if (VAR_8->deleted) {
            continue;
        }

        VAR_4 += VAR_8->upstream->host.len + 1;

        for (VAR_3 = 0; VAR_3 < VAR_8->upstream->servers->nelts; VAR_3++) {
            VAR_4 += sizeof("server ") + 256;
        }
    }

    VAR_6 = FUNC_0(VAR_1->pool, VAR_4);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_2 = 0; VAR_2 < VAR_9->dy_upstreams.nelts; VAR_2++) {

        VAR_8 = &VAR_7[VAR_2];

        if (!VAR_8->dynamic) {
            continue;
        }

        if (VAR_8->deleted) {
            continue;
        }

        VAR_5 = VAR_8->upstream->host;
        VAR_6->last = FUNC_2(VAR_6->last, "%V\n", &VAR_5);

        VAR_10 = VAR_8->upstream->servers->elts;
        for (VAR_3 = 0; VAR_3 < VAR_8->upstream->servers->nelts; VAR_3++) {
            VAR_6->last = FUNC_2(VAR_6->last,
                                    "server %V weight=%i "



                                    "max_fails=%i "
                                    "fail_timeout=%T backup=%d down=%d\n",
                                    &VAR_10[VAR_3].addrs->name,
                                    VAR_10[VAR_3].weight,



                                    VAR_10[VAR_3].max_fails,
                                    VAR_10[VAR_3].fail_timeout,
                                    VAR_10[VAR_3].backup,
                                    VAR_10[VAR_3].down);
        }
        VAR_6->last = FUNC_2(VAR_6->last, "\n");
    }

    return VAR_6;
}
