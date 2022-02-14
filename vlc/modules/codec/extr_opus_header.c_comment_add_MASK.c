
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(char **VAR_0, size_t *VAR_1, const char *VAR_2,
                       const char *VAR_3)
{
    char *VAR_4 = *VAR_0;
    uint32_t VAR_5 = FUNC_0(VAR_4 + 8);
    size_t VAR_6 = FUNC_0(VAR_4 + 8 + 4 + VAR_5);
    size_t VAR_7 = (VAR_2 ? FUNC_4(VAR_2) : 0);
    size_t VAR_8 = FUNC_4(VAR_3);
    size_t VAR_9 = (*VAR_1) + 4 + VAR_7 + VAR_8;

    char *VAR_10 = FUNC_3(VAR_4, VAR_9);
    if (VAR_10 == ((void*)0))
        return 1;
    VAR_4 = VAR_10;

    FUNC_1(VAR_4 + *VAR_1, VAR_7 + VAR_8);
    if (VAR_2) FUNC_2(VAR_4 + *VAR_1 + 4, VAR_2, VAR_7);
    FUNC_2(VAR_4 + *VAR_1 + 4 + VAR_7, VAR_3, VAR_8);
    FUNC_1(VAR_4 + 8 + 4 + VAR_5, VAR_6 + 1);
    *VAR_0 = VAR_4;
    *VAR_1 = VAR_9;
    return 0;
}
