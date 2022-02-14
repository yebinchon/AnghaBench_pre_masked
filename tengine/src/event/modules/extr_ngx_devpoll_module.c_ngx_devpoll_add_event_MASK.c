
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int active; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_event_t *VAR_4, ngx_int_t VAR_5, ngx_uint_t VAR_6)
{
    VAR_4->active = 1;

    return FUNC_0(VAR_4, VAR_5, 0);
}
