
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_sar_den; scalar_t__ i_sar_num; int i_frame_rate_base; scalar_t__ i_frame_rate; scalar_t__ i_height; scalar_t__ i_width; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_5__ {int i_codec; scalar_t__ i_extra; int p_extra; TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
typedef int GstStructure ;
typedef char GstBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,int ,scalar_t__,int ,scalar_t__,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ,...) ;

__attribute__((used)) static GstStructure* FUNC_5( const es_format_t *VAR_7 )
{
    const video_format_t *VAR_8 = &VAR_7->video;
    GstStructure *VAR_9 = ((void*)0);

    switch( VAR_7->i_codec ){
    case 135:
        VAR_9 = FUNC_3( "video/x-h264" );
        FUNC_4( VAR_9, "alignment", VAR_6, "au", ((void*)0) );
        if( VAR_7->i_extra )
            FUNC_4( VAR_9, "stream-format", VAR_6, "avc",
                    ((void*)0) );
        else
            FUNC_4( VAR_9, "stream-format", VAR_6,
                    "byte-stream", ((void*)0) );
        break;
    case 134:
        VAR_9 = FUNC_3( "video/mpeg" );
        FUNC_4( VAR_9, "mpegversion", VAR_5, 4,
                "systemstream", VAR_4, VAR_0, ((void*)0) );
        break;
    case 131:
        VAR_9 = FUNC_3( "video/x-vp8" );
        break;
    case 133:
        VAR_9 = FUNC_3( "video/mpeg" );
        FUNC_4( VAR_9, "mpegversion", VAR_5, 2,
                "systemstream", VAR_4, VAR_0, ((void*)0) );
        break;
    case 136:
        VAR_9 = FUNC_3( "video/x-flash-video" );
        FUNC_4( VAR_9, "flvversion", VAR_5, 1, ((void*)0) );
        break;
    case 130:
        VAR_9 = FUNC_3( "video/x-wmv" );
        FUNC_4( VAR_9, "wmvversion", VAR_5, 1,
                "format", VAR_6, "WMV1", ((void*)0) );
        break;
    case 129:
        VAR_9 = FUNC_3( "video/x-wmv" );
        FUNC_4( VAR_9, "wmvversion", VAR_5, 2,
                "format", VAR_6, "WMV2", ((void*)0) );
        break;
    case 128:
        VAR_9 = FUNC_3( "video/x-wmv" );
        FUNC_4( VAR_9, "wmvversion", VAR_5, 3,
                "format", VAR_6, "WMV3", ((void*)0) );
        break;
    case 132:
        VAR_9 = FUNC_3( "video/x-wmv" );
        FUNC_4( VAR_9, "wmvversion", VAR_5, 3,
                "format", VAR_6, "WVC1", ((void*)0) );
        break;
    default:

        return ((void*)0);
    }

    if( VAR_8->i_width && VAR_8->i_height )
        FUNC_4( VAR_9,
                "width", VAR_5, VAR_8->i_width,
                "height", VAR_5, VAR_8->i_height, ((void*)0) );

    if( VAR_8->i_frame_rate && VAR_8->i_frame_rate_base )
        FUNC_4( VAR_9, "framerate", VAR_3,
                VAR_8->i_frame_rate,
                VAR_8->i_frame_rate_base, ((void*)0) );

    if( VAR_8->i_sar_num && VAR_8->i_sar_den )
        FUNC_4( VAR_9, "pixel-aspect-ratio", VAR_3,
                VAR_8->i_sar_num,
                VAR_8->i_sar_den, ((void*)0) );

    if( VAR_7->i_extra )
    {
        GstBuffer *VAR_10;

        VAR_10 = FUNC_0( VAR_1,
                VAR_7->p_extra, VAR_7->i_extra, 0,
                VAR_7->i_extra, ((void*)0), ((void*)0) );
        if( VAR_10 == ((void*)0) )
        {
            FUNC_2( VAR_9 );
            return ((void*)0);
        }

        FUNC_4( VAR_9, "codec_data", VAR_2, VAR_10, ((void*)0) );
        FUNC_1( VAR_10 );
    }

    return VAR_9;
}
