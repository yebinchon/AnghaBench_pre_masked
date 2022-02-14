
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__**,scalar_t__*,int,char*) ;
 int FUNC_4 (scalar_t__**) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_5()
{
    char_u *VAR_10;
    char_u *VAR_11;
    char_u VAR_12[VAR_1];
    int VAR_13;

    VAR_8 = 0;
    VAR_9 = 9999;

    for (VAR_10 = VAR_7; *VAR_10 != VAR_2; )
    {
 FUNC_3(&VAR_10, VAR_12, VAR_1, ",");

 VAR_13 = 0;
 if (FUNC_2(*VAR_12))
 {
     VAR_11 = VAR_12;
     VAR_9 = FUNC_4(&VAR_11);
     if (*VAR_11 != VAR_2 && !FUNC_2(*VAR_11))
  VAR_13 = -1;
 }
 else if (FUNC_0(VAR_12, "best") == 0)
     VAR_13 = VAR_4;
 else if (FUNC_0(VAR_12, "fast") == 0)
     VAR_13 = VAR_6;
 else if (FUNC_0(VAR_12, "double") == 0)
     VAR_13 = VAR_5;
 else if (FUNC_1(VAR_12, "expr:", 5) != 0
  && FUNC_1(VAR_12, "file:", 5) != 0)
     VAR_13 = -1;

 if (VAR_13 == -1 || (VAR_8 != 0 && VAR_13 != 0))
 {
     VAR_8 = VAR_4;
     VAR_9 = 9999;
     return VAR_0;
 }
 if (VAR_13 != 0)
     VAR_8 = VAR_13;
    }

    if (VAR_8 == 0)
 VAR_8 = VAR_4;

    return VAR_3;
}
