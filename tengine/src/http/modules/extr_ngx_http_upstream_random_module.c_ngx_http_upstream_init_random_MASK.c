
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int init; } ;
struct TYPE_10__ {scalar_t__ shm_zone; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
struct TYPE_11__ {int pool; int log; } ;
typedef TYPE_3__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_4, ngx_http_upstream_srv_conf_t *VAR_5)
{
    FUNC_2(VAR_1, VAR_4->log, 0, "init random");

    if (FUNC_0(VAR_4, VAR_5) != VAR_2) {
        return VAR_0;
    }

    VAR_5->peer.init = VAR_3;







    return FUNC_1(VAR_4->pool, VAR_5);
}
