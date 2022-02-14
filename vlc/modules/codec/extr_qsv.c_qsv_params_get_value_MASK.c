
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint64_t ;
typedef int list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const* const) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static uint64_t FUNC_3(const char *const *VAR_0,
                                     const int *VAR_1,
                                     size_t VAR_2, char *VAR_3)
{
    size_t VAR_4 = 0;

    if (FUNC_2(!VAR_3))
        return VAR_1[0];

    VAR_2 /= sizeof(VAR_1[0]);
    for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        if (!FUNC_1(VAR_3, VAR_0[VAR_5])) {
            VAR_4 = VAR_5;
            break;
        }


    FUNC_0(VAR_3);

    return VAR_1[VAR_4];
}
