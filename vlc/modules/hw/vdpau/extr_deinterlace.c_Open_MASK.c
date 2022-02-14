
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int i_frame_rate; } ;
struct TYPE_9__ {TYPE_6__ video; } ;
struct TYPE_12__ {scalar_t__ i_chroma; } ;
struct TYPE_8__ {TYPE_5__ video; } ;
struct TYPE_10__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; int pf_video_filter; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_11__ {int last_pts; } ;
typedef TYPE_4__ filter_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_3(vlc_object_t *VAR_8)
{
    filter_t *VAR_9 = (filter_t *)VAR_8;

    if (VAR_9->fmt_in.video.i_chroma != VAR_1
     && VAR_9->fmt_in.video.i_chroma != VAR_2
     && VAR_9->fmt_in.video.i_chroma != VAR_3)
        return VAR_4;
    if (!FUNC_2(&VAR_9->fmt_in.video, &VAR_9->fmt_out.video))
        return VAR_4;

    filter_sys_t *VAR_10 = FUNC_0(sizeof (*VAR_10));
    if (FUNC_1(VAR_10 == ((void*)0)))
        return VAR_5;




    VAR_10->last_pts = VAR_7;

    VAR_9->pf_video_filter = VAR_0;
    VAR_9->p_sys = VAR_10;
    VAR_9->fmt_out.video.i_frame_rate *= 2;
    return VAR_6;
}
