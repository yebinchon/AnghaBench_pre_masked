
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * yajl_gen ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
struct TYPE_4__ {int * log; int * pool; int * gen; } ;
typedef TYPE_1__ ngx_http_tfs_json_gen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int) ;

ngx_http_tfs_json_gen_t *
FUNC_4(ngx_log_t *VAR_3, ngx_pool_t *VAR_4)
{
    yajl_gen VAR_5;
    ngx_http_tfs_json_gen_t *VAR_6;

    VAR_5 = FUNC_2(((void*)0));
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3, VAR_1, "alloc yajl_gen failed");
        return ((void*)0);
    }

    VAR_6 = FUNC_1(VAR_4, sizeof(ngx_http_tfs_json_gen_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_3(VAR_5, VAR_2, 1);

    VAR_6->gen = VAR_5;
    VAR_6->pool = VAR_4;
    VAR_6->log = VAR_3;

    return VAR_6;
}
