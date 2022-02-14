
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_15__ {scalar_t__ key; struct TYPE_15__* right; struct TYPE_15__* left; int color; } ;
typedef TYPE_5__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_16__ {int queue; TYPE_2__ appkey; } ;
typedef TYPE_6__ ngx_http_tfs_rcs_info_t ;
struct TYPE_17__ {TYPE_3__* sh; } ;
typedef TYPE_7__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_11__ {TYPE_5__* sentinel; TYPE_5__* root; } ;
struct TYPE_13__ {int queue; TYPE_1__ rbtree; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

ngx_http_tfs_rcs_info_t *
FUNC_4(ngx_http_tfs_rc_ctx_t *VAR_0,
    ngx_str_t VAR_1)
{
    ngx_int_t VAR_2;
    ngx_uint_t VAR_3;
    ngx_rbtree_node_t *VAR_4, *VAR_5;
    ngx_http_tfs_rcs_info_t *VAR_6;

    VAR_4 = VAR_0->sh->rbtree.root;
    VAR_5 = VAR_0->sh->rbtree.sentinel;

    VAR_3 = FUNC_1(VAR_1.data, VAR_1.len);

    while (VAR_4 != VAR_5) {

        if (VAR_3 < VAR_4->key) {
            VAR_4 = VAR_4->left;
            continue;
        }

        if (VAR_3 > VAR_4->key) {
            VAR_4 = VAR_4->right;
            continue;
        }



        VAR_6 = (ngx_http_tfs_rcs_info_t *) &VAR_4->color;
        VAR_2 = FUNC_0(VAR_1.data, VAR_6->appkey.data, VAR_1.len,
                          VAR_6->appkey.len);

        if (VAR_2 == 0) {
            FUNC_3(&VAR_6->queue);
            FUNC_2(&VAR_0->sh->queue, &VAR_6->queue);

            return VAR_6;
        }

        VAR_4 = (VAR_2 < 0) ? VAR_4->left : VAR_4->right;
     }

    return ((void*)0);
}
