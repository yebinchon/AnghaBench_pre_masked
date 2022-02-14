
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gunichar ;
struct TYPE_2__ {int text_context; } ;
typedef int PangoFontDescription ;
typedef int PangoFont ;
typedef int PangoCoverage ;


 int VAR_0 ;
 unsigned int FUNC_0 (char const* const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (char const* const) ;

__attribute__((used)) static int
FUNC_7(PangoFontDescription *VAR_3)
{
    static const char * const VAR_4[] =
 {"zh_CN", "zh_TW", "zh_HK", "ja", "ko"};

    PangoFont *VAR_5;
    unsigned VAR_6;
    int VAR_7 = VAR_0;

    VAR_5 = FUNC_2(VAR_2.text_context, VAR_3);

    if (VAR_5 == ((void*)0))
 return VAR_0;

    for (VAR_6 = 0; !VAR_7 && VAR_6 < FUNC_0(VAR_4); ++VAR_6)
    {
 PangoCoverage *VAR_8;
 gunichar VAR_9;

 VAR_8 = FUNC_5(
  VAR_5, FUNC_6(VAR_4[VAR_6]));

 if (VAR_8 != ((void*)0))
 {
     VAR_9 = (VAR_4[VAR_6][0] == 'k') ? 0xAC00 : 0x4E00;
     VAR_7 = (FUNC_3(VAR_8, VAR_9) == VAR_1);
     FUNC_4(VAR_8);
 }
    }

    FUNC_1(VAR_5);

    return VAR_7;
}
