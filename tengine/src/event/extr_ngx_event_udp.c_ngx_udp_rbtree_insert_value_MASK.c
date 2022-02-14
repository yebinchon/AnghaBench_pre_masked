
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_udp_connection_t ;
struct TYPE_11__ {scalar_t__ key; struct TYPE_11__* right; struct TYPE_11__* left; struct TYPE_11__* parent; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {int local_socklen; int local_sockaddr; TYPE_1__* listening; int socklen; int sockaddr; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_9__ {scalar_t__ wildcard; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_int_t VAR_3;
    ngx_connection_t *VAR_4, *VAR_5;
    ngx_rbtree_node_t **VAR_6;
    ngx_udp_connection_t *VAR_7, *VAR_8;

    for ( ;; ) {

        if (VAR_1->key < VAR_0->key) {

            VAR_6 = &VAR_0->left;

        } else if (VAR_1->key > VAR_0->key) {

            VAR_6 = &VAR_0->right;

        } else {

            VAR_7 = (ngx_udp_connection_t *) VAR_1;
            VAR_4 = VAR_7->connection;

            VAR_8 = (ngx_udp_connection_t *) VAR_0;
            VAR_5 = VAR_8->connection;

            VAR_3 = FUNC_0(VAR_4->sockaddr, VAR_4->socklen,
                                  VAR_5->sockaddr, VAR_5->socklen, 1);

            if (VAR_3 == 0 && VAR_4->listening->wildcard) {
                VAR_3 = FUNC_0(VAR_4->local_sockaddr, VAR_4->local_socklen,
                                      VAR_5->local_sockaddr, VAR_5->local_socklen, 1);
            }

            VAR_6 = (VAR_3 < 0) ? &VAR_0->left : &VAR_0->right;
        }

        if (*VAR_6 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_6;
    }

    *VAR_6 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_1(VAR_1);
}
