
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {struct TYPE_9__* p_next; scalar_t__ p_data; scalar_t__ b_syntax_indicator; scalar_t__ p_payload_end; } ;
typedef TYPE_1__ dvbpsi_psi_section_t ;
struct TYPE_10__ {int i_buffer; scalar_t__* p_buffer; scalar_t__ i_length; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_2__ block_t ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__**,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int) ;

block_t *FUNC_4( dvbpsi_psi_section_t* VAR_0 )
{
    block_t *VAR_1, *VAR_2 = ((void*)0);

    while( VAR_0 )
    {
        int VAR_3 = (uint32_t)(VAR_0->p_payload_end - VAR_0->p_data) +
                  (VAR_0->b_syntax_indicator ? 4 : 0);

        VAR_1 = FUNC_0( VAR_3 + 1 );
        if( !VAR_1 )
            goto error;
        VAR_1->i_pts = 0;
        VAR_1->i_dts = 0;
        VAR_1->i_length = 0;
        VAR_1->i_buffer = VAR_3 + 1;

        VAR_1->p_buffer[0] = 0;
        FUNC_3( VAR_1->p_buffer + 1,
                VAR_0->p_data,
                VAR_3 );

        FUNC_1( &VAR_2, VAR_1 );

        VAR_0 = VAR_0->p_next;
    }

    return( VAR_2 );

error:
    if( VAR_2 )
        FUNC_2( VAR_2 );
    return ((void*)0);
}
