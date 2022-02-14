
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_8__ {int fid; int i_seq; scalar_t__ b_asf_http; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int bo_t ;
struct TYPE_9__ {int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (int *,int,int ,int,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static block_t *FUNC_6( sout_mux_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;

    block_t *VAR_3 = ((void*)0);
    bo_t VAR_4;

    if( VAR_2->b_asf_http )
    {
        VAR_3 = FUNC_1( 12 );
        FUNC_5( &VAR_4, VAR_3->p_buffer, 12 );
        FUNC_0( &VAR_4, 0x4524, 0, 0x00, VAR_2->i_seq++ );
    }
    else
    {

        VAR_3 = FUNC_1( 56 );
        FUNC_5( &VAR_4, VAR_3->p_buffer, 56 );
        FUNC_2 ( &VAR_4, &VAR_0 );
        FUNC_4( &VAR_4, 56 );
        FUNC_2 ( &VAR_4, &VAR_2->fid );
        FUNC_4( &VAR_4, 10000000 );
        FUNC_3( &VAR_4, 5 );
        FUNC_3( &VAR_4, 0 );
    }

    return VAR_3;
}
