
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ascent; scalar_t__ descent; } ;
typedef TYPE_1__ XFontStruct ;
typedef int XFontSet ;
struct TYPE_4__ {scalar_t__ fontset; scalar_t__ char_ascent; scalar_t__ char_height; scalar_t__ norm_font; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

int
FUNC_2()
{
    {
 XFontStruct *VAR_4 = (XFontStruct *)VAR_2.norm_font;

 VAR_2.char_height = VAR_4->ascent + VAR_4->descent + VAR_3;
 VAR_2.char_ascent = VAR_4->ascent + VAR_3 / 2;
    }
    return VAR_1;
}
