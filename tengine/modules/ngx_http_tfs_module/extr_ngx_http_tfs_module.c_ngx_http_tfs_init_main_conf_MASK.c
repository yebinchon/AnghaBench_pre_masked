
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tfs_connect_timeout; int tfs_send_timeout; int tfs_read_timeout; int tair_timeout; scalar_t__ send_lowat; scalar_t__ buffer_size; scalar_t__ body_buffer_size; } ;
typedef TYPE_1__ ngx_http_tfs_main_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_5, void *VAR_6)
{
    ngx_http_tfs_main_conf_t *VAR_7 = VAR_6;

    if (VAR_7->tfs_connect_timeout == VAR_1) {
        VAR_7->tfs_connect_timeout = 3000;
    }

    if (VAR_7->tfs_send_timeout == VAR_1) {
        VAR_7->tfs_send_timeout = 3000;
    }

    if (VAR_7->tfs_read_timeout == VAR_1) {
        VAR_7->tfs_read_timeout = 3000;
    }

    if (VAR_7->tair_timeout == VAR_1) {
        VAR_7->tair_timeout = 3000;
    }

    if (VAR_7->send_lowat == VAR_2) {
        VAR_7->send_lowat = 0;
    }

    if (VAR_7->buffer_size == VAR_2) {
        VAR_7->buffer_size = (size_t) VAR_4 / 2;
    }

    if (VAR_7->body_buffer_size == VAR_2) {
        VAR_7->body_buffer_size = VAR_3;
    }

    return VAR_0;
}
