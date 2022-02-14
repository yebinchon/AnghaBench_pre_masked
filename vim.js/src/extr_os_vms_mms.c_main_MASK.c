
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmd ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char*,char*,char*) ;

int FUNC_13(int VAR_1, char *VAR_2[])
{
    FILE *VAR_3, *VAR_4;
    char VAR_5[132], VAR_6[VAR_0], *VAR_7, *VAR_8, VAR_9[132], *VAR_10;
    int VAR_11 = 0, VAR_12 = 0;

    VAR_10 = "mms";
    VAR_1--;
    VAR_2++;
    while (VAR_1-- > 0)
    {
 VAR_7 = *VAR_2++;
 if (*VAR_7 == '-')
 {
     switch (*++VAR_7)
     {
  case 'm':
      VAR_10 = ++VAR_7;
      break;
  case 'e':
      if (!*(VAR_8 = ++VAR_7))
      {
   VAR_8 = *VAR_2++;
   VAR_1--;
      }
      break;
  default:
      break;
     }
 }
 else
 {
     if (*VAR_9)
  FUNC_8(VAR_9, " ");
     FUNC_8(VAR_9, VAR_7);
 }
    }
    FUNC_12(VAR_5, sizeof(VAR_5), "%s/output=tmp:errors.vim_tmp %s",
         VAR_10, VAR_9);
    FUNC_11(VAR_5);
    VAR_3 = FUNC_5("tmp:errors.vim_tmp", "r");
    VAR_4 = FUNC_5(VAR_8, "w");
    while (FUNC_4(VAR_6, VAR_0, VAR_3))
    {
 if (!FUNC_7(VAR_6, "%CC-", 4))
 {
     VAR_12++;
     VAR_6[FUNC_9(VAR_6)-1] = '\0';
     VAR_11++;
 }
 else
 {
     if (VAR_12)
     {
  if (FUNC_10(VAR_6, FUNC_0("At line")))
  {
      VAR_12 = 0;
      FUNC_6(VAR_4, "@");
  }
  else
      VAR_6[FUNC_9(VAR_6)-1] = '\0';
     }
 }
 FUNC_6(VAR_4, "%s", VAR_6);
    }
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    while (!FUNC_1("tmp:errors.vim_tmp"))
        ;
    FUNC_2(VAR_11 ? 44 : 1);
    return(0);
}
