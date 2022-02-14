
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,...) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, char *VAR_2)
{
    char VAR_3[VAR_0];
    char VAR_4[VAR_0];

    FUNC_0(VAR_1, 3, VAR_4);
    FUNC_0(VAR_1, 5, VAR_3);

    if (!FUNC_1(VAR_3, "normal") && !FUNC_1(VAR_3, "Normal")
         && !FUNC_1(VAR_3, "NORMAL"))
 FUNC_3(VAR_2, VAR_0, "%s %s", VAR_4, VAR_3);
    else
 FUNC_2(VAR_2, VAR_4);

    FUNC_0(VAR_1, 6, VAR_3);

    if (VAR_3[0] != '\0')
 FUNC_3(VAR_4, VAR_0, "%s %s", VAR_2, VAR_3);
    else
 FUNC_2(VAR_4, VAR_2);

    FUNC_0(VAR_1, 4, VAR_3);

    if (!FUNC_1(VAR_3, "o") || !FUNC_1(VAR_3, "O"))
 FUNC_3(VAR_2, VAR_0, "%s oblique", VAR_4);
    else if (!FUNC_1(VAR_3, "i") || !FUNC_1(VAR_3, "I"))
 FUNC_3(VAR_2, VAR_0, "%s italic", VAR_4);

    if (!FUNC_1(VAR_2, " "))
 FUNC_2(VAR_2, "-");
}
