
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priority; } ;
typedef TYPE_1__ ngx_resolver_srv_t ;
typedef scalar_t__ ngx_int_t ;



__attribute__((used)) static ngx_int_t
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    ngx_int_t VAR_2, VAR_3;
    ngx_resolver_srv_t *VAR_4, *VAR_5;

    VAR_4 = (ngx_resolver_srv_t *) VAR_0;
    VAR_5 = (ngx_resolver_srv_t *) VAR_1;

    VAR_2 = VAR_4->priority;
    VAR_3 = VAR_5->priority;

    return VAR_2 - VAR_3;
}
