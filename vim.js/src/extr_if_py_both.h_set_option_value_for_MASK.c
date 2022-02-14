
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win_T ;
typedef int tabpage_T ;
typedef int char_u ;
typedef int buf_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;



 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int,int *,int) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,int **,int *,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(
 char_u *VAR_3,
 int VAR_4,
 char_u *VAR_5,
 int VAR_6,
 int VAR_7,
 void *VAR_8)
{
    win_T *VAR_9 = ((void*)0);
    tabpage_T *VAR_10 = ((void*)0);
    buf_T *VAR_11 = ((void*)0);
    int VAR_12 = 0;

    FUNC_3();
    switch (VAR_7)
    {
 case 128:
     if (FUNC_8(&VAR_9, &VAR_10, (win_T *)VAR_8,
         FUNC_9((win_T *)VAR_8), VAR_1) == VAR_0)
     {
  if (FUNC_2())
      return -1;
  FUNC_1(FUNC_0("problem while switching windows"));
  return -1;
     }
     VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
     FUNC_5(VAR_9, VAR_10, VAR_2);
     break;
 case 130:
     FUNC_7(&VAR_11, (buf_T *)VAR_8);
     VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
     FUNC_4(VAR_11);
     break;
 case 129:
     VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
     break;
    }
    if (VAR_12 == VAR_0)
 return -1;
    return FUNC_2();
}
