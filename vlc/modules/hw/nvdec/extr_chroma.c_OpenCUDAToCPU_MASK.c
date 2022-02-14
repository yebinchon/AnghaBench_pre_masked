
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_chroma; } ;
struct TYPE_8__ {TYPE_2__ video; } ;
struct TYPE_9__ {scalar_t__ i_chroma; } ;
struct TYPE_6__ {TYPE_4__ video; } ;
struct TYPE_10__ {int pf_video_filter; TYPE_3__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_5__ filter_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0( vlc_object_t *VAR_9 )
{
    filter_t *VAR_10 = (filter_t *)VAR_9;

    if ( !( ( VAR_10->fmt_in.video.i_chroma == VAR_2 &&
              VAR_10->fmt_out.video.i_chroma == VAR_1 ) ||
            ( VAR_10->fmt_in.video.i_chroma == VAR_3 &&
              VAR_10->fmt_out.video.i_chroma == VAR_5 ) ||
            ( VAR_10->fmt_in.video.i_chroma == VAR_4 &&
              VAR_10->fmt_out.video.i_chroma == VAR_6 )
           ) )
        return VAR_7;

    VAR_10->pf_video_filter = VAR_0;

    return VAR_8;
}
