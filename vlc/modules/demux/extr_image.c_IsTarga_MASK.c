
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int const**,int) ;
 scalar_t__ FUNC_5 (int *,int const) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(stream_t *VAR_1)
{



    const uint8_t *VAR_2;
    if (FUNC_4(VAR_1, &VAR_2, 18) < 18)
        return 0;
    if (VAR_2[1] > 1)
        return 0;
    if ((VAR_2[1] != 0 || VAR_2[3 + 4] != 0) &&
        VAR_2[3 + 4] != 8 &&
        VAR_2[3 + 4] != 15 && VAR_2[3 + 4] != 16 &&
        VAR_2[3 + 4] != 24 && VAR_2[3 + 4] != 32)
        return 0;
    if ((VAR_2[2] > 3 && VAR_2[2] < 9) || VAR_2[2] > 11)
        return 0;
    if (FUNC_0(&VAR_2[8 + 4]) <= 0 ||
        FUNC_0(&VAR_2[8 + 6]) <= 0)
        return 0;
    if (VAR_2[8 + 8] != 8 &&
        VAR_2[8 + 8] != 15 && VAR_2[8 + 8] != 16 &&
        VAR_2[8 + 8] != 24 && VAR_2[8 + 8] != 32)
        return 0;
    if (VAR_2[8 + 9] & 0xc0)
        return 0;

    const int64_t VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 <= 18 + 26)
        return 0;
    bool VAR_4;
    if (FUNC_3(VAR_1, VAR_0, &VAR_4) || !VAR_4)
        return 0;

    const int64_t VAR_5 = FUNC_6(VAR_1);
    if (FUNC_5(VAR_1, VAR_3 - 26))
        return 0;

    const uint8_t *VAR_6;
    if (FUNC_4(VAR_1, &VAR_6, 26) < 26
     || FUNC_1(&VAR_6[8], "TRUEVISION-XFILE.\x00", 18))
        return 0;

    return FUNC_5(VAR_1, VAR_5) == 0;
}
