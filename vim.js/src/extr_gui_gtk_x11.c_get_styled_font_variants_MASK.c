
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int font_can_bold; int text_context; int * norm_font; } ;
typedef int PangoFontDescription ;
typedef int PangoFont ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    PangoFontDescription *VAR_3;
    PangoFont *VAR_4;
    PangoFont *VAR_5;

    VAR_2.font_can_bold = VAR_0;

    VAR_4 = FUNC_1(VAR_2.text_context, VAR_2.norm_font);

    if (VAR_4 == ((void*)0))
 return;

    VAR_3 = FUNC_2(VAR_2.norm_font);
    FUNC_4(VAR_3, VAR_1);

    VAR_5 = FUNC_1(VAR_2.text_context, VAR_3);





    if (VAR_5 != ((void*)0))
    {
 VAR_2.font_can_bold = (VAR_5 != VAR_4);
 FUNC_0(VAR_5);
    }

    FUNC_3(VAR_3);
    FUNC_0(VAR_4);
}
