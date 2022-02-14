
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_ssl_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_1(ngx_conf_t *VAR_2, ngx_ssl_t *VAR_3, ngx_str_t *VAR_4,
    ngx_str_t *VAR_5, ngx_uint_t VAR_6)
{
    FUNC_0(VAR_0, VAR_3->log, 0,
                  "\"ssl_stapling\" ignored, not supported");

    return VAR_1;
}
