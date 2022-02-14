
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_4(
 char *VAR_0)
{
    char VAR_1[256];
    char *VAR_2;

    if (VAR_0 == ((void*)0))
 return ((void*)0);


    if (FUNC_2("Shift+", VAR_0, 6) == 0)
    {
 VAR_2 = "S-";
 VAR_0 += 6;
    }
    else
 VAR_2 = "";

    if (*VAR_0 == 'F' && FUNC_0(&VAR_0[1]) > 0)
    {
 FUNC_3(VAR_1, sizeof(VAR_1), "<%s%s>", VAR_2, VAR_0);
 return FUNC_1(VAR_1);
    }
    else
 return ((void*)0);
}
