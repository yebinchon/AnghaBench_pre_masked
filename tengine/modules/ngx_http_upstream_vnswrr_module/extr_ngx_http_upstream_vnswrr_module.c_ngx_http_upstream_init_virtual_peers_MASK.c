
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {size_t vnumber; TYPE_2__* vpeers; } ;
typedef TYPE_1__ ngx_http_upstream_vnswrr_srv_conf_t ;
struct TYPE_9__ {scalar_t__ rindex; int * vpeer; } ;
typedef TYPE_2__ ngx_http_upstream_rr_vpeers_t ;
struct TYPE_10__ {int name; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peers_t ;
typedef int ngx_http_upstream_rr_peer_t ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int **) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_http_upstream_rr_peers_t *VAR_3,
                                     ngx_http_upstream_vnswrr_srv_conf_t *VAR_4,
                                     ngx_uint_t VAR_5, ngx_uint_t VAR_6)
{
    ngx_uint_t VAR_7;
    ngx_int_t VAR_8;
    ngx_http_upstream_rr_peer_t *VAR_9;
    ngx_http_upstream_rr_vpeers_t *VAR_10;

    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0)) {
        return;
    }

    VAR_10 = VAR_4->vpeers;

    for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
        VAR_8 = FUNC_0(VAR_3, &VAR_9);
        if (VAR_8 == VAR_0) {
            FUNC_1(VAR_1, VAR_2->log, 0,
                          "get rr peer is null in upstream \"%V\" ",
                          VAR_3->name);
            if (VAR_7 != 0) {
                VAR_7--;
            }

            continue;
        }

        VAR_10[VAR_7].vpeer = VAR_9;
        VAR_10[VAR_7].rindex = VAR_8;
    }

    VAR_4->vnumber = VAR_7;

    return;
}
