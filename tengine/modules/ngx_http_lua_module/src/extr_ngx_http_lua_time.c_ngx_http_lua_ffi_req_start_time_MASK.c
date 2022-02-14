
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double start_sec; double start_msec; } ;
typedef TYPE_1__ ngx_http_request_t ;



double
FUNC_0(ngx_http_request_t *VAR_0)
{
    return VAR_0->start_sec + VAR_0->start_msec / 1000.0;
}
