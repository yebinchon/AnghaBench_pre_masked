
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_8__ {TYPE_1__ peers; } ;
typedef TYPE_2__ ngx_http_upstream_check_peers_t ;
struct TYPE_9__ {scalar_t__ delete; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
typedef int ngx_flag_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2()
{
    ngx_uint_t VAR_4;
    ngx_http_upstream_check_peer_t *VAR_5;
    ngx_http_upstream_check_peers_t *VAR_6;

    static ngx_flag_t VAR_7 = 0;

    if (VAR_7 || VAR_1 == ((void*)0)) {
        return;
    }

    FUNC_1(VAR_0, VAR_2->log, 0,
                  "clear all the events on %P ", VAR_3);

    VAR_7 = 1;

    VAR_6 = VAR_1;

    VAR_5 = VAR_6->peers.elts;
    for (VAR_4 = 0; VAR_4 < VAR_6->peers.nelts; VAR_4++) {
        if (VAR_5[VAR_4].delete) {
            continue;
        }

        FUNC_0(&VAR_5[VAR_4]);
    }
}
