
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* anw; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_8__ {int i_height; int i_width; } ;
struct TYPE_10__ {int i_pic_count; int i_android_hal; TYPE_2__ fmt; int p_surface; } ;
typedef TYPE_4__ android_window ;
struct TYPE_7__ {int (* setBuffersGeometry ) (int ,int ,int ,int ) ;} ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(vout_display_sys_t *VAR_0,
                                  android_window *VAR_1)
{
    VAR_1->i_pic_count = 1;

    if (!VAR_0->anw->setBuffersGeometry)
        return 0;
    return VAR_0->anw->setBuffersGeometry(VAR_1->p_surface,
                                        VAR_1->fmt.i_width,
                                        VAR_1->fmt.i_height,
                                        VAR_1->i_android_hal);
}
