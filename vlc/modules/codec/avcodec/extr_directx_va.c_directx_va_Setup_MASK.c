
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_va_t ;
struct TYPE_9__ {int i_width; int i_height; int i_frame_rate_base; int i_frame_rate; } ;
typedef TYPE_2__ video_format_t ;
typedef int es_format_t ;
typedef int directx_va_mode_t ;
typedef int directx_sys_t ;
struct TYPE_8__ {int den; int num; } ;
struct TYPE_10__ {int codec_id; int active_thread_type; int coded_width; int coded_height; TYPE_1__ framerate; scalar_t__ thread_count; } ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int,int) ;




 int VAR_0 ;
 int * FUNC_1 (int *,int const*,int const*,TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int,int,int,int) ;

const directx_va_mode_t *FUNC_5(vlc_va_t *VAR_1, const directx_sys_t *VAR_2,
                     const AVCodecContext *VAR_3, const AVPixFmtDescriptor *VAR_4,
                     const es_format_t *VAR_5, int VAR_6,
                     video_format_t *VAR_7, unsigned *VAR_8)
{
    int VAR_9 = 16;
    unsigned VAR_10 = 2;

    switch ( VAR_3->codec_id )
    {
    case 129:


        VAR_9 = 32;
        VAR_10 += 2 + 2;

        break;
    case 130:



        if (VAR_6)
            VAR_9 = 16;
        else
            VAR_9 = 128;
        VAR_10 += 16;
        break;
    case 131:
        VAR_10 += 16 + 2;
        break;
    case 128:
        VAR_10 += 8 + 1;
        break;
    default:
        VAR_10 += 2;
    }

    if ( VAR_3->active_thread_type & VAR_0 )
        VAR_10 += VAR_3->thread_count;

    if (VAR_3->coded_width <= 0 || VAR_3->coded_height <= 0)
        return ((void*)0);

    FUNC_2((VAR_9 & (VAR_9 - 1)) == 0);

    int VAR_11 = (((VAR_3->coded_width) + ((VAR_9) - 1)) & ~((VAR_9) - 1));
    int VAR_12 = (((VAR_3->coded_height) + ((VAR_9) - 1)) & ~((VAR_9) - 1));

    if (VAR_3->coded_width != VAR_11 || VAR_3->coded_height != VAR_12)
        FUNC_4( VAR_1, "surface dimensions (%dx%d) differ from avcodec dimensions (%dx%d)",
                  VAR_11, VAR_12,
                  VAR_3->coded_width, VAR_3->coded_height);

    VAR_7->i_width = VAR_11;
    VAR_7->i_height = VAR_12;


    VAR_7->i_frame_rate = VAR_3->framerate.num;
    VAR_7->i_frame_rate_base = VAR_3->framerate.den;


    const directx_va_mode_t *VAR_13 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_7, VAR_3, VAR_4);
    if (VAR_13 == ((void*)0)) {
        FUNC_3(VAR_1, "FindVideoServiceConversion failed");
        return ((void*)0);
    }
    *VAR_8 = VAR_10;
    return VAR_13;
}
