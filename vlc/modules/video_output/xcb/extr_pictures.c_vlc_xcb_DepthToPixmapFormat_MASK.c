
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_4__ {scalar_t__ depth; scalar_t__ bits_per_pixel; int scanline_pad; } ;
typedef TYPE_1__ xcb_format_t ;
typedef scalar_t__ uint_fast8_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

const xcb_format_t *FUNC_3(const xcb_setup_t *VAR_0,
                                                uint_fast8_t VAR_1)
{
    const xcb_format_t *VAR_2 = FUNC_1(VAR_0);

    for (int VAR_3 = FUNC_2(VAR_0); VAR_3 > 0; VAR_3--, VAR_2++)
        if (VAR_2->depth == VAR_1)
        {
            if (FUNC_0(VAR_2->bits_per_pixel < VAR_1
                      || (VAR_2->scanline_pad % VAR_2->bits_per_pixel)))
                return ((void*)0);
            return VAR_2;
        }
    return ((void*)0);
}
