
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;

int FUNC_3( const char *VAR_0, mode_t VAR_1 )
{
    wchar_t *VAR_2 = FUNC_2 (VAR_0);
    if (VAR_2 == ((void*)0))
        return -1;

    int VAR_3 = FUNC_0 (VAR_2);
    FUNC_1 (VAR_2);
    (void) VAR_1;
    return VAR_3;
}
