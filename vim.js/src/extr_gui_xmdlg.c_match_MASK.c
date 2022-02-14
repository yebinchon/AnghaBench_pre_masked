
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum ListSpecifier { ____Placeholder_ListSpecifier } ListSpecifier ;
struct TYPE_4__ {char** sel; int in_pixels; } ;
typedef TYPE_1__ SharedFontSelData ;
typedef int Boolean ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 char* VAR_2 ;

__attribute__((used)) static Boolean
FUNC_6(SharedFontSelData *VAR_3, enum ListSpecifier VAR_4, int VAR_5)
{
    char VAR_6[VAR_0];



    if (!VAR_3->sel[VAR_4] || !FUNC_4(VAR_3->sel[VAR_4], VAR_2))
 return VAR_1;


    switch (VAR_4)
    {
 case 131:
     FUNC_0(FUNC_1(VAR_3, VAR_5), VAR_6);
     break;

 case 130:
     FUNC_2(FUNC_1(VAR_3, VAR_5), VAR_6);
     break;

 case 128:
     FUNC_5(FUNC_1(VAR_3, VAR_5), VAR_6);
     break;

 case 129:
     FUNC_3(FUNC_1(VAR_3, VAR_5), VAR_6, VAR_3->in_pixels);
     break;
 default:
     ;
    }



    return !FUNC_4(VAR_6, VAR_3->sel[VAR_4]);
}
