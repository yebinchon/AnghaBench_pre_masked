
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(char_u *VAR_12, BY_HANDLE_FILE_INFORMATION *VAR_13)
{
    HANDLE VAR_14;
    int VAR_15 = VAR_4;
 VAR_14 = FUNC_1(VAR_12,
      VAR_8,
      VAR_6 | VAR_7,
      ((void*)0),
      VAR_10,
      VAR_5,
      ((void*)0));

    if (VAR_14 != VAR_9)
    {
 if (FUNC_4(VAR_14, VAR_13) != 0)
     VAR_15 = VAR_3;
 else
     VAR_15 = VAR_2;
 FUNC_0(VAR_14);
    }




    return VAR_15;
}
