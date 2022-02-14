
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xcb_visualid_t ;
typedef int xcb_setup_t ;
typedef int xcb_screen_t ;
struct TYPE_6__ {scalar_t__ depth; } ;
typedef TYPE_1__ xcb_depth_t ;
struct TYPE_7__ {scalar_t__ rem; TYPE_1__* data; } ;
typedef TYPE_2__ xcb_depth_iterator_t ;
typedef int video_format_t ;
typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (int const*,TYPE_1__ const*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__ FUNC_3 (int const*) ;

__attribute__((used)) static xcb_visualid_t FUNC_4(const xcb_setup_t *VAR_0,
                                     const xcb_screen_t *VAR_1,
                                     uint8_t *restrict VAR_2,
                                     video_format_t *restrict VAR_3)
{
    xcb_visualid_t VAR_4 = 0;

    *VAR_2 = 0;

    for (xcb_depth_iterator_t VAR_5 = FUNC_3(VAR_1);
         VAR_5.rem > 0;
         FUNC_2(&VAR_5))
    {
        const xcb_depth_t *VAR_6 = VAR_5.data;
        video_format_t VAR_7;
        xcb_visualid_t VAR_8;

        if (VAR_6->depth <= *VAR_2)
            continue;

        FUNC_1(&VAR_7, VAR_3);
        VAR_8 = FUNC_0(VAR_0, VAR_6, &VAR_7);
        if (VAR_8 != 0)
        {
            *VAR_2 = VAR_6->depth;
            *VAR_3 = VAR_7;
            VAR_4 = VAR_8;
        }
    }
    return VAR_4;
}
