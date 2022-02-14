
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {void* p_cb_data; int pf_callback; } ;
typedef TYPE_1__ ts_dvbpsi_rawtable_decoder_t ;
typedef int ts_dvbpsi_rawsections_callback_t ;
struct TYPE_6__ {scalar_t__ p_decoder; } ;
typedef TYPE_2__ dvbpsi_t ;
typedef int dvbpsi_demux_t ;
typedef int dvbpsi_demux_subdec_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int,int) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_6( dvbpsi_t* VAR_2,
                                    uint8_t VAR_3, uint16_t VAR_4,
                                    ts_dvbpsi_rawsections_callback_t VAR_5,
                                     void *VAR_6 )
{
    dvbpsi_demux_t *VAR_7 = (dvbpsi_demux_t*)VAR_2->p_decoder;
    if ( FUNC_5(VAR_7, VAR_3, VAR_4) )
        return 0;

    ts_dvbpsi_rawtable_decoder_t *VAR_8;
    VAR_8 = (ts_dvbpsi_rawtable_decoder_t *) FUNC_4( ((void*)0), 0, 1, sizeof(*VAR_8) );
    if ( VAR_8 == ((void*)0) )
        return 0;


    dvbpsi_demux_subdec_t* VAR_9;
    VAR_9 = FUNC_2( VAR_3, VAR_4,
                                          VAR_0,
                                          VAR_1,
                                          FUNC_0(VAR_8) );
    if (VAR_9 == ((void*)0))
    {
        FUNC_3( FUNC_0(VAR_8) );
        return 0;
    }


    FUNC_1( VAR_7, VAR_9 );

    VAR_8->pf_callback = VAR_5;
    VAR_8->p_cb_data = VAR_6;

    return 1;
}
