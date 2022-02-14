
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int rc_servers_count; scalar_t__ rcserver_index; int rc_servers; } ;
typedef TYPE_2__ ngx_http_tfs_upstream_t ;
struct TYPE_9__ {TYPE_1__* loc_conf; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_10__ {scalar_t__ rc_servers_count; int rc_servers; } ;
typedef TYPE_4__ ngx_http_tfs_rcs_info_t ;
struct TYPE_7__ {TYPE_2__* upstream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(ngx_http_tfs_t *VAR_1, const ngx_http_tfs_rcs_info_t *VAR_2)
{
    ngx_http_tfs_upstream_t *VAR_3;

    VAR_3 = VAR_1->loc_conf->upstream;
    if (VAR_2->rc_servers_count > VAR_0) {
        VAR_3->rc_servers_count = VAR_0;

    } else {
        VAR_3->rc_servers_count = VAR_2->rc_servers_count;
    }

    FUNC_0(VAR_3->rc_servers, VAR_2->rc_servers, VAR_3->rc_servers_count * sizeof(uint64_t));
    VAR_3->rcserver_index = 0;
}
