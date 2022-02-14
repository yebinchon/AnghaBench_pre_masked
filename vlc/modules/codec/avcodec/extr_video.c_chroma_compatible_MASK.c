
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_fourcc_t ;


 size_t FUNC_0 (scalar_t__ const**) ;
__attribute__((used)) static bool FUNC_1(vlc_fourcc_t VAR_0, vlc_fourcc_t VAR_1)
{
    static const vlc_fourcc_t VAR_2[][2] = {
        {131, 135},
        {130, 134},
        {129, 133},
        {128, 132},
    };

    if (VAR_0 == VAR_1)
        return 1;

    for (size_t VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
        if ((VAR_0 == VAR_2[VAR_3][0] || VAR_0 == VAR_2[VAR_3][1]) &&
            (VAR_1 == VAR_2[VAR_3][0] || VAR_1 == VAR_2[VAR_3][1]))
            return 1;
    }
    return 0;
}
