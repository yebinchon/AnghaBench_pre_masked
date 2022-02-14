
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_15__ {scalar_t__ i_rate; int i_chan_mode; int channel_type; } ;
struct TYPE_16__ {scalar_t__ i_codec; scalar_t__ i_profile; int i_extra; TYPE_3__ audio; int p_extra; } ;
struct TYPE_13__ {unsigned long i_rate; unsigned char i_channels; int i_chan_mode; scalar_t__ i_physical_channels; int channel_type; } ;
struct TYPE_14__ {TYPE_1__ audio; int i_codec; } ;
struct TYPE_17__ {int pf_flush; int pf_decode; TYPE_4__ fmt_in; TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_18__ {int b_discontinuity; int b_sbr; int b_ps; int * p_block; scalar_t__ i_last_length; int * hfaad; int date; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_19__ {int outputFormat; scalar_t__ defSampleRate; } ;
typedef TYPE_7__ NeAACDecConfiguration ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int,unsigned long*,unsigned char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_7__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *,unsigned long,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_6__* FUNC_9 (int) ;
 scalar_t__* VAR_14 ;
 int FUNC_10 (TYPE_5__*,char*) ;

__attribute__((used)) static int FUNC_11( vlc_object_t *VAR_15 )
{
    decoder_t *VAR_16 = (decoder_t*)VAR_15;
    decoder_sys_t *VAR_17;
    NeAACDecConfiguration *VAR_18;

    if( VAR_16->fmt_in.i_codec != VAR_8 ||
        VAR_16->fmt_in.i_profile == VAR_0 ||
        (VAR_16->fmt_in.i_extra > 1 &&
         (FUNC_0(VAR_16->fmt_in.p_extra) & 0xffe0) == 0xf8e0))
    {
        return VAR_10;
    }


    if( ( VAR_16->p_sys = VAR_17 = FUNC_9( sizeof(*VAR_17) ) ) == ((void*)0) )
        return VAR_11;


    if( ( VAR_17->hfaad = FUNC_4() ) == ((void*)0) )
    {
        FUNC_10( VAR_16, "cannot initialize faad" );
        FUNC_8( VAR_17 );
        return VAR_10;
    }


    VAR_16->fmt_out.audio.channel_type = VAR_16->fmt_in.audio.channel_type;

    if( VAR_16->fmt_in.i_extra > 0 )
    {

        unsigned long VAR_19;
        unsigned char VAR_20;

        if( FUNC_3( VAR_17->hfaad, VAR_16->fmt_in.p_extra,
                           VAR_16->fmt_in.i_extra,
                           &VAR_19, &VAR_20 ) < 0 ||
                VAR_20 >= VAR_6 )
        {
            FUNC_10( VAR_16, "Failed to initialize faad using extra data" );
            FUNC_1( VAR_17->hfaad );
            FUNC_8( VAR_17 );
            return VAR_10;
        }

        VAR_16->fmt_out.audio.i_rate = VAR_19;
        VAR_16->fmt_out.audio.i_channels = VAR_20;
        VAR_16->fmt_out.audio.i_physical_channels
            = VAR_14[VAR_20];
        FUNC_6( &VAR_17->date, VAR_19, 1 );
    }
    else
    {
        VAR_16->fmt_out.audio.i_physical_channels = 0;

        VAR_16->fmt_out.audio.i_rate = 0;
        VAR_16->fmt_out.audio.i_channels = 0;
        FUNC_7( &VAR_17->date, VAR_13 );
    }

    VAR_16->fmt_out.i_codec = VAR_5 ? VAR_7 : VAR_9;
    VAR_16->fmt_out.audio.i_chan_mode = VAR_16->fmt_in.audio.i_chan_mode;


    VAR_18 = FUNC_2( VAR_17->hfaad );
    if( VAR_16->fmt_in.audio.i_rate )
        VAR_18->defSampleRate = VAR_16->fmt_in.audio.i_rate;
    VAR_18->outputFormat = VAR_5 ? VAR_3 : VAR_2;
    FUNC_5( VAR_17->hfaad, VAR_18 );

    VAR_17->i_last_length = 0;


    VAR_17->p_block = ((void*)0);

    VAR_17->b_discontinuity =
    VAR_17->b_sbr = VAR_17->b_ps = 0;

    VAR_16->pf_decode = VAR_1;
    VAR_16->pf_flush = VAR_4;
    return VAR_12;
}
