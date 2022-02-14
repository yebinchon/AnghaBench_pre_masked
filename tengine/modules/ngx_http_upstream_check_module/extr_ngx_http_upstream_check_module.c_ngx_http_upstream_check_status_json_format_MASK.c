
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
struct TYPE_18__ {void* last; void* end; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_15__ {int port; TYPE_4__* check_type_conf; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int fall_count; int rise_count; scalar_t__ down; } ;
struct TYPE_12__ {int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,void*,char*,...) ;

__attribute__((used)) static void
FUNC_1(ngx_buf_t *VAR_3,
    ngx_http_upstream_check_peers_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_uint_t VAR_6, VAR_7, VAR_8;
    ngx_http_upstream_check_peer_t *VAR_9;

    VAR_9 = VAR_4->peers.elts;

    VAR_6 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4->peers.nelts; VAR_7++) {

        if (VAR_9[VAR_7].delete) {
            continue;
        }

        if (VAR_5 & VAR_0) {

            if (!VAR_9[VAR_7].shm->down) {
                continue;
            }

        } else if (VAR_5 & VAR_1) {

            if (VAR_9[VAR_7].shm->down) {
                continue;
            }
        }

        VAR_6++;
    }

    VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
            "{\"servers\": {\n"
            "  \"total\": %ui,\n"
            "  \"generation\": %ui,\n"
            "  \"server\": [\n",
            VAR_6,
            VAR_2);

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4->peers.nelts; VAR_7++) {

        if (VAR_9[VAR_7].delete) {
            continue;
        }

        if (VAR_5 & VAR_0) {

            if (!VAR_9[VAR_7].shm->down) {
                continue;
            }

        } else if (VAR_5 & VAR_1) {

            if (VAR_9[VAR_7].shm->down) {
                continue;
            }
        }

        VAR_8++;

        VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
                "    {\"index\": %ui, "
                "\"upstream\": \"%V\", "
                "\"name\": \"%V\", "
                "\"status\": \"%s\", "
                "\"rise\": %ui, "
                "\"fall\": %ui, "
                "\"type\": \"%V\", "
                "\"port\": %ui}"
                "%s\n",
                VAR_7,
                VAR_9[VAR_7].upstream_name,
                &VAR_9[VAR_7].peer_addr->name,
                VAR_9[VAR_7].shm->down ? "down" : "up",
                VAR_9[VAR_7].shm->rise_count,
                VAR_9[VAR_7].shm->fall_count,
                &VAR_9[VAR_7].conf->check_type_conf->name,
                VAR_9[VAR_7].conf->port,
                (VAR_8 == VAR_6) ? "" : ",");
    }

    VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
            "  ]\n");

    VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
            "}}\n");
}
