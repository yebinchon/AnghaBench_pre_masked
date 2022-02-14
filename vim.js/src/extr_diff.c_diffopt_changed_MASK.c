
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_diff_invalid; struct TYPE_3__* tp_next; } ;
typedef TYPE_1__ tabpage_T ;
typedef int linenr_T ;
typedef char char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (char**) ;
 char* VAR_13 ;

int
FUNC_5()
{
    char_u *VAR_14;
    int VAR_15 = 6;
    int VAR_16 = 0;
    int VAR_17 = 2;
    tabpage_T *VAR_18;

    VAR_14 = VAR_13;
    while (*VAR_14 != VAR_6)
    {
 if (FUNC_0(VAR_14, "filler", 6) == 0)
 {
     VAR_14 += 6;
     VAR_16 |= VAR_0;
 }
 else if (FUNC_0(VAR_14, "context:", 8) == 0 && FUNC_1(VAR_14[8]))
 {
     VAR_14 += 8;
     VAR_15 = FUNC_4(&VAR_14);
 }
 else if (FUNC_0(VAR_14, "icase", 5) == 0)
 {
     VAR_14 += 5;
     VAR_16 |= VAR_2;
 }
 else if (FUNC_0(VAR_14, "iwhite", 6) == 0)
 {
     VAR_14 += 6;
     VAR_16 |= VAR_3;
 }
 else if (FUNC_0(VAR_14, "horizontal", 10) == 0)
 {
     VAR_14 += 10;
     VAR_16 |= VAR_1;
 }
 else if (FUNC_0(VAR_14, "vertical", 8) == 0)
 {
     VAR_14 += 8;
     VAR_16 |= VAR_4;
 }
 else if (FUNC_0(VAR_14, "foldcolumn:", 11) == 0 && FUNC_1(VAR_14[11]))
 {
     VAR_14 += 11;
     VAR_17 = FUNC_4(&VAR_14);
 }
 if (*VAR_14 != ',' && *VAR_14 != VAR_6)
     return VAR_5;
 if (*VAR_14 == ',')
     ++VAR_14;
    }


    if ((VAR_16 & VAR_1) && (VAR_16 & VAR_4))
 return VAR_5;


    if (VAR_10 != VAR_16)
 for (VAR_18 = VAR_12; VAR_18 != ((void*)0); VAR_18 = VAR_18->tp_next)
     VAR_18->tp_diff_invalid = VAR_8;

    VAR_10 = VAR_16;
    VAR_9 = VAR_15;
    VAR_11 = VAR_17;

    FUNC_3(VAR_8);



    FUNC_2((linenr_T)0, 0L);

    return VAR_7;
}
