
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* p_window; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_14__ {int pixel_size; } ;
typedef TYPE_4__ vlc_chroma_description_t ;
struct TYPE_11__ {unsigned int i_width; int i_chroma; } ;
struct TYPE_15__ {unsigned int i_pic_count; TYPE_1__ fmt; int b_opaque; } ;
typedef TYPE_5__ android_window ;
struct TYPE_12__ {int i_pic_count; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(vout_display_sys_t *VAR_0,
                               android_window *VAR_1,
                               unsigned int VAR_2)
{
    if (VAR_2 != 0)
        VAR_1->i_pic_count = VAR_2;

    if (!VAR_1->b_opaque) {
        const vlc_chroma_description_t *VAR_3 =
            FUNC_2( VAR_1->fmt.i_chroma );
        if (VAR_3)
        {
            FUNC_1(VAR_3->pixel_size != 0);

            unsigned VAR_4 = (16 / VAR_3->pixel_size) - 1;
            VAR_1->fmt.i_width = (VAR_1->fmt.i_width + VAR_4) & ~VAR_4;
        }

        if (FUNC_0(VAR_0, VAR_1) != 0)
            return -1;
    } else {
        VAR_0->p_window->i_pic_count = 31;
    }

    return 0;
}
