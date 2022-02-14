
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_37__ {double* pf_gain; int* pb_gain; double* pf_peak; int* pb_peak; } ;
struct TYPE_32__ {scalar_t__ i_frame_rate_base; scalar_t__ i_frame_rate; } ;
struct TYPE_33__ {int i_cat; TYPE_9__ audio_replay_gain; TYPE_4__ video; } ;
struct TYPE_34__ {scalar_t__ i_chunk_count; char* i_track_ID; TYPE_5__ fmt; TYPE_10__* p_sample; int p_stsd; TYPE_1__* chunk; } ;
typedef TYPE_6__ mp4_track_t ;
typedef int es_out_id_t ;
struct TYPE_35__ {int out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ demux_t ;
struct TYPE_36__ {float f_fps; int p_meta; scalar_t__ b_fragmented; } ;
typedef TYPE_8__ demux_sys_t ;
typedef TYPE_9__ audio_replay_gain_t ;
struct TYPE_31__ {TYPE_2__* p_frma; int p_payload; } ;
struct TYPE_30__ {scalar_t__ i_type; } ;
struct TYPE_29__ {unsigned int i_sample_description_index; } ;
struct TYPE_28__ {int i_handler; TYPE_3__ data; scalar_t__ i_type; } ;
typedef TYPE_10__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 size_t VAR_6 ;
 int * FUNC_0 (int ,TYPE_6__*) ;
 TYPE_10__* FUNC_1 (TYPE_10__*,char*,...) ;

 int FUNC_2 (TYPE_7__*,TYPE_6__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*,TYPE_10__*) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_7__*,scalar_t__*,scalar_t__*,TYPE_6__*,unsigned int,unsigned int) ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_7__*,char*,char*) ;
 double FUNC_7 (char const*) ;
 char* FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9( demux_t *VAR_9, mp4_track_t *VAR_10,
                          unsigned int VAR_11, es_out_id_t **VAR_12 )
{
    demux_sys_t *VAR_13 = VAR_9->p_sys;
    unsigned int VAR_14;

    if( VAR_13->b_fragmented || VAR_10->i_chunk_count == 0 )
        VAR_14 = 1;
    else
        VAR_14 =
                VAR_10->chunk[VAR_11].i_sample_description_index;

    if( VAR_12 )
        *VAR_12 = ((void*)0);

    if( !VAR_14 )
    {
        FUNC_6( VAR_9, "invalid SampleEntry index (track[Id 0x%x])",
                  VAR_10->i_track_ID );
        return VAR_7;
    }

    MP4_Box_t *VAR_15 = FUNC_1( VAR_10->p_stsd, "[%d]",
                            VAR_14 - 1 );

    if( !VAR_15 ||
        ( !VAR_15->data.p_payload && VAR_10->fmt.i_cat != 129 ) )
    {
        FUNC_6( VAR_9, "cannot find SampleEntry (track[Id 0x%x])",
                  VAR_10->i_track_ID );
        return VAR_7;
    }

    VAR_10->p_sample = VAR_15;

    MP4_Box_t *VAR_16;
    if( ( VAR_16 = FUNC_1( VAR_10->p_sample, "sinf/frma" ) ) && VAR_16->data.p_frma )
    {
        FUNC_6( VAR_9, "Original Format Box: %4.4s", (char *)&VAR_16->data.p_frma->i_type );

        VAR_15->i_type = VAR_16->data.p_frma->i_type;
    }


    switch( VAR_10->fmt.i_cat )
    {
    case 128:
        if ( VAR_15->i_handler != VAR_5 ||
             !FUNC_4( VAR_9, VAR_10, VAR_15 ) )
            return VAR_7;


        FUNC_5( VAR_9,
                              &VAR_10->fmt.video.i_frame_rate,
                              &VAR_10->fmt.video.i_frame_rate_base,
                              VAR_10, VAR_14, VAR_11 );

        VAR_13->f_fps = (float)VAR_10->fmt.video.i_frame_rate /
                       (float)VAR_10->fmt.video.i_frame_rate_base;

        break;

    case 130:
        if ( VAR_15->i_handler != VAR_2 ||
             !FUNC_2( VAR_9, VAR_10, VAR_15 ) )
            return VAR_7;
        if( VAR_13->p_meta )
        {
            audio_replay_gain_t *VAR_17 = &VAR_10->fmt.audio_replay_gain;
            const char *VAR_18 = FUNC_8( VAR_13->p_meta, "replaygain_track_gain" );
            if( VAR_18 )
            {
                double VAR_19 = FUNC_7( VAR_18 );
                VAR_17->pf_gain[VAR_6] = VAR_19;
                VAR_17->pb_gain[VAR_6] = VAR_19 != 0;
            }
            VAR_18 = FUNC_8( VAR_13->p_meta, "replaygain_track_peak" );
            if( VAR_18 )
            {
                double VAR_20 = FUNC_7( VAR_18 );
                VAR_17->pf_peak[VAR_6] = VAR_20;
                VAR_17->pb_peak[VAR_6] = VAR_20 > 0;
            }
        }
        break;

    case 129:
        if ( ( VAR_15->i_handler != VAR_4 &&
               VAR_15->i_handler != VAR_3 &&
               VAR_15->i_handler != VAR_1 &&
               VAR_15->i_handler != VAR_0 ) ||
             !FUNC_3( VAR_9, VAR_10, VAR_15 ) )
           return VAR_7;
        break;

    default:
        break;
    }

    if( VAR_12 )
        *VAR_12 = FUNC_0( VAR_9->out, VAR_10 );

    return ( !VAR_12 || *VAR_12 ) ? VAR_8 : VAR_7;
}
