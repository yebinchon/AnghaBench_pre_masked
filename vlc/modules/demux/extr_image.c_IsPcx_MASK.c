
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_2(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    if (FUNC_1(VAR_0, &VAR_1, 66) < 66)
        return 0;
    if (VAR_1[0] != 0x0A ||
        (VAR_1[1] != 0x00 && VAR_1[1] != 0x02 &&
         VAR_1[1] != 0x03 && VAR_1[1] != 0x05) ||
        (VAR_1[2] != 0 && VAR_1[2] != 1) ||
        (VAR_1[3] != 1 && VAR_1[3] != 2 &&
         VAR_1[3] != 4 && VAR_1[3] != 8) ||
        VAR_1[64] != 0 ||
        VAR_1[65] == 0 || VAR_1[65] > 4)
        return 0;
    if (FUNC_0(&VAR_1[4]) > FUNC_0(&VAR_1[8]) ||
        FUNC_0(&VAR_1[6]) > FUNC_0(&VAR_1[10]))
        return 0;
    return 1;
}
