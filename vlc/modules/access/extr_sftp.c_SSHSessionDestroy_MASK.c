
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int i_socket; int * ssh_session; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( stream_t *VAR_0 )
{
    access_sys_t* VAR_1 = VAR_0->p_sys;

    if( VAR_1->ssh_session )
    {
        FUNC_0( VAR_1->ssh_session );
        VAR_1->ssh_session = ((void*)0);
    }
    if( VAR_1->i_socket >= 0 )
    {
        FUNC_1( VAR_1->i_socket );
        VAR_1->i_socket = -1;
    }
}
