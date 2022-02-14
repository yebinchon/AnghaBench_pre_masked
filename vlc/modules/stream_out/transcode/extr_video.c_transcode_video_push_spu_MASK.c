
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int subpicture_t ;
typedef int sout_stream_t ;
struct TYPE_3__ {scalar_t__ p_spu; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( sout_stream_t *VAR_0, sout_stream_id_sys_t *VAR_1,
                               subpicture_t *VAR_2 )
{
    if( !VAR_1->p_spu )
        VAR_1->p_spu = FUNC_0( VAR_0, ((void*)0) );
    if( !VAR_1->p_spu )
        FUNC_2( VAR_2 );
    else
        FUNC_1( VAR_1->p_spu, VAR_2 );
}
