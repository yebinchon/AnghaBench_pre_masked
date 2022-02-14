
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ key; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_msec_int_t ;
struct TYPE_8__ {TYPE_1__* sentinel; TYPE_1__* root; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;

ngx_msec_t
FUNC_1(void)
{
    ngx_msec_int_t VAR_4;
    ngx_rbtree_node_t *VAR_5, *VAR_6, *VAR_7;

    if (VAR_2.root == &VAR_3) {
        return VAR_0;
    }

    VAR_6 = VAR_2.root;
    VAR_7 = VAR_2.sentinel;

    VAR_5 = FUNC_0(VAR_6, VAR_7);

    VAR_4 = (ngx_msec_int_t) (VAR_5->key - VAR_1);

    return (ngx_msec_t) (VAR_4 > 0 ? VAR_4 : 0);
}
