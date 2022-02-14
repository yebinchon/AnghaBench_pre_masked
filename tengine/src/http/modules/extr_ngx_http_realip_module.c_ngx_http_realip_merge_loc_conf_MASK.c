
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ header; int hash; int recursive; int type; int * from; } ;
typedef TYPE_2__ ngx_http_realip_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_http_realip_loc_conf_t *VAR_5 = VAR_3;
    ngx_http_realip_loc_conf_t *VAR_6 = VAR_4;

    if (VAR_6->from == ((void*)0)) {
        VAR_6->from = VAR_5->from;
    }

    FUNC_0(VAR_6->type, VAR_5->type, VAR_1);
    FUNC_1(VAR_6->recursive, VAR_5->recursive, 0);

    if (VAR_6->header.len == 0) {
        VAR_6->hash = VAR_5->hash;
        VAR_6->header = VAR_5->header;
    }

    return VAR_0;
}
