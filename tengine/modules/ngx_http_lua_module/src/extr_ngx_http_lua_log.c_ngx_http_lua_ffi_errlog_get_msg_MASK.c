
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;
struct TYPE_5__ {TYPE_1__* intercept_error_log_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,void**,int*,double*) ;
 int * FUNC_1 (int *,size_t,char*) ;

int
FUNC_2(char **VAR_3, int *VAR_4, u_char *VAR_5,
    size_t *VAR_6, double *VAR_7)
{
    *VAR_6 = FUNC_1(VAR_5, *VAR_6,
                           "missing the capture error log patch for nginx")
              - VAR_5;
    return VAR_1;

}
