
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recv_buffer_size; } ;
typedef TYPE_1__ ngx_http_v2_main_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_1, void *VAR_2)
{
    ngx_http_v2_main_conf_t *VAR_3 = VAR_2;

    FUNC_0(VAR_3->recv_buffer_size, 256 * 1024);

    return VAR_0;
}
