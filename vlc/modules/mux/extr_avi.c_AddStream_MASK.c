
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_17__ {int i_streams; int i_stream_video; TYPE_6__* stream; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_18__ {TYPE_7__* p_sys; int fmt; TYPE_2__* p_fmt; } ;
typedef TYPE_5__ sout_input_t ;
struct TYPE_19__ {int i_cat; int* fcc; int f_fps; int i_bitrate; scalar_t__ i_duration; scalar_t__ i_frames; scalar_t__ i_totalsize; int * p_bih; int i_bih; TYPE_7__* p_wf; } ;
typedef TYPE_6__ avi_stream_t ;
struct TYPE_20__ {int nChannels; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; int wBitsPerSample; void* wFormatTag; int cbSize; } ;
typedef TYPE_7__ WAVEFORMATEX ;
struct TYPE_14__ {int i_channels; int i_rate; int i_blockalign; } ;
struct TYPE_15__ {int i_cat; int i_bitrate; int i_codec; TYPE_1__ audio; int i_extra; int p_extra; } ;



 int * FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (TYPE_7__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_6( sout_mux_t *VAR_12, sout_input_t *VAR_13 )
{
    sout_mux_sys_t *VAR_14 = VAR_12->p_sys;
    avi_stream_t *VAR_15;

    if( VAR_14->i_streams >= 100 )
    {
        FUNC_5( VAR_12, "too many streams" );
        return VAR_0;
    }

    FUNC_4( VAR_12, "adding input" );
    VAR_13->p_sys = FUNC_2( sizeof( int ) );
    if( !VAR_13->p_sys )
        return VAR_1;

    *((int*)VAR_13->p_sys) = VAR_14->i_streams;
    VAR_15 = &VAR_14->stream[VAR_14->i_streams];

    switch( VAR_13->p_fmt->i_cat )
    {
        case 141:
            VAR_15->i_cat = 141;
            VAR_15->fcc[0] = '0' + VAR_14->i_streams / 10;
            VAR_15->fcc[1] = '0' + VAR_14->i_streams % 10;
            VAR_15->fcc[2] = 'w';
            VAR_15->fcc[3] = 'b';

            VAR_15->p_bih = ((void*)0);
            VAR_15->i_bih = 0;

            WAVEFORMATEX *VAR_16 = FUNC_2( sizeof( WAVEFORMATEX ) +
                                  VAR_13->p_fmt->i_extra );
            if( !VAR_16 )
            {
                FUNC_1( VAR_13->p_sys );
                VAR_13->p_sys = ((void*)0);
                return VAR_1;
            }

            VAR_16->cbSize = VAR_13->p_fmt->i_extra;
            if( VAR_16->cbSize > 0 )
            {
                FUNC_3( &VAR_16[1],
                        VAR_13->p_fmt->p_extra,
                        VAR_13->p_fmt->i_extra );
            }
            VAR_16->nChannels = VAR_13->p_fmt->audio.i_channels;
            VAR_16->nSamplesPerSec = VAR_13->p_fmt->audio.i_rate;
            VAR_16->nBlockAlign = VAR_13->p_fmt->audio.i_blockalign;
            VAR_16->nAvgBytesPerSec= VAR_13->p_fmt->i_bitrate / 8;
            VAR_16->wBitsPerSample = 0;

            switch( VAR_13->p_fmt->i_codec )
            {
                case 139:
                    VAR_16->wFormatTag = VAR_3;
                    VAR_16->nBlockAlign= 1;
                    break;
                case 137:
                    VAR_16->wFormatTag = VAR_5;
                    VAR_16->nBlockAlign= 1;
                    break;
                case 131:
                    VAR_16->wFormatTag = VAR_8;
                    break;
                case 130:
                    VAR_16->wFormatTag = VAR_9;
                    break;
                case 128:
                    VAR_16->wFormatTag = VAR_11;
                    break;
                case 129:
                    VAR_16->wFormatTag = VAR_10;
                    break;
                case 138:
                    VAR_16->wFormatTag = VAR_4;
                    break;
                case 136:
                    VAR_16->wFormatTag = VAR_6;
                    break;

                case 132:
                    VAR_16->wFormatTag = VAR_7;
                    VAR_16->nBlockAlign= VAR_16->nChannels;
                    VAR_16->wBitsPerSample = 8;
                    VAR_16->nAvgBytesPerSec = (VAR_16->wBitsPerSample/8) *
                                      VAR_16->nSamplesPerSec * VAR_16->nChannels;
                    break;
                case 135:
                    VAR_16->wFormatTag = VAR_7;
                    VAR_16->nBlockAlign= 2 * VAR_16->nChannels;
                    VAR_16->wBitsPerSample = 16;
                    VAR_16->nAvgBytesPerSec = (VAR_16->wBitsPerSample/8) *
                                      VAR_16->nSamplesPerSec * VAR_16->nChannels;
                    break;
                case 134:
                    VAR_16->wFormatTag = VAR_7;
                    VAR_16->nBlockAlign= 3 * VAR_16->nChannels;
                    VAR_16->wBitsPerSample = 24;
                    VAR_16->nAvgBytesPerSec = (VAR_16->wBitsPerSample/8) *
                                      VAR_16->nSamplesPerSec * VAR_16->nChannels;
                    break;
                case 133:
                    VAR_16->wFormatTag = VAR_7;
                    VAR_16->nBlockAlign= 4 * VAR_16->nChannels;
                    VAR_16->wBitsPerSample = 32;
                    VAR_16->nAvgBytesPerSec = (VAR_16->wBitsPerSample/8) *
                                      VAR_16->nSamplesPerSec * VAR_16->nChannels;
                    break;
                default:
                    FUNC_1( VAR_16 );
                    FUNC_1( VAR_13->p_sys );
                    VAR_13->p_sys = ((void*)0);
                    return VAR_0;
            }
            VAR_15->p_wf = VAR_16;
            break;
        case 140:
            VAR_15->i_cat = 140;
            VAR_15->fcc[0] = '0' + VAR_14->i_streams / 10;
            VAR_15->fcc[1] = '0' + VAR_14->i_streams % 10;
            VAR_15->fcc[2] = 'd';
            VAR_15->fcc[3] = 'c';
            if( VAR_14->i_stream_video < 0 )
            {
                VAR_14->i_stream_video = VAR_14->i_streams;
            }
            VAR_15->p_wf = ((void*)0);
            VAR_15->p_bih = FUNC_0( &VAR_13->fmt, &VAR_15->i_bih );
            if( !VAR_15->p_bih )
            {
                FUNC_1( VAR_13->p_sys );
                VAR_13->p_sys = ((void*)0);
                return VAR_1;
            }
            break;
        default:
            FUNC_1( VAR_13->p_sys );
            VAR_13->p_sys = ((void*)0);
            return( VAR_0 );
    }
    VAR_15->i_totalsize = 0;
    VAR_15->i_frames = 0;
    VAR_15->i_duration = 0;


    VAR_15->f_fps = 25;
    VAR_15->i_bitrate = 128 * 1024;

    VAR_14->i_streams++;
    return( VAR_2 );
}
