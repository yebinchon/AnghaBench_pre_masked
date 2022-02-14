
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(size_t *VAR_0, const char *VAR_1)
{

    if (!VAR_1)
        VAR_1 = "unknown";
    size_t VAR_2 = FUNC_3(VAR_1);

    size_t VAR_3 = 0;
    size_t VAR_4 = 8 + 4 + VAR_2 + 4;
    char *VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_5, "OpusTags", 8);
    FUNC_0(VAR_5 + 8, VAR_2);
    FUNC_2(VAR_5 + 12, VAR_1, VAR_2);
    FUNC_0(VAR_5 + 12 + VAR_2, VAR_3);

    *VAR_0 = VAR_4;
    return VAR_5;
}
