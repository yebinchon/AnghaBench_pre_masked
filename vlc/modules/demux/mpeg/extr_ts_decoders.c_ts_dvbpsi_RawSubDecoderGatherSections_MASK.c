
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int b_discontinuity; int b_current_valid; int p_cb_data; int (* pf_callback ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_1__ ts_dvbpsi_rawtable_decoder_t ;
struct TYPE_14__ {scalar_t__ p_decoder; } ;
typedef TYPE_2__ dvbpsi_t ;
struct TYPE_15__ {scalar_t__ i_last_number; } ;
typedef TYPE_3__ dvbpsi_psi_section_t ;
struct TYPE_16__ {int b_discontinuity; } ;
typedef TYPE_4__ dvbpsi_demux_t ;
struct TYPE_17__ {scalar_t__ i_last_section_number; int p_sections; } ;
typedef TYPE_5__ dvbpsi_decoder_t ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_6( dvbpsi_t *VAR_0,
                                                   dvbpsi_decoder_t *VAR_1,
                                                   dvbpsi_psi_section_t * VAR_2 )
{
    dvbpsi_demux_t *VAR_3 = (dvbpsi_demux_t *) VAR_0->p_decoder;
    ts_dvbpsi_rawtable_decoder_t *VAR_4 = (ts_dvbpsi_rawtable_decoder_t*)VAR_1;
    if ( !VAR_4 )
    {
        FUNC_1( VAR_2 );
        return;
    }

    if ( VAR_3->b_discontinuity )
    {
        FUNC_4( FUNC_0(VAR_1), 1 );
        VAR_4->b_discontinuity = 0;
        VAR_3->b_discontinuity = 0;
    }
    else if( VAR_1->i_last_section_number != VAR_2->i_last_number )
    {
        FUNC_4( FUNC_0(VAR_1), 1 );
    }


    (void) FUNC_2( FUNC_0(VAR_1), VAR_2 );
    VAR_1->i_last_section_number = VAR_2->i_last_number;


    if ( FUNC_3( FUNC_0(VAR_1) ) )
    {
        VAR_4->b_current_valid = 1;

        VAR_4->pf_callback( VAR_0,
                                 VAR_1->p_sections,
                                 VAR_4->p_cb_data );


        FUNC_4( FUNC_0(VAR_1), 0 );
    }
}
