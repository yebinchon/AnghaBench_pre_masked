
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {scalar_t__ rsrc_tooltip_bg_name; void* tooltip_bg_pixel; scalar_t__ rsrc_tooltip_fg_name; void* tooltip_fg_pixel; scalar_t__ rsrc_scroll_bg_name; void* scroll_bg_pixel; scalar_t__ rsrc_scroll_fg_name; void* scroll_fg_pixel; scalar_t__ rsrc_menu_bg_name; void* menu_bg_pixel; scalar_t__ rsrc_menu_fg_name; void* menu_fg_pixel; scalar_t__ in_use; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (int *) ;

void
FUNC_1()
{




    if (VAR_0.in_use)
    {
 VAR_0.menu_fg_pixel = FUNC_0((char_u *)VAR_0.rsrc_menu_fg_name);
 VAR_0.menu_bg_pixel = FUNC_0((char_u *)VAR_0.rsrc_menu_bg_name);
 VAR_0.scroll_fg_pixel = FUNC_0((char_u *)VAR_0.rsrc_scroll_fg_name);
 VAR_0.scroll_bg_pixel = FUNC_0((char_u *)VAR_0.rsrc_scroll_bg_name);




    }
}
