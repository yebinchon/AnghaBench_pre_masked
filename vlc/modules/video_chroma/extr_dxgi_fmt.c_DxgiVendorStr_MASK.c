
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(unsigned int VAR_0)
{
    static const struct {
        unsigned id;
        const char name[32];
    } VAR_1 [] = {
        { 133, "ATI" },
        { 131, "NVIDIA" },
        { 128, "VIA" },
        { 132, "Intel" },
        { 129, "S3 Graphics" },
        { 130, "Qualcomm" },
        { 0, "Unknown" }
    };

    int VAR_2 = 0;
    for (VAR_2 = 0; VAR_1[VAR_2].id != 0; VAR_2++) {
        if (VAR_1[VAR_2].id == VAR_0)
            break;
    }
    return VAR_1[VAR_2].name;
}
