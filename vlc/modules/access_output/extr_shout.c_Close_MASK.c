
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_6__ {scalar_t__ p_shout; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    sout_access_out_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_shout )
    {
        FUNC_2( VAR_2->p_shout );
        FUNC_3( VAR_2->p_shout );
        FUNC_4();
    }
    FUNC_0( VAR_2 );
    FUNC_1( VAR_1, "shout access output closed" );
}
