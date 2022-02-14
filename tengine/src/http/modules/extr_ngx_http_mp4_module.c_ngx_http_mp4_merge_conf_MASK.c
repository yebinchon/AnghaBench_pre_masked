
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_buffer_size; int buffer_size; } ;
typedef TYPE_1__ ngx_http_mp4_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_mp4_conf_t *VAR_4 = VAR_2;
    ngx_http_mp4_conf_t *VAR_5 = VAR_3;

    FUNC_0(VAR_5->buffer_size, VAR_4->buffer_size, 512 * 1024);
    FUNC_0(VAR_5->max_buffer_size, VAR_4->max_buffer_size,
                              10 * 1024 * 1024);

    return VAR_0;
}
