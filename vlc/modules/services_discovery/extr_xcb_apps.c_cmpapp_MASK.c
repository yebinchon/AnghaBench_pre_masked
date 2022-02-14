
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xcb_window_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
    xcb_window_t VAR_2 = *(xcb_window_t *)VAR_0;
    xcb_window_t VAR_3 = *(xcb_window_t *)VAR_1;

    if (VAR_2 > VAR_3)
        return 1;
    if (VAR_2 < VAR_3)
        return -1;
    return 0;
}
