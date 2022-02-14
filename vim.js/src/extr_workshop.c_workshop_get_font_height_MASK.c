
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XmString ;
typedef int * XmFontList ;
typedef int XFontStruct ;
struct TYPE_2__ {scalar_t__ norm_font; } ;
typedef scalar_t__ Dimension ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

int
FUNC_7()
{
    XmFontList VAR_3;
    XmString VAR_4;
    Dimension VAR_5;
    Dimension VAR_6;







    VAR_3 = FUNC_5((XFontStruct *)VAR_2.norm_font);
    VAR_6 = 0;
    if (VAR_3 != ((void*)0))
    {
 VAR_4 = FUNC_2("A");
 FUNC_3(VAR_3, VAR_4, &VAR_5, &VAR_6);
 FUNC_4(VAR_4);
 FUNC_1(VAR_3);
    }

    return (int)VAR_6;
}
