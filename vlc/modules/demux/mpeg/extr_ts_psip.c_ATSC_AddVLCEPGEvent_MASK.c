
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_epg_t ;
struct TYPE_5__ {int i_start; } ;
typedef TYPE_1__ vlc_epg_event_t ;
typedef int ts_psip_context_t ;
typedef int time_t ;
typedef int dvbpsi_atsc_ett_t ;
typedef int dvbpsi_atsc_eit_event_t ;
typedef int demux_t ;


 TYPE_1__* FUNC_0 (int *,int *,int const*,int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static time_t FUNC_3( demux_t *VAR_1, ts_psip_context_t *VAR_2,
                                   const dvbpsi_atsc_eit_event_t *VAR_3,
                                   const dvbpsi_atsc_ett_t *VAR_4,
                                   vlc_epg_t *VAR_5 )
{
    vlc_epg_event_t *VAR_6 = FUNC_0( VAR_1, VAR_2,
                                                     VAR_3, VAR_4 );
    if( VAR_6 )
    {
        if( FUNC_1( VAR_5, VAR_6 ) )
            return VAR_6->i_start;
        FUNC_2( VAR_6 );
    }
    return VAR_0;
}
