
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XmString ;
typedef int XmFontList ;
typedef int XFontStruct ;
struct TYPE_3__ {int old_list; int * old; int sample; int font_name; int dialog; } ;
typedef TYPE_1__ SharedFontSelData ;
typedef int Display ;
typedef int Arg ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(SharedFontSelData *VAR_2)
{
    Arg VAR_3[2];
    int VAR_4;
    XFontStruct * VAR_5;
    XmFontList VAR_6;
    Display * VAR_7;
    XmString VAR_8;

    VAR_7 = FUNC_5(VAR_2->dialog);
    VAR_5 = FUNC_1(VAR_7, VAR_2->font_name);
    VAR_6 = FUNC_8(VAR_5);

    VAR_4 = 0;
    VAR_8 = FUNC_3("AaBbZzYy 0123456789");
    FUNC_6(VAR_3[VAR_4], VAR_1, VAR_8); VAR_4++;
    FUNC_6(VAR_3[VAR_4], VAR_0, VAR_6); VAR_4++;

    FUNC_7(VAR_2->sample, VAR_3, VAR_4);
    FUNC_4(VAR_8);

    if (VAR_2->old)
    {
 FUNC_0(VAR_7, VAR_2->old);
 FUNC_2(VAR_2->old_list);
    }
    VAR_2->old = VAR_5;
    VAR_2->old_list = VAR_6;
}
