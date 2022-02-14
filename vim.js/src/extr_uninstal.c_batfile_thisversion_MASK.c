
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_7(char *VAR_4)
{
    FILE *VAR_5;
    char VAR_6[VAR_0];
    char *VAR_7;
    int VAR_8 = FUNC_5(VAR_3);
    int VAR_9 = VAR_1;

    VAR_5 = FUNC_2(VAR_4, "r");
    if (VAR_5 != ((void*)0))
    {
 while (FUNC_1(VAR_6, VAR_0, VAR_5) != ((void*)0))
 {
     for (VAR_7 = VAR_6; *VAR_7 != 0; ++VAR_7)

  if (FUNC_6(VAR_7, VAR_3, VAR_8) == 0
   && !FUNC_4(VAR_7[VAR_8])
   && !FUNC_3(VAR_7[VAR_8]))
  {
      VAR_9 = VAR_2;
      break;
  }
     if (VAR_9)
  break;
 }
 FUNC_0(VAR_5);
    }
    return VAR_9;
}
