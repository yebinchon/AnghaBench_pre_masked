
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_http_v2_srv_conf_t ;
struct TYPE_12__ {size_t id; struct TYPE_12__* index; int children; } ;
typedef TYPE_3__ ngx_http_v2_node_t ;
struct TYPE_13__ {int closed_nodes; TYPE_3__** streams_index; TYPE_2__* connection; TYPE_1__* http_connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_11__ {int pool; } ;
struct TYPE_10__ {int conf_ctx; } ;


 int * FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 size_t FUNC_2 (int *,size_t) ;
 int VAR_0 ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ngx_http_v2_node_t *
FUNC_5(ngx_http_v2_connection_t *VAR_1, ngx_uint_t VAR_2,
    ngx_uint_t VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_http_v2_node_t *VAR_5;
    ngx_http_v2_srv_conf_t *VAR_6;

    VAR_6 = FUNC_0(VAR_1->http_connection->conf_ctx,
                                         VAR_0);

    VAR_4 = FUNC_2(VAR_6, VAR_2);

    for (VAR_5 = VAR_1->streams_index[VAR_4]; VAR_5; VAR_5 = VAR_5->index) {

        if (VAR_5->id == VAR_2) {
            return VAR_5;
        }
    }

    if (!VAR_3) {
        return ((void*)0);
    }

    if (VAR_1->closed_nodes < 32) {
        VAR_5 = FUNC_3(VAR_1->connection->pool, sizeof(ngx_http_v2_node_t));
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }

    } else {
        VAR_5 = FUNC_1(VAR_1);
    }

    VAR_5->id = VAR_2;

    FUNC_4(&VAR_5->children);

    VAR_5->index = VAR_1->streams_index[VAR_4];
    VAR_1->streams_index[VAR_4] = VAR_5;

    return VAR_5;
}
