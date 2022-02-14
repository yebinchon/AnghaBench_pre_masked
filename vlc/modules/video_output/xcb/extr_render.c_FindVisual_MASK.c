
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xcb_visualid_t ;
typedef int xcb_setup_t ;
typedef int xcb_screen_t ;
typedef int xcb_render_query_pict_formats_reply_t ;
struct TYPE_8__ {scalar_t__ format; int visual; } ;
typedef TYPE_1__ xcb_render_pictvisual_t ;
struct TYPE_9__ {scalar_t__ rem; TYPE_1__* data; } ;
typedef TYPE_2__ xcb_render_pictvisual_iterator_t ;
typedef int xcb_render_pictscreen_t ;
typedef scalar_t__ xcb_render_pictformat_t ;
typedef int xcb_render_pictdepth_t ;
struct TYPE_10__ {scalar_t__ rem; int * data; } ;
typedef TYPE_3__ xcb_render_pictdepth_iterator_t ;


 int * FUNC_0 (int const*,int const*,int const*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ FUNC_2 (int const*) ;
 TYPE_3__ FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static xcb_visualid_t
FUNC_5(const xcb_setup_t *VAR_0, const xcb_screen_t *VAR_1,
           const xcb_render_query_pict_formats_reply_t *VAR_2,
           xcb_render_pictformat_t VAR_3)
{
    const xcb_render_pictscreen_t *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_4 == ((void*)0))
        return 0;

    xcb_render_pictdepth_iterator_t VAR_5 =
        FUNC_3(VAR_4);

    while (VAR_5.rem > 0) {
        const xcb_render_pictdepth_t *VAR_6 = VAR_5.data;
        xcb_render_pictvisual_iterator_t VAR_7 =
            FUNC_2(VAR_6);

        while (VAR_7.rem > 0) {
            const xcb_render_pictvisual_t *VAR_8 = VAR_7.data;

            if (VAR_8->format == VAR_3)
                return VAR_8->visual;

            FUNC_4(&VAR_7);
        }
        FUNC_1(&VAR_5);
    }
    return 0;
}
