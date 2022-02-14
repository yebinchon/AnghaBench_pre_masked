
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

void *FUNC_3(void *VAR_0, const char *VAR_1)
{
    char VAR_2[FUNC_2(VAR_1) + 2];
    VAR_2[0] = '_';
    FUNC_1(VAR_2 + 1, VAR_1);
    return FUNC_0( VAR_0, VAR_2 );
}
