
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ padding; int length; } ;
struct TYPE_6__ {TYPE_1__ state; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;


 int * FUNC_0 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_http_v2_connection_t *VAR_0, u_char *VAR_1,
    u_char *VAR_2)
{
    VAR_0->state.length += VAR_0->state.padding;
    VAR_0->state.padding = 0;

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
