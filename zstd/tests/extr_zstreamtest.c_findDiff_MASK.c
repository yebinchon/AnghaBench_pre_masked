
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,scalar_t__ const,...) ;

__attribute__((used)) static size_t FUNC_1(const void* VAR_0, const void* VAR_1, size_t VAR_2)
{
    const BYTE* VAR_3 = (const BYTE*)VAR_0;
    const BYTE* VAR_4 = (const BYTE*)VAR_1;
    size_t VAR_5;
    for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
        if (VAR_3[VAR_5] != VAR_4[VAR_5]) break;
    }
    if (VAR_5==VAR_2) {
        FUNC_0("=> No difference detected within %u bytes \n", (unsigned)VAR_2);
        return VAR_5;
    }
    FUNC_0("Error at position %u / %u \n", (unsigned)VAR_5, (unsigned)VAR_2);
    if (VAR_5>=3)
        FUNC_0(" %02X %02X %02X ",
                VAR_3[VAR_5-3], VAR_3[VAR_5-2], VAR_3[VAR_5-1]);
    FUNC_0(" :%02X:  %02X %02X %02X %02X %02X \n",
            VAR_3[VAR_5], VAR_3[VAR_5+1], VAR_3[VAR_5+2], VAR_3[VAR_5+3], VAR_3[VAR_5+4], VAR_3[VAR_5+5]);
    if (VAR_5>=3)
        FUNC_0(" %02X %02X %02X ",
                VAR_4[VAR_5-3], VAR_4[VAR_5-2], VAR_4[VAR_5-1]);
    FUNC_0(" :%02X:  %02X %02X %02X %02X %02X \n",
            VAR_4[VAR_5], VAR_4[VAR_5+1], VAR_4[VAR_5+2], VAR_4[VAR_5+3], VAR_4[VAR_5+4], VAR_4[VAR_5+5]);
    return VAR_5;
}
