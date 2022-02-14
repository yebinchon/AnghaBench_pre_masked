
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* gpointer ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(gpointer VAR_1, gpointer VAR_2, gpointer VAR_3)
{
    const char **VAR_4 = VAR_3;

    const char *VAR_5 = VAR_1;
    int VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 == -1 || VAR_6 >= VAR_0)
        return;

    VAR_4[VAR_6] = FUNC_1((const char *)VAR_2);
}
