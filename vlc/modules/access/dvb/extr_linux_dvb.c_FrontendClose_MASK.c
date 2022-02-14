
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_frontend; int i_frontend_handle; } ;
typedef TYPE_1__ dvb_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3( vlc_object_t *VAR_0, dvb_sys_t *VAR_1 )
{
    FUNC_0(VAR_0);
    if( VAR_1->p_frontend )
    {
        FUNC_2( VAR_1->i_frontend_handle );
        FUNC_1( VAR_1->p_frontend );

        VAR_1->p_frontend = ((void*)0);
    }
}
