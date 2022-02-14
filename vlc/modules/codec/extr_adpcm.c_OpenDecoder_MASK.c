
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef unsigned int uint8_t ;
typedef int int16_t ;
struct TYPE_15__ {scalar_t__ i_rate; unsigned int i_channels; int i_physical_channels; } ;
struct TYPE_16__ {TYPE_3__ audio; int i_codec; } ;
struct TYPE_13__ {scalar_t__ i_rate; unsigned int i_channels; int i_blockalign; int i_bitspersample; } ;
struct TYPE_14__ {int i_codec; TYPE_1__ audio; } ;
struct TYPE_17__ {int pf_flush; int pf_decode; TYPE_4__ fmt_out; TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_18__ {int i_samplesperblock; int codec; int i_block; int end_date; struct TYPE_18__* prev; } ;
typedef TYPE_6__ decoder_sys_t ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,char*,scalar_t__,unsigned int,int ,unsigned int,int) ;
 int FUNC_5 (TYPE_5__*,char*,...) ;
 int FUNC_6 (TYPE_5__*,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_7 )
{
    decoder_t *VAR_8 = (decoder_t*)VAR_7;
    decoder_sys_t *VAR_9;

    switch( VAR_8->fmt_in.i_codec )
    {
        case 131:
        case 130:
        case 129:
        case 132:
        case 133:
        case 128:
            break;
        default:
            return VAR_3;
    }

    if( VAR_8->fmt_in.audio.i_rate <= 0 )
    {
        FUNC_5( VAR_8, "bad samplerate" );
        return VAR_3;
    }


    VAR_9 = FUNC_3(sizeof(*VAR_9));
    if( FUNC_7(VAR_9 == ((void*)0)) )
        return VAR_4;

    VAR_9->prev = ((void*)0);
    VAR_9->i_samplesperblock = 0;

    unsigned VAR_10 = VAR_8->fmt_in.audio.i_channels;
    uint8_t VAR_11 = 5;
    switch( VAR_8->fmt_in.i_codec )
    {
        case 131:
            VAR_9->codec = 136;
            VAR_11 = 2;
            break;
        case 130:
            VAR_9->codec = 135;
            VAR_11 = 2;
            break;
        case 129:
            VAR_9->codec = 134;
            VAR_11 = 2;
            break;
        case 132:
            VAR_9->codec = 138;
            VAR_11 = 2;
            break;
        case 133:
            VAR_9->codec = 139;
            VAR_11 = 2;
            break;
        case 128:
            VAR_9->codec = 137;
            VAR_9->prev = FUNC_0( 2 * VAR_8->fmt_in.audio.i_channels,
                                  sizeof( int16_t ) );
            if( FUNC_7(VAR_9->prev == ((void*)0)) )
            {
                FUNC_2( VAR_9 );
                return VAR_4;
            }
            break;
    }

    if (VAR_10 > VAR_11 || VAR_10 == 0)
    {
        FUNC_2(VAR_9->prev);
        FUNC_2(VAR_9);
        FUNC_5( VAR_8, "Invalid number of channels %i", VAR_8->fmt_in.audio.i_channels );
        return VAR_3;
    }

    if( VAR_8->fmt_in.audio.i_blockalign <= 0 )
    {
        VAR_9->i_block = (VAR_9->codec == 136) ?
            34 * VAR_8->fmt_in.audio.i_channels : 1024;
        FUNC_6( VAR_8, "block size undefined, using %zu", VAR_9->i_block );
    }
    else
    {
        VAR_9->i_block = VAR_8->fmt_in.audio.i_blockalign;
    }


    switch( VAR_9->codec )
    {
    case 136:
        VAR_9->i_samplesperblock = 64;
        break;
    case 135:
        if( VAR_9->i_block >= 4 * VAR_10 )
        {
            VAR_9->i_samplesperblock = 2 * ( VAR_9->i_block - 4 * VAR_10 )
                                     / VAR_10;
        }
        break;
    case 134:
        if( VAR_9->i_block >= 7 * VAR_10 )
        {
            VAR_9->i_samplesperblock =
                2 * (VAR_9->i_block - 7 * VAR_10) / VAR_10 + 2;
        }
        break;
    case 138:
        if( VAR_9->i_block >= 4 * VAR_10 )
        {
            VAR_9->i_samplesperblock =
                2 * (VAR_9->i_block - 4 * VAR_10) / VAR_10 + 1;
        }
        break;
    case 139:
        VAR_10 = 2;
        if( VAR_9->i_block >= 16 )
            VAR_9->i_samplesperblock = ( 4 * ( VAR_9->i_block - 16 ) + 2 )/ 3;
        break;
    case 137:
        if( VAR_9->i_block >= VAR_10 )
        {
            VAR_9->i_samplesperblock =
                2 * (VAR_9->i_block - VAR_10) / VAR_10;
        }
    }

    FUNC_4( VAR_8, "format: samplerate:%d Hz channels:%d bits/sample:%d "
             "blockalign:%zu samplesperblock:%zu",
             VAR_8->fmt_in.audio.i_rate, VAR_10,
             VAR_8->fmt_in.audio.i_bitspersample, VAR_9->i_block,
             VAR_9->i_samplesperblock );

    if (VAR_9->i_samplesperblock == 0)
    {
        FUNC_2(VAR_9->prev);
        FUNC_2(VAR_9);
        FUNC_5( VAR_8, "Error computing number of samples per block");
        return VAR_3;
    }

    VAR_8->p_sys = VAR_9;
    VAR_8->fmt_out.i_codec = VAR_2;
    VAR_8->fmt_out.audio.i_rate = VAR_8->fmt_in.audio.i_rate;
    VAR_8->fmt_out.audio.i_channels = VAR_10;
    VAR_8->fmt_out.audio.i_physical_channels = VAR_6[VAR_10];

    FUNC_1( &VAR_9->end_date, VAR_8->fmt_out.audio.i_rate, 1 );

    VAR_8->pf_decode = VAR_0;
    VAR_8->pf_flush = VAR_1;

    return VAR_5;
}
