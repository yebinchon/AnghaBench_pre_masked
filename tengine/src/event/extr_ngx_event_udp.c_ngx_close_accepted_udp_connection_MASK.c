
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_4__ {scalar_t__ pool; scalar_t__ fd; } ;
typedef TYPE_1__ ngx_connection_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(ngx_connection_t *VAR_1)
{
    FUNC_2(VAR_1);

    VAR_1->fd = (ngx_socket_t) -1;

    if (VAR_1->pool) {
        FUNC_1(VAR_1->pool);
    }




}
