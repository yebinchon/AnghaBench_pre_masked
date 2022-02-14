
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ key; struct TYPE_12__* right; struct TYPE_12__* left; int color; } ;
typedef TYPE_4__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int len; int data; } ;
struct TYPE_13__ {scalar_t__ hash; TYPE_3__ key; TYPE_2__* conf; } ;
typedef TYPE_5__ ngx_http_upstream_keepalive_peer_data_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_6__ ngx_http_upstream_keepalive_node_t ;
struct TYPE_10__ {TYPE_1__* index; } ;
struct TYPE_9__ {TYPE_4__* sentinel; TYPE_4__* root; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static ngx_http_upstream_keepalive_node_t *
FUNC_1(ngx_http_upstream_keepalive_peer_data_t *VAR_0)
{
    ngx_int_t VAR_1;
    ngx_rbtree_node_t *VAR_2, *VAR_3;
    ngx_http_upstream_keepalive_node_t *VAR_4;

    VAR_2 = VAR_0->conf->index->root;
    VAR_3 = VAR_0->conf->index->sentinel;

    while (VAR_2 != VAR_3) {

        if (VAR_0->hash < VAR_2->key) {
            VAR_2 = VAR_2->left;
            continue;
        }

        if (VAR_0->hash > VAR_2->key) {
            VAR_2 = VAR_2->right;
            continue;
        }



        VAR_4 = (ngx_http_upstream_keepalive_node_t *) &VAR_2->color;

        VAR_1 = FUNC_0(VAR_0->key.data, VAR_4->data, VAR_0->key.len, VAR_4->len);

        if (VAR_1 == 0) {
            return VAR_4;
        }

        VAR_2 = (VAR_1 < 0) ? VAR_2->left : VAR_2->right;
    }

    return ((void*)0);
}
