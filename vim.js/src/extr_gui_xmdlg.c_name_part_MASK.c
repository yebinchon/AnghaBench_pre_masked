
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;

__attribute__((used)) static void
FUNC_2(char *VAR_2, char *VAR_3)
{
    char VAR_4[VAR_1];
    char VAR_5[VAR_1];

    FUNC_0(VAR_2, 2, VAR_4);
    FUNC_0(VAR_2, 1, VAR_5);

    if (*VAR_5 != VAR_0)
 FUNC_1(VAR_3, VAR_1, "%s (%s)", VAR_4, VAR_5);
    else
 FUNC_1(VAR_3, VAR_1, "%s", VAR_4);
}
