
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;



__attribute__((used)) static size_t FUNC_0(
            const BYTE* VAR_0, const BYTE* VAR_1,
            const BYTE* VAR_2, const BYTE* VAR_3)
{
    size_t VAR_4 = 0;
    while (VAR_0 > VAR_1 && VAR_2 > VAR_3 && VAR_0[-1] == VAR_2[-1]) {
        VAR_0--;
        VAR_2--;
        VAR_4++;
    }
    return VAR_4;
}
