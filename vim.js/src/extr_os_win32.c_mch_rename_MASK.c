
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int WCHAR ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*,int ,char*) ;
 int VAR_4 ;
 int FUNC_7 (char const*,char const*) ;
 char VAR_5 ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char const*,char const*) ;
 int FUNC_14 (int *) ;

int
FUNC_15(
    const char *VAR_8,
    const char *VAR_9)
{
    char VAR_10[VAR_6+1];
    char VAR_11[VAR_6+1];
    char *VAR_12;
    HANDLE VAR_13;
    if (!FUNC_11())
    {
 VAR_12 = (char *)FUNC_10((char_u *)VAR_8);
 if (FUNC_8(VAR_12) < 8 || VAR_12[6] != '~')
     return FUNC_13(VAR_8, VAR_9);
    }



    if (FUNC_4(VAR_9, VAR_6, VAR_11, &VAR_12) == 0
     || VAR_12 == ((void*)0))
 return -1;
    *VAR_12 = VAR_5;


    if (FUNC_6(VAR_11, "VIM", 0, VAR_10) == 0)
 return -2;


    if (!FUNC_2(VAR_10))
 return -3;


    if (!FUNC_7(VAR_8, VAR_10))
 return -4;
    if ((VAR_13 = FUNC_1(VAR_8, VAR_3, 0, ((void*)0), VAR_0,
      VAR_2, ((void*)0))) == VAR_4)
 return -5;
    if (!FUNC_0(VAR_13))
 return -6;


    if (!FUNC_7(VAR_10, VAR_9))
    {


 (void)FUNC_7(VAR_10, VAR_8);

 return -7;
    }


    FUNC_2(VAR_10);


    if (!FUNC_2(VAR_8))
 return -8;

    return 0;
}
