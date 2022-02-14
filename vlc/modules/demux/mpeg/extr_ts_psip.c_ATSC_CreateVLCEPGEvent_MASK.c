
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {void* psz_description; void* psz_short_description; void* psz_name; } ;
typedef TYPE_2__ vlc_epg_event_t ;
typedef int uint8_t ;
struct TYPE_14__ {int p_a65; TYPE_1__* p_stt; } ;
typedef TYPE_3__ ts_psip_context_t ;
typedef scalar_t__ time_t ;
struct TYPE_15__ {int i_tag; int* p_data; size_t i_length; struct TYPE_15__* p_next; } ;
typedef TYPE_4__ dvbpsi_descriptor_t ;
struct TYPE_16__ {int const* p_etm_data; int i_etm_length; } ;
typedef TYPE_5__ dvbpsi_atsc_ett_t ;
struct TYPE_17__ {int const* i_title; int i_title_length; int i_length_seconds; int i_event_id; TYPE_4__* p_first_descriptor; int i_start_time; } ;
typedef TYPE_6__ dvbpsi_atsc_eit_event_t ;
typedef int demux_t ;
struct TYPE_12__ {int i_gps_utc_offset; } ;



 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int const*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char**) ;
 int FUNC_6 (int *,char*,scalar_t__,int ,char*,int ) ;
 int FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (int ,scalar_t__,int ) ;

__attribute__((used)) static vlc_epg_event_t * FUNC_9( demux_t *VAR_1, ts_psip_context_t *VAR_2,
                                                 const dvbpsi_atsc_eit_event_t *VAR_3,
                                                 const dvbpsi_atsc_ett_t *VAR_4 )
{

    FUNC_1(VAR_1);

    char *VAR_5 = FUNC_2( VAR_2->p_a65,
                                                       VAR_3->i_title, VAR_3->i_title_length );
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    vlc_epg_event_t *VAR_8 = ((void*)0);

    time_t VAR_9 = FUNC_3( VAR_3->i_start_time, VAR_2->p_stt->i_gps_utc_offset );
    FUNC_0( VAR_9 );

    for( const dvbpsi_descriptor_t *VAR_10 = VAR_3->p_first_descriptor;
                                    VAR_10; VAR_10 = VAR_10->p_next )
    {
        switch( VAR_10->i_tag )
        {
            case 128:
            {
                const uint8_t *VAR_11 = VAR_10->p_data;
                size_t VAR_12 = VAR_10->i_length;
                uint8_t VAR_13 = VAR_10->p_data[0] & 0x3F;
                VAR_11++; VAR_12--;
                for( ; VAR_13 && VAR_12 > 3; VAR_13-- )
                {
                    uint8_t VAR_14 = VAR_11[1];
                    if( (size_t) VAR_14 * 2 + 3 > VAR_12 )
                        break;

                    uint8_t VAR_15 = VAR_11[(size_t) 2 + 2 * VAR_14];
                    VAR_11 += (size_t) 3 + 2 * VAR_14;
                    VAR_12 -= (size_t) 3 + 2 * VAR_14;
                    if( VAR_15 > VAR_12 )
                        break;

                    if( FUNC_7(VAR_6) )
                        FUNC_4( VAR_6 );
                    VAR_6 = FUNC_2( VAR_2->p_a65, VAR_11, VAR_15 );
                    if( VAR_6 )
                        break;
                    VAR_11 += VAR_15;
                    VAR_12 -= VAR_15;
                }
            }
            default:
                break;
        }
    }


    if( VAR_4 )
    {
        VAR_7 = FUNC_2( VAR_2->p_a65,
                                                             VAR_4->p_etm_data, VAR_4->i_etm_length );
    }

    if( VAR_9 != VAR_0 && VAR_5 )
    {




        VAR_8 = FUNC_8( VAR_3->i_event_id, VAR_9, VAR_3->i_length_seconds );
        if( VAR_8 )
        {
            VAR_8->psz_name = FUNC_5( &VAR_5 );
            VAR_8->psz_short_description = FUNC_5( &VAR_6 );
            VAR_8->psz_description = FUNC_5( &VAR_7 );
        }
    }

    FUNC_4( VAR_5 );
    FUNC_4( VAR_6 );
    FUNC_4( VAR_7 );
    return VAR_8;
}
