
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ deleted; } ;
typedef TYPE_1__ ngx_http_dyups_srv_conf_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_str_t *VAR_4, ngx_str_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_dyups_srv_conf_t *VAR_7;

    VAR_7 = FUNC_0(VAR_4, &VAR_6);

    if (VAR_7 == ((void*)0) || VAR_7->deleted) {

        FUNC_2(VAR_2, VAR_3->log, 0,
                      "[dyups] not find upstream %V %p", VAR_4, VAR_7);

        FUNC_3(VAR_5, "not found uptream");
        return VAR_0;
    }

    FUNC_1(VAR_7);

    FUNC_3(VAR_5, "success");

    return VAR_1;
}
