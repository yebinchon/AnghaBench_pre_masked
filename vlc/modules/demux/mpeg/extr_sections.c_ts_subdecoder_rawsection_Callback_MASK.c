
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_table_id; scalar_t__ i_extension_id; int p_callback_data; int (* pf_callback ) (int *,size_t,size_t,size_t,size_t,int ) ;} ;
typedef TYPE_1__ ts_sections_processor_t ;
struct TYPE_7__ {scalar_t__ p_sys; } ;
typedef TYPE_2__ dvbpsi_t ;
struct TYPE_8__ {size_t p_payload_end; size_t p_data; scalar_t__ i_table_id; scalar_t__ i_extension; size_t p_payload_start; scalar_t__ b_syntax_indicator; struct TYPE_8__* p_next; } ;
typedef TYPE_3__ dvbpsi_psi_section_t ;
typedef int demux_t ;


 scalar_t__ FUNC_0 (int (*) (int *,size_t,size_t,size_t,size_t,int )) ;
 int FUNC_1 (int *,size_t,size_t,size_t,size_t,int ) ;

__attribute__((used)) static void FUNC_2( dvbpsi_t *VAR_0,
                                               const dvbpsi_psi_section_t* VAR_1,
                                               void* VAR_2 )
{
    ts_sections_processor_t *VAR_3 = (ts_sections_processor_t *) VAR_2;
    if( FUNC_0(VAR_3->pf_callback) )
    {
        for( const dvbpsi_psi_section_t *VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->p_next )
        {
            size_t VAR_5 = VAR_4->p_payload_end - VAR_4->p_data;
            if ( VAR_4->b_syntax_indicator )
                VAR_5 += 4;

            if( VAR_3->i_table_id && VAR_1->i_table_id != VAR_3->i_table_id )
                continue;

            if( VAR_3->i_extension_id && VAR_1->i_extension != VAR_3->i_extension_id )
                continue;

            VAR_3->pf_callback( (demux_t *) VAR_0->p_sys,
                                 VAR_4->p_data, VAR_5,
                                 VAR_4->p_payload_start,
                                 VAR_4->p_payload_end - VAR_4->p_payload_start,
                                 VAR_3->p_callback_data );
        }
    }
}
