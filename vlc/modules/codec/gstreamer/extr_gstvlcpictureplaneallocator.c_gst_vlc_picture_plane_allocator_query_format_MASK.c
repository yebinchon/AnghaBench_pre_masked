
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_format_t ;
typedef int picture_t ;
struct TYPE_7__ {int video; } ;
struct TYPE_8__ {TYPE_1__ fmt_out; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_9__ {TYPE_2__* p_dec; int pic_info; } ;
typedef TYPE_3__ GstVlcPicturePlaneAllocator ;
typedef int GstVideoInfo ;
typedef int GstVideoAlignment ;
typedef int GstCaps ;


 int FUNC_0 (int *,int *,int *,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

bool FUNC_4(
        GstVlcPicturePlaneAllocator *VAR_0, GstVideoInfo *VAR_1,
        GstVideoAlignment *VAR_2, GstCaps *VAR_3 )
{
    decoder_t *VAR_4 = VAR_0->p_dec;
    video_format_t VAR_5;
    picture_t *VAR_6 = &VAR_0->pic_info;


    VAR_5 = VAR_4->fmt_out.video;
    FUNC_3( &VAR_4->fmt_out.video, 0 );

    bool VAR_7 =
        FUNC_0( VAR_1, VAR_2, VAR_3, VAR_4,
                VAR_6 );

    FUNC_2( &VAR_4->fmt_out.video );


    VAR_4->fmt_out.video = VAR_5;

    if( !VAR_7 )
    {
        FUNC_1( VAR_0->p_dec, "failed to get the vout info" );
        return 0;
    }

    return 1;
}
