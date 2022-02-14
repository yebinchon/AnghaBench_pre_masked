
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
    ngx_uint_t VAR_6, VAR_7;
    ngx_http_upstream_check_peer_t *VAR_8;

    VAR_8 = VAR_4->peers.elts;

    VAR_7 = 0;


    for (VAR_6 = 0; VAR_6 < VAR_4->peers.nelts; VAR_6++) {

        if (VAR_8[VAR_6].delete) {
            continue;
        }

        if (VAR_5 & VAR_0) {

            if (!VAR_8[VAR_6].shm->down) {
                continue;
            }

        } else if (VAR_5 & VAR_1) {

            if (VAR_8[VAR_6].shm->down) {
                continue;
            }
        }

        VAR_7++;
    }

    VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
            "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\n"
            "\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n"
            "<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
            "<head>\n"
            "  <title>Nginx http upstream check status</title>\n"
            "</head>\n"
            "<body>\n"
            "<h1>Nginx http upstream check status</h1>\n"
            "<h2>Check upstream server number: %ui, generation: %ui</h2>\n"
            "<table style=\"background-color:white\" cellspacing=\"0\" "
            "       cellpadding=\"3\" border=\"1\">\n"
            "  <tr bgcolor=\"#C0C0C0\">\n"
            "    <th>Index</th>\n"
            "    <th>Upstream</th>\n"
            "    <th>Name</th>\n"
            "    <th>Status</th>\n"
            "    <th>Rise counts</th>\n"
            "    <th>Fall counts</th>\n"
            "    <th>Check type</th>\n"
            "    <th>Check port</th>\n"
            "  </tr>\n",
            VAR_7, VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_4->peers.nelts; VAR_6++) {

        if (VAR_8[VAR_6].delete) {
            continue;
        }

        if (VAR_5 & VAR_0) {

            if (!VAR_8[VAR_6].shm->down) {
                continue;
            }

        } else if (VAR_5 & VAR_1) {

            if (VAR_8[VAR_6].shm->down) {
                continue;
            }
        }

        VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
                "  <tr%s>\n"
                "    <td>%ui</td>\n"
                "    <td>%V</td>\n"
                "    <td>%V</td>\n"
                "    <td>%s</td>\n"
                "    <td>%ui</td>\n"
                "    <td>%ui</td>\n"
                "    <td>%V</td>\n"
                "    <td>%ui</td>\n"
                "  </tr>\n",
                VAR_8[VAR_6].shm->down ? " bgcolor=\"#FF0000\"" : "",
                VAR_6,
                VAR_8[VAR_6].upstream_name,
                &VAR_8[VAR_6].peer_addr->name,
                VAR_8[VAR_6].shm->down ? "down" : "up",
                VAR_8[VAR_6].shm->rise_count,
                VAR_8[VAR_6].shm->fall_count,
                &VAR_8[VAR_6].conf->check_type_conf->name,
                VAR_8[VAR_6].conf->port);
    }

    VAR_3->last = FUNC_0(VAR_3->last, VAR_3->end - VAR_3->last,
            "</table>\n"
            "</body>\n"
            "</html>\n");
}
