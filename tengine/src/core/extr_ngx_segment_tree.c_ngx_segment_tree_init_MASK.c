
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_4__ {int num; int extreme; TYPE_3__* segments; int del; int query; int insert; int build; int cmp; int * pool; } ;
typedef TYPE_1__ ngx_segment_tree_t ;
typedef int ngx_segment_node_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

ngx_int_t
FUNC_1(ngx_segment_tree_t *VAR_8, ngx_uint_t VAR_9,
    ngx_pool_t *VAR_10)
{
    VAR_8->segments = FUNC_0(VAR_10,
                                ((VAR_9 + 1) << 2) * sizeof(ngx_segment_node_t));
    if (VAR_8->segments == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->extreme = VAR_1;
    VAR_8->pool = VAR_10;
    VAR_8->num = VAR_9;

    VAR_8->cmp = VAR_6;
    VAR_8->build = VAR_3;
    VAR_8->insert = VAR_5;
    VAR_8->query = VAR_7;
    VAR_8->del = VAR_4;

    VAR_8->segments[0].key = VAR_8->extreme;
    return VAR_2;
}
