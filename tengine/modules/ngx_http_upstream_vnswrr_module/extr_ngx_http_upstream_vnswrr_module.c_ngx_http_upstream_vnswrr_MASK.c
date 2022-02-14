
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ init_upstream; } ;
struct TYPE_5__ {int flags; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    ngx_http_upstream_srv_conf_t *VAR_14;

    VAR_14 = FUNC_1(VAR_11, VAR_10);

    if (VAR_14->peer.init_upstream) {
        FUNC_0(VAR_8, VAR_11, 0,
                           "load balancing method redefined");
    }

    VAR_14->peer.init_upstream = VAR_9;

    VAR_14->flags = VAR_2
                  |VAR_7
                  |VAR_1
                  |VAR_6
                  |VAR_4



                  |VAR_3;

    return VAR_0;
}
