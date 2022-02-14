
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_5__ {int text_context; int in_use; } ;
struct TYPE_4__ {scalar_t__ vc_type; } ;
typedef int PangoFontDescription ;
typedef int PangoFont ;
typedef int * GuiFont ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (TYPE_1__*,int *,int *) ;
 int FUNC_9 (int *) ;

GuiFont
FUNC_10(char_u *VAR_5, int VAR_6)
{
    PangoFontDescription *VAR_7;


    if (!VAR_3.in_use || VAR_5 == ((void*)0))
 return ((void*)0);

    if (VAR_4.vc_type != VAR_0)
    {
 char_u *VAR_8;

 VAR_8 = FUNC_8(&VAR_4, VAR_5, ((void*)0));
 if (VAR_8 != ((void*)0))
 {
     VAR_7 = FUNC_5((const char *)VAR_8);
     FUNC_9(VAR_8);
 }
 else
     VAR_7 = ((void*)0);
    }
    else
 VAR_7 = FUNC_5((const char *)VAR_5);

    if (VAR_7 != ((void*)0))
    {
 PangoFont *VAR_9;


 if (FUNC_6(VAR_7) <= 0)
     FUNC_7(VAR_7, 10 * VAR_1);

 VAR_9 = FUNC_3(VAR_3.text_context, VAR_7);

 if (VAR_9 == ((void*)0))
 {
     FUNC_4(VAR_7);
     VAR_7 = ((void*)0);
 }
 else
     FUNC_2(VAR_9);
    }

    if (VAR_7 == ((void*)0))
    {
 if (VAR_6)
     FUNC_0(FUNC_1((char *)VAR_2), VAR_5);
 return ((void*)0);
    }

    return VAR_7;
}
