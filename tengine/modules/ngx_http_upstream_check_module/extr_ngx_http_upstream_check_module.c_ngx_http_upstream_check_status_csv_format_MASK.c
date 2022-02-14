
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_16__ {TYPE_1__ peers; } ;
typedef TYPE_6__ ngx_http_upstream_check_peers_t ;
struct TYPE_17__ {TYPE_5__* conf; TYPE_3__* shm; TYPE_2__* peer_addr; int upstream_name; scalar_t__ delete; } ;
typedef TYPE_7__ ngx_http_upstream_check_peer_t ;
struct TYPE_18__ {scalar_t__ last; scalar_t__ end; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_15__ {int port; TYPE_4__* check_type_conf; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int fall_count; int rise_count; scalar_t__ down; } ;
struct TYPE_12__ {int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,size_t,int ,int *,char*,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(ngx_buf_t *VAR_2,
    ngx_http_upstream_check_peers_t *VAR_3, ngx_uint_t VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_http_upstream_check_peer_t *VAR_6;

    VAR_6 = VAR_3->peers.elts;
    for (VAR_5 = 0; VAR_5 < VAR_3->peers.nelts; VAR_5++) {

        if (VAR_6[VAR_5].delete) {
            continue;
        }

        if (VAR_4 & VAR_0) {

            if (!VAR_6[VAR_5].shm->down) {
                continue;
            }

        } else if (VAR_4 & VAR_1) {

            if (VAR_6[VAR_5].shm->down) {
                continue;
            }
        }

        VAR_2->last = FUNC_0(VAR_2->last, VAR_2->end - VAR_2->last,
                "%ui,%V,%V,%s,%ui,%ui,%V,%ui\n",
                VAR_5,
                VAR_6[VAR_5].upstream_name,
                &VAR_6[VAR_5].peer_addr->name,
                VAR_6[VAR_5].shm->down ? "down" : "up",
                VAR_6[VAR_5].shm->rise_count,
                VAR_6[VAR_5].shm->fall_count,
                &VAR_6[VAR_5].conf->check_type_conf->name,
                VAR_6[VAR_5].conf->port);
    }
}
