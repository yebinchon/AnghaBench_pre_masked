
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    if (FUNC_2(VAR_0, &VAR_1, 12) < 12)
        return 0;
    if (FUNC_1(&VAR_1[0], "FORM", 4) ||
        FUNC_0(&VAR_1[4]) <= 4 ||
        (FUNC_1(&VAR_1[8], "ILBM", 4) && FUNC_1(&VAR_1[8], "PBM ", 4)))
        return 0;
    return 1;
}
