
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int i_y; int i_x; } ;
typedef TYPE_2__ vlc_mouse_t ;
struct TYPE_13__ {int i_visible_height; int i_visible_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_11__ {TYPE_3__ video; } ;
struct TYPE_14__ {TYPE_5__* p_sys; TYPE_1__ fmt_out; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_15__ {int (* convert ) (int *,int *,int ,int ,int ,int ) ;} ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(filter_t *VAR_1, vlc_mouse_t *VAR_2,
                 const vlc_mouse_t *VAR_3, const vlc_mouse_t *VAR_4)
{
    FUNC_0( VAR_3 );

    const video_format_t *VAR_5 = &VAR_1->fmt_out.video;
    const filter_sys_t *VAR_6 = VAR_1->p_sys;

    *VAR_2 = *VAR_4;
    VAR_6->convert(&VAR_2->i_x, &VAR_2->i_y,
                 VAR_5->i_visible_width, VAR_5->i_visible_height,
                 VAR_2->i_x, VAR_2->i_y);
    return VAR_0;
}
