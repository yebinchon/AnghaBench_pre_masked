
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int int16_t ;
struct TYPE_15__ {scalar_t__ i_rate; scalar_t__ i_physical_channels; void* i_format; } ;
struct TYPE_12__ {TYPE_9__ audio; void* i_codec; } ;
struct TYPE_10__ {size_t i_channels; scalar_t__ i_rate; scalar_t__ i_physical_channels; } ;
struct TYPE_11__ {int i_codec; TYPE_1__ audio; } ;
struct TYPE_13__ {TYPE_3__ fmt_out; TYPE_2__ fmt_in; TYPE_5__* p_sys; int pf_flush; int pf_decode; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_14__ {int end_date; int const* table; } ;
typedef TYPE_5__ decoder_sys_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,char*,scalar_t__,size_t) ;
 int FUNC_4 (TYPE_4__*,char*,scalar_t__,...) ;
 scalar_t__* VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_10 )
{
    decoder_t *VAR_11 = (decoder_t*)VAR_10;
    const int16_t *VAR_12;

    switch( VAR_11->fmt_in.i_codec )
    {
        case 129:
            VAR_12 = VAR_7;
            break;
        case 128:
            VAR_12 = VAR_9;
            break;
        default:
            return VAR_4;
    }

    if( VAR_11->fmt_in.audio.i_channels == 0 ||
        VAR_11->fmt_in.audio.i_channels > VAR_0 )
    {
        FUNC_4( VAR_11, "bad channels count (1-%i): %i",
                 VAR_0, VAR_11->fmt_in.audio.i_channels );
        return VAR_4;
    }

    if( VAR_11->fmt_in.audio.i_rate == 0 )
    {
        FUNC_4( VAR_11, "bad samplerate: %d Hz", VAR_11->fmt_in.audio.i_rate );
        return VAR_4;
    }

    FUNC_3( VAR_11, "samplerate:%dHz channels:%d",
             VAR_11->fmt_in.audio.i_rate, VAR_11->fmt_in.audio.i_channels );



    decoder_sys_t *VAR_13 = FUNC_2(sizeof(*VAR_13));
    if( FUNC_5(VAR_13 == ((void*)0)) )
        return VAR_5;


    VAR_11->pf_decode = VAR_1;
    VAR_11->pf_flush = VAR_2;
    VAR_11->p_sys = VAR_13;

    VAR_11->fmt_out.i_codec = VAR_3;
    VAR_11->fmt_out.audio.i_format = VAR_3;
    VAR_11->fmt_out.audio.i_rate = VAR_11->fmt_in.audio.i_rate;
    if( VAR_11->fmt_in.audio.i_physical_channels )
        VAR_11->fmt_out.audio.i_physical_channels =
                                       VAR_11->fmt_in.audio.i_physical_channels;
    else
        VAR_11->fmt_out.audio.i_physical_channels =
                              VAR_8[VAR_11->fmt_in.audio.i_channels];
    FUNC_0( &VAR_11->fmt_out.audio );

    VAR_13->table = VAR_12;

    FUNC_1( &VAR_13->end_date, VAR_11->fmt_out.audio.i_rate, 1 );

    return VAR_6;
}
