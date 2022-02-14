
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_9__ {int i_x_offset; int i_y_offset; int i_frame_rate_base; int i_frame_rate; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_10__ {int i_codec; TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_11__ {TYPE_2__ fmt_out; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_12__ {int padding_left; int padding_right; int padding_top; int padding_bottom; } ;
typedef int GstVideoInfo ;
typedef TYPE_4__ GstVideoAlignment ;
typedef int GstStructure ;
typedef int GstCaps ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_1__*,int ,int,int,int,int,int ,int ) ;
 int FUNC_10 (int ,int ) ;

bool FUNC_11( GstVideoInfo *VAR_1, GstVideoAlignment *VAR_2,
        GstCaps *VAR_3, decoder_t *VAR_4 )
{
    es_format_t *VAR_5 = &VAR_4->fmt_out;
    video_format_t *VAR_6 = &VAR_4->fmt_out.video;
    GstStructure *VAR_7 = FUNC_6( VAR_3, 0 );
    vlc_fourcc_t VAR_8;
    int VAR_9, VAR_10;

    VAR_8 = VAR_5->i_codec = FUNC_10(
            VAR_0,
            FUNC_7( VAR_7, "format" ) );
    if( !VAR_8 )
    {
        FUNC_8( VAR_4, "video chroma type not supported" );
        return 0;
    }

    VAR_9 = FUNC_5( VAR_1 ) + VAR_2->padding_left +
        VAR_2->padding_right;
    VAR_10 = FUNC_2( VAR_1 ) + VAR_2->padding_top +
        VAR_2->padding_bottom;

    FUNC_9( VAR_6, VAR_8, VAR_9, VAR_10,
            FUNC_5( VAR_1 ), FUNC_2( VAR_1 ),
            FUNC_4( VAR_1 ), FUNC_3( VAR_1 ));
    VAR_6->i_x_offset = VAR_2->padding_left;
    VAR_6->i_y_offset = VAR_2->padding_top;

    VAR_6->i_frame_rate = FUNC_1( VAR_1 );
    VAR_6->i_frame_rate_base = FUNC_0( VAR_1 );

    return 1;
}
