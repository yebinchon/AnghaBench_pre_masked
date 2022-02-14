
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int queue; TYPE_3__* data; } ;
typedef TYPE_1__ ngx_multi_data_t ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ ngx_multi_connection_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int * multi_item; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_connection_t *VAR_2, ngx_http_request_t *VAR_3)
{
    ngx_multi_connection_t *VAR_4;
    ngx_multi_data_t *VAR_5;

    VAR_4 = FUNC_0(VAR_2);

    VAR_5 = FUNC_1(VAR_2->pool, sizeof(ngx_multi_data_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->data = VAR_3;
    FUNC_2(&VAR_4->data, &VAR_5->queue);
    VAR_3->multi_item = &VAR_5->queue;

    return VAR_1;
}
