
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int * request_bufs; int pool; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;

ngx_int_t
FUNC_1(ngx_http_tfs_t *VAR_2)
{
    ngx_chain_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2->pool);
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_2->request_bufs = VAR_3;

    return VAR_1;
}
