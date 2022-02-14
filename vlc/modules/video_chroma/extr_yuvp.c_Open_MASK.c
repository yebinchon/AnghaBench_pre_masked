
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ orientation; } ;
struct TYPE_10__ {TYPE_3__ video; } ;
struct TYPE_7__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ orientation; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
struct TYPE_11__ {TYPE_4__ fmt_out; int pf_video_filter; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,char*,char const*) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_8 )
{
    filter_t *VAR_9 = (filter_t*)VAR_8;



    if( VAR_9->fmt_in.video.i_chroma != VAR_5 ||
        ( VAR_9->fmt_out.video.i_chroma != VAR_4 &&
          VAR_9->fmt_out.video.i_chroma != VAR_3 &&
          VAR_9->fmt_out.video.i_chroma != VAR_1 &&
          VAR_9->fmt_out.video.i_chroma != VAR_2 ) ||
        VAR_9->fmt_in.video.i_width != VAR_9->fmt_out.video.i_width ||
        VAR_9->fmt_in.video.i_height != VAR_9->fmt_out.video.i_height ||
        VAR_9->fmt_in.video.orientation != VAR_9->fmt_out.video.orientation )
    {
        return VAR_6;
    }

    VAR_9->pf_video_filter = VAR_0;

    FUNC_0( VAR_9, "YUVP to %4.4s converter",
             (const char*)&VAR_9->fmt_out.video.i_chroma );

    return VAR_7;
}
