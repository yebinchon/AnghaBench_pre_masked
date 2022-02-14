
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ satisfy; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7;

    if (VAR_6) {
        VAR_7 = FUNC_0(VAR_5, VAR_4);

        if (VAR_7->satisfy == VAR_1) {
            FUNC_1(VAR_2, VAR_5->connection->log, 0,
                          "access forbidden by rule");
        }

        return VAR_0;
    }

    return VAR_3;
}
