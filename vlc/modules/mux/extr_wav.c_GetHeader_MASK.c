
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_8__ {scalar_t__ b_ext; int * waveheader2; int * waveformat; int * waveheader; scalar_t__ i_data; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_9__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;
typedef int WAVEFORMATEXTENSIBLE ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int **,int) ;

__attribute__((used)) static block_t *FUNC_3( sout_mux_t *VAR_0 )
{
    sout_mux_sys_t *VAR_1 = VAR_0->p_sys;
    block_t *VAR_2 =
        FUNC_1( sizeof( WAVEFORMATEXTENSIBLE ) + 7 * 4 );

    FUNC_0( &VAR_1->waveheader[1],
             20 + (VAR_1->b_ext ? 40 : 16) + VAR_1->i_data );
    FUNC_0( &VAR_1->waveheader2[1], VAR_1->i_data );

    FUNC_2( VAR_2->p_buffer, &VAR_1->waveheader, 5 * 4 );
    FUNC_2( VAR_2->p_buffer + 5 * 4, &VAR_1->waveformat,
            sizeof( WAVEFORMATEXTENSIBLE ) );
    FUNC_2( VAR_2->p_buffer + 5 * 4 +
            (VAR_1->b_ext ? sizeof( WAVEFORMATEXTENSIBLE ) : 16),
            &VAR_1->waveheader2, 2 * 4 );
    if( !VAR_1->b_ext ) VAR_2->i_buffer -= 24;
    return VAR_2;
}
