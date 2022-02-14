
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_12__ {TYPE_2__* shm; TYPE_1__* upstream_name; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_10__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_13__ {TYPE_3__ peers; } ;
struct TYPE_9__ {int down; } ;
struct TYPE_8__ {int data; int len; } ;


 TYPE_7__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

ngx_uint_t
FUNC_1(ngx_str_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_http_upstream_check_peer_t *VAR_3;

    if (VAR_0 == ((void*)0)) {
        return 0;
    }

    VAR_3 = VAR_0->peers.elts;
    for (VAR_2 = 0; VAR_2 < VAR_0->peers.nelts; VAR_2++) {
        if (VAR_3[VAR_2].upstream_name->len == VAR_1->len
            && FUNC_0(VAR_3[VAR_2].upstream_name->data, VAR_1->data, VAR_1->len) == 0)
        {
            if (!VAR_3[VAR_2].shm->down) {
                return 0;
            }
        }
    }

    return 1;
}
