
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int b_keep_alive; int keep_alive; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;
    if( !VAR_1->b_keep_alive )
        return;

    FUNC_0( VAR_1->keep_alive );
    FUNC_1( VAR_1->keep_alive, ((void*)0) );
    VAR_1->b_keep_alive = 0;
}
