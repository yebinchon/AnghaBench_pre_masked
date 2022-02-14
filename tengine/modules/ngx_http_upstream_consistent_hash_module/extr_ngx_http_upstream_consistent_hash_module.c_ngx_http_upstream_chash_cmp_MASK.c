
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_2__ {scalar_t__ hash; } ;
typedef TYPE_1__ ngx_http_upstream_chash_server_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_0(const void *VAR_3, const void *VAR_4)
{
    ngx_http_upstream_chash_server_t *VAR_5, *VAR_6;

    VAR_5 = (ngx_http_upstream_chash_server_t *)VAR_3;
    VAR_6 = (ngx_http_upstream_chash_server_t *) VAR_4;

    if (VAR_5->hash > VAR_6->hash) {
        return VAR_1;

    } else if (VAR_5->hash == VAR_6->hash) {
        return VAR_0;

    } else {
        return VAR_2;
    }
}
