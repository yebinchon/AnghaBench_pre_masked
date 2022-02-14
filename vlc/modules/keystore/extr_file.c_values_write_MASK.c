
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 char** VAR_3 ;
 char* FUNC_2 (char const* const) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_4, const char *const VAR_5[VAR_0])
{
    for (unsigned int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        if (!VAR_5[VAR_6])
            continue;
        char *VAR_7 = FUNC_2(VAR_5[VAR_6]);
        if (!VAR_7)
            return VAR_1;
        const char *VAR_8 = "";
        for (unsigned int VAR_9 = VAR_6 + 1; VAR_9 < VAR_0; ++VAR_9)
        {
            if (VAR_5[VAR_9])
            {
                VAR_8 = ",";
                break;
            }
        }
        if (FUNC_0(VAR_4, "%s:%s%s", VAR_3[VAR_6], VAR_7, VAR_8) < 0)
        {
            FUNC_1(VAR_7);
            return VAR_1;
        }
        FUNC_1(VAR_7);
    }

    return VAR_2;
}
