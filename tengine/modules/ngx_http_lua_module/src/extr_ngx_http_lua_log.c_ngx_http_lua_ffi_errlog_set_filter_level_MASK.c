
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int filter_level; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;
struct TYPE_4__ {TYPE_1__* intercept_error_log_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int * FUNC_0 (int *,size_t,char*,...) ;

int
FUNC_1(int VAR_5, u_char *VAR_6, size_t *VAR_7)
{
    *VAR_7 = FUNC_0(VAR_6, *VAR_7,
                           "missing the capture error log patch for nginx")
              - VAR_6;
    return VAR_0;

}
