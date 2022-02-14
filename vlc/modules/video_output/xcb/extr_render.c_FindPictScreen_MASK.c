
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_setup_t ;
typedef int xcb_screen_t ;
struct TYPE_7__ {scalar_t__ rem; int const* data; } ;
typedef TYPE_1__ xcb_screen_iterator_t ;
typedef int xcb_render_query_pict_formats_reply_t ;
typedef int xcb_render_pictscreen_t ;
struct TYPE_8__ {scalar_t__ rem; int const* data; } ;
typedef TYPE_2__ xcb_render_pictscreen_iterator_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__ FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ FUNC_5 (int const*) ;

__attribute__((used)) static const xcb_render_pictscreen_t *
FUNC_6(const xcb_setup_t *VAR_0, const xcb_screen_t *VAR_1,
               const xcb_render_query_pict_formats_reply_t *VAR_2)
{
    xcb_screen_iterator_t VAR_3 = FUNC_5(VAR_0);
    unsigned VAR_4 = 0;

    while (VAR_3.data != VAR_1) {
        FUNC_0(VAR_3.rem > 0);
        VAR_4++;
        FUNC_4(&VAR_3);
    }

    xcb_render_pictscreen_iterator_t VAR_5 =
        FUNC_3(VAR_2);

    while (VAR_4 > 0) {
        if (FUNC_1(VAR_5.rem == 0))
            return ((void*)0);

        VAR_4--;
        FUNC_2(&VAR_5);
    }
    return VAR_5.data;
}
