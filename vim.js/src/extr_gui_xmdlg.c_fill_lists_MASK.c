
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum ListSpecifier { ____Placeholder_ListSpecifier } ListSpecifier ;
typedef int XtPointer ;
typedef int XtCallbackProc ;
typedef int XmString ;
typedef scalar_t__* WidgetList ;
typedef scalar_t__ Widget ;
struct TYPE_5__ {int num; char** sel; scalar_t__* list; int encoding_menu; int encoding_pulldown; int in_pixels; } ;
typedef TYPE_1__ SharedFontSelData ;
typedef scalar_t__ Cardinal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (char*,int ,int ,int ,int ,int ,int,int *) ;
 int FUNC_12 (int ,int ,scalar_t__**,int ,scalar_t__*,int *) ;
 int FUNC_13 (int ,int ,scalar_t__,int *,...) ;
 int FUNC_14 (char**,char*,int*) ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int,int) ;
 int FUNC_18 (int ,char*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (int ,char*) ;
 char* VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_23(enum ListSpecifier VAR_14, SharedFontSelData *VAR_15)
{
    char *VAR_16[VAR_3][VAR_2];
    int VAR_17[VAR_3];
    char VAR_18[VAR_4];
    XmString VAR_19[VAR_2];
    int VAR_20;
    int VAR_21;

    for (VAR_21 = (int)VAR_0; VAR_21 < (int)VAR_3; ++VAR_21)
 VAR_17[VAR_21] = 0;


    if (VAR_14 != VAR_0)
 FUNC_14(VAR_16[VAR_0], VAR_12, &VAR_17[VAR_0]);
    if (VAR_14 != 130)
 FUNC_14(VAR_16[130], VAR_12, &VAR_17[130]);
    if (VAR_14 != 128)
 FUNC_14(VAR_16[128], VAR_12, &VAR_17[128]);
    if (VAR_14 != 129)
 FUNC_14(VAR_16[129], VAR_12, &VAR_17[129]);

    for (VAR_20 = 0; VAR_20 < VAR_15->num && VAR_20 < VAR_2; VAR_20++)
    {
 if (FUNC_19(FUNC_16(VAR_15, VAR_20)))
     continue;

 if (VAR_14 != VAR_0
  && FUNC_17(VAR_15, 130, VAR_20)
  && FUNC_17(VAR_15, 128, VAR_20)
  && FUNC_17(VAR_15, 129, VAR_20))
 {
     FUNC_15(FUNC_16(VAR_15, VAR_20), VAR_18);
     FUNC_14(VAR_16[VAR_0], VAR_18, &VAR_17[VAR_0]);
 }

 if (VAR_14 != 130
  && FUNC_17(VAR_15, VAR_0, VAR_20)
  && FUNC_17(VAR_15, 128, VAR_20)
  && FUNC_17(VAR_15, 129, VAR_20))
 {
     FUNC_18(FUNC_16(VAR_15, VAR_20), VAR_18);
     FUNC_14(VAR_16[130], VAR_18, &VAR_17[130]);
 }

 if (VAR_14 != 128
  && FUNC_17(VAR_15, VAR_0, VAR_20)
  && FUNC_17(VAR_15, 130, VAR_20)
  && FUNC_17(VAR_15, 129, VAR_20))
 {
     FUNC_22(FUNC_16(VAR_15, VAR_20), VAR_18);
     FUNC_14(VAR_16[128], VAR_18, &VAR_17[128]);
 }

 if (VAR_14 != 129
  && FUNC_17(VAR_15, VAR_0, VAR_20)
  && FUNC_17(VAR_15, 130, VAR_20)
  && FUNC_17(VAR_15, 128, VAR_20))
 {
     FUNC_20(FUNC_16(VAR_15, VAR_20), VAR_18, VAR_15->in_pixels);
     FUNC_14(VAR_16[129], VAR_18, &VAR_17[129]);
 }
    }





    if (VAR_14 != VAR_0)
    {
 Cardinal VAR_22;
 WidgetList VAR_23;
 Widget VAR_24 = 0;


 FUNC_12(VAR_15->encoding_pulldown,
  VAR_6, &VAR_23,
  VAR_9, &VAR_22,
  ((void*)0));

 for (VAR_20 = 0; VAR_20 < VAR_17[VAR_0]; ++VAR_20)
 {
     Widget VAR_25;

     VAR_19[VAR_20] = FUNC_4(VAR_16[VAR_0][VAR_20]);

     if (VAR_20 < (int)VAR_22)
     {

  FUNC_13(VAR_23[VAR_20],
   VAR_7, VAR_19[VAR_20],
   &VAR_10, VAR_20,
   ((void*)0));
  VAR_25 = VAR_23[VAR_20];
     }
     else
     {

  VAR_25 = FUNC_11("button",
   VAR_13,
   VAR_15->encoding_pulldown,
   VAR_7, VAR_19[VAR_20],
   VAR_10, VAR_20,
   ((void*)0));
  FUNC_6(VAR_25, VAR_5,
   (XtCallbackProc) VAR_11, (XtPointer) VAR_15);
  FUNC_9(VAR_25);
     }

     if (VAR_15->sel[VAR_0])
     {
  if (!FUNC_21(VAR_15->sel[VAR_0], VAR_16[VAR_0][VAR_20]))
      VAR_24 = VAR_25;
     }
     FUNC_8(VAR_16[VAR_0][VAR_20]);
 }



 for (VAR_20 = VAR_17[VAR_0]; VAR_20 < (int)VAR_22; ++VAR_20)
 {
     FUNC_10(VAR_23[VAR_20]);
     FUNC_7(VAR_23[VAR_20]);
 }



 if (VAR_24)
 {
     FUNC_13(VAR_15->encoding_menu,
      VAR_8, VAR_24,
      ((void*)0));
 }

 for (VAR_20 = 0; VAR_20 < VAR_17[VAR_0]; ++VAR_20)
     FUNC_5(VAR_19[VAR_20]);
    }




    for (VAR_21 = (int)130; VAR_21 < (int)VAR_3; ++VAR_21)
    {
 Widget VAR_26;

 if (VAR_14 == (enum ListSpecifier)VAR_21)
     continue;

 switch ((enum ListSpecifier)VAR_21)
 {
     case 130:
  VAR_26 = VAR_15->list[130];
  break;
     case 128:
  VAR_26 = VAR_15->list[128];
  break;
     case 129:
  VAR_26 = VAR_15->list[129];
  break;
     default:
  VAR_26 = (Widget)0;
 }

 for (VAR_20 = 0; VAR_20 < VAR_17[VAR_21]; ++VAR_20)
 {
     VAR_19[VAR_20] = FUNC_4(VAR_16[VAR_21][VAR_20]);
     FUNC_8(VAR_16[VAR_21][VAR_20]);
 }
 FUNC_1(VAR_26);
 FUNC_0(VAR_26, VAR_19, VAR_17[VAR_21], 1);
 if (VAR_15->sel[VAR_21])
 {
     FUNC_5(VAR_19[0]);
     VAR_19[0] = FUNC_4(VAR_15->sel[VAR_21]);
     FUNC_2(VAR_26, VAR_19[0], VAR_1);
     FUNC_3(VAR_26, VAR_19[0]);
 }
 for (VAR_20 = 0; VAR_20 < VAR_17[VAR_21]; ++VAR_20)
     FUNC_5(VAR_19[VAR_20]);
    }
}
