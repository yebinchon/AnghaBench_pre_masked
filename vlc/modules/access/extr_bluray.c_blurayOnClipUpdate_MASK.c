
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_15__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_16__ {scalar_t__ clip_application_type; int pl_info_lock; int p_out; int bluray; TYPE_2__* p_clip_info; TYPE_1__* p_pl_info; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_14__ {scalar_t__ application_type; } ;
struct TYPE_17__ {TYPE_3__ clip; } ;
struct TYPE_13__ {int video_stream_count; } ;
struct TYPE_12__ {size_t clip_count; TYPE_2__* clips; } ;
typedef TYPE_6__ CLPI_CL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(demux_t *VAR_3, uint32_t VAR_4)
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;

    FUNC_6(&VAR_5->pl_info_lock);

    VAR_5->p_clip_info = ((void*)0);

    if (VAR_5->p_pl_info && VAR_4 < VAR_5->p_pl_info->clip_count) {

        VAR_5->p_clip_info = &VAR_5->p_pl_info->clips[VAR_4];




        FUNC_0(VAR_5->p_clip_info->video_stream_count >= 1);
    }

    CLPI_CL *VAR_6 = FUNC_2(VAR_5->bluray, VAR_4);
    if(VAR_6 && VAR_6->clip.application_type != VAR_5->clip_application_type)
    {
        if(VAR_5->clip_application_type == VAR_0 ||
           VAR_6->clip.application_type == VAR_0)
            FUNC_4(VAR_3, 0, 0);

        if(VAR_6->clip.application_type == VAR_0)
            FUNC_5(VAR_5->p_out, VAR_2);
        else
            FUNC_5(VAR_5->p_out, VAR_1);
        FUNC_1(VAR_6);
    }

    FUNC_7(&VAR_5->pl_info_lock);

    FUNC_3(VAR_3);
}
