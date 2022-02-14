
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum ListSpecifier { ____Placeholder_ListSpecifier } ListSpecifier ;
typedef int char_u ;
typedef int XmString ;
struct TYPE_9__ {int item; } ;
typedef TYPE_1__ XmListCallbackStruct ;
typedef scalar_t__ Widget ;
struct TYPE_10__ {char** sel; char* font_name; int num; int name; int sample; } ;
typedef TYPE_2__ SharedFontSelData ;
typedef int Boolean ;
typedef int Arg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int *,int *,int *,int,int *,int ) ;
 int FUNC_13 (int,TYPE_2__*) ;
 char* FUNC_14 (TYPE_2__*,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*,size_t,int) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 char* VAR_10 ;

__attribute__((used)) static Boolean
FUNC_17(Widget VAR_11,
 SharedFontSelData *VAR_12,
 XmListCallbackStruct *VAR_13,
 enum ListSpecifier VAR_14)
{
    char *VAR_15;

    FUNC_3(VAR_13->item, VAR_9, &VAR_15);

    if (!VAR_12->sel[VAR_14])
 VAR_12->sel[VAR_14] = FUNC_6(VAR_15);
    else
    {
 if (!FUNC_16(VAR_12->sel[VAR_14], VAR_15))
 {

     FUNC_5(VAR_12->sel[VAR_14]);
     VAR_12->sel[VAR_14] = ((void*)0);
     if (VAR_11)
  FUNC_0(VAR_11, VAR_13->item);
 }
 else
 {
     FUNC_5(VAR_12->sel[VAR_14]);
     VAR_12->sel[VAR_14] = FUNC_6(VAR_15);
 }
    }
    FUNC_5(VAR_15);

    FUNC_13(VAR_14, VAR_12);


    if (VAR_12->sel[VAR_0]
     && VAR_12->sel[VAR_3]
     && VAR_12->sel[VAR_5]
     && VAR_12->sel[VAR_4]
     && FUNC_16(VAR_12->sel[VAR_0], VAR_10)
     && FUNC_16(VAR_12->sel[VAR_3], VAR_10)
     && FUNC_16(VAR_12->sel[VAR_5], VAR_10)
     && FUNC_16(VAR_12->sel[VAR_4], VAR_10))
    {
 int VAR_16;

 if (VAR_12->font_name)
     FUNC_5(VAR_12->font_name);
 VAR_12->font_name = ((void*)0);

 for (VAR_16 = 0; VAR_16 < VAR_12->num; VAR_16++)
 {
     if (FUNC_15(VAR_12, VAR_0, VAR_16)
      && FUNC_15(VAR_12, VAR_3, VAR_16)
      && FUNC_15(VAR_12, VAR_5, VAR_16)
      && FUNC_15(VAR_12, VAR_4, VAR_16))
     {
  VAR_12->font_name = FUNC_6(FUNC_14(VAR_12, VAR_16));
  break;
     }
 }

 if (VAR_12->font_name)
 {
     FUNC_4(VAR_12->name, VAR_12->font_name);
     FUNC_11(VAR_12);
 }
 else
     FUNC_12(VAR_7,
      (char_u *)FUNC_9("Error"),
      (char_u *)FUNC_9("Invalid font specification"),
      (char_u *)FUNC_9("&Dismiss"), 1, ((void*)0), VAR_1);

 return VAR_6;
    }
    else
    {
 int VAR_17;
 XmString VAR_18;
 Arg VAR_19[4];
 char *VAR_20 = FUNC_9("no specific match");

 VAR_17 = 0;
 VAR_18 = FUNC_1(VAR_20);
 FUNC_7(VAR_19[VAR_17], VAR_8, VAR_18); ++VAR_17;
 FUNC_8(VAR_12->sample, VAR_19, VAR_17);
 FUNC_10(VAR_12->sample);
 FUNC_4(VAR_12->name, VAR_20);
 FUNC_2(VAR_18);

 return VAR_2;
    }
}
