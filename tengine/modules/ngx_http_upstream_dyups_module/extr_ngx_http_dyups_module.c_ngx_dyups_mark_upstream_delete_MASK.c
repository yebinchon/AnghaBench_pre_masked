
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {int host; TYPE_2__* servers; } ;
typedef TYPE_3__ ngx_http_upstream_srv_conf_t ;
struct TYPE_17__ {int down; scalar_t__ addrs; } ;
typedef TYPE_4__ ngx_http_upstream_server_t ;
struct TYPE_14__ {TYPE_3__** elts; } ;
struct TYPE_18__ {TYPE_1__ upstreams; } ;
typedef TYPE_5__ ngx_http_upstream_main_conf_t ;
struct TYPE_19__ {size_t idx; int deleted; TYPE_3__* upstream; } ;
typedef TYPE_6__ ngx_http_dyups_srv_conf_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_15__ {size_t nelts; TYPE_4__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_3__*) ;
 TYPE_5__* FUNC_1 (TYPE_9__*,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_http_dyups_srv_conf_t *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_http_upstream_server_t *VAR_7;
    ngx_http_upstream_srv_conf_t *VAR_8, **VAR_9;
    ngx_http_upstream_main_conf_t *VAR_10;

    VAR_8 = VAR_5->upstream;
    VAR_10 = FUNC_1(VAR_2,
                                               VAR_4);
    VAR_9 = VAR_10->upstreams.elts;

    FUNC_3(VAR_1, VAR_2->log, 0,
                  "[dyups] delete upstream \"%V\"", &VAR_5->upstream->host);

    FUNC_0(VAR_10, VAR_8);

    VAR_7 = VAR_8->servers->elts;
    for (VAR_6 = 0; VAR_6 < VAR_8->servers->nelts; VAR_6++) {
        VAR_7[VAR_6].down = 1;







    }

    VAR_9[VAR_5->idx] = &VAR_3;
    VAR_5->deleted = VAR_0;
}
