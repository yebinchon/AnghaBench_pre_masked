
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int init; } ;
struct TYPE_12__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
struct TYPE_13__ {scalar_t__ (* original_init_upstream ) (TYPE_4__*,TYPE_2__*) ;int original_init_peer; } ;
typedef TYPE_3__ ngx_http_multi_upstream_srv_conf_t ;
struct TYPE_14__ {int log; } ;
typedef TYPE_4__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_5,
    ngx_http_upstream_srv_conf_t *VAR_6)
{
    ngx_http_multi_upstream_srv_conf_t *VAR_7;

    FUNC_1(VAR_1, VAR_5->log, 0,
                   "multi: init multi upstream");

    VAR_7 = FUNC_0(VAR_6,
                                          VAR_4);

    if (VAR_7->original_init_upstream(VAR_5, VAR_6) != VAR_2) {
        return VAR_0;
    }

    VAR_7->original_init_peer = VAR_6->peer.init;

    VAR_6->peer.init = VAR_3;

    return VAR_2;
}
