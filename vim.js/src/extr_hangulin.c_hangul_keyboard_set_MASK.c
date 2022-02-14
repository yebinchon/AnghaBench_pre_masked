
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;

void
FUNC_2()
{
    int VAR_1;
    char *VAR_2;

    FUNC_1();

    if ((VAR_2 = FUNC_0("VIM_KEYBOARD")) == ((void*)0))
 VAR_2 = FUNC_0("HANGUL_KEYBOARD_TYPE");

    if (VAR_2)
    {
 if (*VAR_2 == '2')
     VAR_1 = 2;
 else
     VAR_1 = 3;
 VAR_0 = VAR_1;
    }
}
