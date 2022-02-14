
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ ngx_ssl_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

ngx_int_t
FUNC_2(ngx_conf_t *VAR_4, ngx_ssl_t *VAR_5, ngx_uint_t VAR_6)
{
    if (!VAR_6) {
        return VAR_0;
    }

    FUNC_1(VAR_5->ctx,
                                   VAR_1
                                   |VAR_2);

    FUNC_0(VAR_5->ctx, VAR_3);

    return VAR_0;
}
