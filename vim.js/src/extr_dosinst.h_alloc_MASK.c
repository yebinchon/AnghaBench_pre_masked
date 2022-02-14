
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void *
FUNC_3(int VAR_0)
{
    char *VAR_1;

    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 == ((void*)0))
    {
 FUNC_2("ERROR: out of memory\n");
 FUNC_0(1);
    }
    return (void *)VAR_1;
}
