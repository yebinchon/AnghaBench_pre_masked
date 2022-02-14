
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_16__ {int valid; int * data; scalar_t__ len; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_19__ {int key; } ;
struct TYPE_13__ {int * data; scalar_t__ len; } ;
struct TYPE_14__ {TYPE_8__ node; TYPE_1__ str; } ;
struct TYPE_17__ {TYPE_2__ sn; scalar_t__ offset; TYPE_4__* value; } ;
typedef TYPE_5__ ngx_http_geo_variable_value_node_t ;
struct TYPE_18__ {int data_size; int rbtree; int temp_pool; int pool; } ;
typedef TYPE_6__ ngx_http_geo_conf_ctx_t ;
typedef int ngx_conf_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 void* FUNC_2 (int ,int) ;
 int * FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,int ) ;

__attribute__((used)) static ngx_http_variable_value_t *
FUNC_6(ngx_conf_t *VAR_0, ngx_http_geo_conf_ctx_t *VAR_1,
    ngx_str_t *VAR_2)
{
    uint32_t VAR_3;
    ngx_http_variable_value_t *VAR_4;
    ngx_http_geo_variable_value_node_t *VAR_5;

    VAR_3 = FUNC_1(VAR_2->data, VAR_2->len);

    VAR_5 = (ngx_http_geo_variable_value_node_t *)
               FUNC_5(&VAR_1->rbtree, VAR_2, VAR_3);

    if (VAR_5) {
        return VAR_5->value;
    }

    VAR_4 = FUNC_2(VAR_1->pool, sizeof(ngx_http_variable_value_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->len = VAR_2->len;
    VAR_4->data = FUNC_3(VAR_1->pool, VAR_2);
    if (VAR_4->data == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    VAR_5 = FUNC_2(VAR_1->temp_pool,
                      sizeof(ngx_http_geo_variable_value_node_t));
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->sn.node.key = VAR_3;
    VAR_5->sn.str.len = VAR_4->len;
    VAR_5->sn.str.data = VAR_4->data;
    VAR_5->value = VAR_4;
    VAR_5->offset = 0;

    FUNC_4(&VAR_1->rbtree, &VAR_5->sn.node);

    VAR_1->data_size += FUNC_0(sizeof(ngx_http_variable_value_t) + VAR_2->len,
                                sizeof(void *));

    return VAR_4;
}
