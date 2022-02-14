
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {TYPE_1__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_5__ {int count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1)
{
    VAR_1->main->count++;

    FUNC_0(VAR_1);

    return VAR_0;
}
