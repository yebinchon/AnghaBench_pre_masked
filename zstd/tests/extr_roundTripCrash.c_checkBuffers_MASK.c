
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const void* VAR_0, const void* VAR_1, size_t VAR_2)
{
    const char* VAR_3 = (const char*)VAR_0;
    const char* VAR_4 = (const char*)VAR_1;
    size_t VAR_5;

    for (VAR_5=0; VAR_5<VAR_2; VAR_5++)
        if (VAR_3[VAR_5]!=VAR_4[VAR_5])
            break;

    return VAR_5;
}
