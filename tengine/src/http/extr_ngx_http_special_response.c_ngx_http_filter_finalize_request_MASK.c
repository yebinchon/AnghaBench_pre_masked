
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t ctx_index; } ;
typedef TYPE_1__ ngx_module_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int filter_finalize; void** ctx; } ;
typedef TYPE_2__ ngx_http_request_t ;



 int VAR_0 ;

 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (void**,int) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_module_t *VAR_3,
    ngx_int_t VAR_4)
{
    void *VAR_5;
    ngx_int_t VAR_6;

    FUNC_0(VAR_2);

    VAR_5 = ((void*)0);

    if (VAR_3) {
        VAR_5 = VAR_2->ctx[VAR_3->ctx_index];
    }


    FUNC_2(VAR_2->ctx, sizeof(void *) * VAR_1);

    if (VAR_3) {
        VAR_2->ctx[VAR_3->ctx_index] = VAR_5;
    }

    VAR_2->filter_finalize = 1;

    VAR_6 = FUNC_1(VAR_2, VAR_4);



    switch (VAR_6) {

    case 128:
    case 129:
        return VAR_0;

    default:
        return VAR_6;
    }
}
