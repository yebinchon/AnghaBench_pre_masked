
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; int * trailers; int * headers; int expires_value; int expires_time; } ;
typedef TYPE_1__ ngx_http_headers_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_headers_conf_t *VAR_6 = VAR_4;
    ngx_http_headers_conf_t *VAR_7 = VAR_5;

    if (VAR_7->expires == VAR_2) {
        VAR_7->expires = VAR_6->expires;
        VAR_7->expires_time = VAR_6->expires_time;
        VAR_7->expires_value = VAR_6->expires_value;

        if (VAR_7->expires == VAR_2) {
            VAR_7->expires = VAR_1;
        }
    }

    if (VAR_7->headers == ((void*)0)) {
        VAR_7->headers = VAR_6->headers;
    }

    if (VAR_7->trailers == ((void*)0)) {
        VAR_7->trailers = VAR_6->trailers;
    }

    return VAR_0;
}
