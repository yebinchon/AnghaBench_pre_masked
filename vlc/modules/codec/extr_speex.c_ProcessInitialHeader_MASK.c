
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int bytes; scalar_t__ packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_17__ {size_t i_channels; int i_rate; int i_physical_channels; } ;
struct TYPE_18__ {TYPE_1__ audio; } ;
struct TYPE_20__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_21__ {int end_date; int stereo; void* p_state; int bits; TYPE_7__* p_header; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_24__ {int * data; int func; int callback_id; } ;
struct TYPE_23__ {size_t mode; int speex_version_id; scalar_t__ mode_bitstream_version; int nb_channels; int rate; scalar_t__ vbr; } ;
struct TYPE_22__ {scalar_t__ bitstream_version; int modeName; } ;
typedef int SpeexStereoState ;
typedef TYPE_6__ SpeexMode ;
typedef TYPE_7__ SpeexHeader ;
typedef TYPE_8__ SpeexCallback ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_4__*,char*,int ,int ,char*,char*) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int ,TYPE_8__*) ;
 void* FUNC_5 (TYPE_6__ const*) ;
 TYPE_6__** VAR_6 ;
 TYPE_7__* FUNC_6 (char*,int ) ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_7( decoder_t *VAR_9, ogg_packet *VAR_10 )
{
    decoder_sys_t *VAR_11 = VAR_9->p_sys;

    void *VAR_12;
    SpeexHeader *VAR_13;
    const SpeexMode *VAR_14;
    SpeexCallback VAR_15;

    VAR_11->p_header = VAR_13 =
        FUNC_6( (char *)VAR_10->packet,
                                VAR_10->bytes );
    if( !VAR_13 )
    {
        FUNC_2( VAR_9, "cannot read Speex header" );
        return VAR_4;
    }
    if( VAR_13->mode >= VAR_1 || VAR_13->mode < 0 )
    {
        FUNC_2( VAR_9, "mode number %d does not (yet/any longer) exist in "
                 "this version of libspeex.", VAR_13->mode );
        return VAR_4;
    }

    VAR_14 = VAR_6[VAR_13->mode];
    if( VAR_14 == ((void*)0) )
        return VAR_4;

    if( VAR_13->speex_version_id > 1 )
    {
        FUNC_2( VAR_9, "this file was encoded with Speex bit-stream "
                 "version %d which is not supported by this decoder.",
                 VAR_13->speex_version_id );
        return VAR_4;
    }

    if( VAR_14->bitstream_version < VAR_13->mode_bitstream_version )
    {
        FUNC_2( VAR_9, "file encoded with a newer version of Speex." );
        return VAR_4;
    }
    if( VAR_14->bitstream_version > VAR_13->mode_bitstream_version )
    {
        FUNC_2( VAR_9, "file encoded with an older version of Speex." );
        return VAR_4;
    }

    FUNC_1( VAR_9, "Speex %d Hz audio using %s mode %s%s",
             VAR_13->rate, VAR_14->modeName,
             ( VAR_13->nb_channels == 1 ) ? " (mono" : " (stereo",
             VAR_13->vbr ? ", VBR)" : ")" );


    FUNC_3( &VAR_11->bits );
    VAR_11->p_state = VAR_12 = FUNC_5( VAR_14 );
    if( !VAR_12 )
    {
        FUNC_2( VAR_9, "decoder initialization failed" );
        return VAR_4;
    }

    if( VAR_13->nb_channels == 2 )
    {
        SpeexStereoState VAR_16 = VAR_3;
        VAR_11->stereo = VAR_16;
        VAR_15.callback_id = VAR_0;
        VAR_15.func = VAR_7;
        VAR_15.data = &VAR_11->stereo;
        FUNC_4( VAR_12, VAR_2, &VAR_15 );
    }
    if( VAR_13->nb_channels <= 0 ||
        VAR_13->nb_channels > 5 )
    {
        FUNC_2( VAR_9, "invalid number of channels (not between 1 and 5): %i",
                 VAR_13->nb_channels );
        return VAR_4;
    }


    VAR_9->fmt_out.audio.i_physical_channels =
        VAR_8[VAR_13->nb_channels];
    VAR_9->fmt_out.audio.i_channels = VAR_13->nb_channels;
    VAR_9->fmt_out.audio.i_rate = VAR_13->rate;

    FUNC_0( &VAR_11->end_date, VAR_13->rate, 1 );

    return VAR_5;
}
