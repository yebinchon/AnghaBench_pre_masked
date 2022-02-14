
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    if (FUNC_2(VAR_0, &VAR_1, 18) < 18)
        return 0;
    if (FUNC_1(VAR_1, "BM", 2) &&
        FUNC_1(VAR_1, "BA", 2) &&
        FUNC_1(VAR_1, "CI", 2) &&
        FUNC_1(VAR_1, "CP", 2) &&
        FUNC_1(VAR_1, "IC", 2) &&
        FUNC_1(VAR_1, "PT", 2))
        return 0;
    uint32_t VAR_2 = FUNC_0(&VAR_1[2]);
    uint32_t VAR_3 = FUNC_0(&VAR_1[10]);
    uint32_t VAR_4 = FUNC_0(&VAR_1[14]);
    if (VAR_2 != 14 && VAR_2 != 14 + VAR_4 &&
        VAR_2 <= VAR_3)
        return 0;
    if (VAR_3 < VAR_4 + 14)
        return 0;
    if (VAR_4 != 12 && VAR_4 < 40)
        return 0;
    return 1;
}
