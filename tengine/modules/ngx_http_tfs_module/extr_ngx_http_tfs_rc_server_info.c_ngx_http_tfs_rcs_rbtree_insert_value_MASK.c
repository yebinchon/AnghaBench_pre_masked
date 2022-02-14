
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ key; struct TYPE_9__* right; struct TYPE_9__* left; struct TYPE_9__* parent; int color; } ;
typedef TYPE_2__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_10__ {TYPE_1__ appkey; } ;
typedef TYPE_3__ ngx_http_tfs_rcs_info_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_int_t VAR_3;
    ngx_rbtree_node_t **VAR_4;
    ngx_http_tfs_rcs_info_t *VAR_5, *VAR_6;

    for ( ;; ) {

        if (VAR_1->key < VAR_0->key) {

            VAR_4 = &VAR_0->left;

        } else if (VAR_1->key > VAR_0->key) {

            VAR_4 = &VAR_0->right;

        } else {

            VAR_5 = (ngx_http_tfs_rcs_info_t *) &VAR_1->color;
            VAR_6 = (ngx_http_tfs_rcs_info_t *) &VAR_0->color;

            VAR_3 = FUNC_0(VAR_5->appkey.data, VAR_6->appkey.data,
                              VAR_5->appkey.len, VAR_5->appkey.len);
            if (VAR_3 < 0) {
                VAR_4 = &VAR_0->left;

            } else if (VAR_3 > 0) {
                VAR_4 = &VAR_0->right;

            } else {
                return;
            }
        }

        if (*VAR_4 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_4;
    }

    *VAR_4 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_1(VAR_1);
}
