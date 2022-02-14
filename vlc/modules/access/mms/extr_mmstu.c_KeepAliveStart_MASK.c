
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int b_keep_alive; int keep_alive; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1( stream_t *VAR_2 )
{
    access_sys_t *VAR_3 = VAR_2->p_sys;
    if( VAR_3->b_keep_alive )
        return;

    VAR_3->b_keep_alive = !FUNC_0( &VAR_3->keep_alive,
                                      VAR_0, VAR_2,
                                      VAR_1 );
}
