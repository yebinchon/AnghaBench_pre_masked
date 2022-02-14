
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_fourcc_t ;



 scalar_t__ FUNC_0 (scalar_t__,char const**) ;
 scalar_t__ FUNC_1 (scalar_t__,char const**) ;
 scalar_t__ FUNC_2 (scalar_t__,char const**) ;



__attribute__((used)) static vlc_fourcc_t FUNC_3(vlc_fourcc_t VAR_0, const char **restrict VAR_1,
                              int VAR_2)
{
    switch (VAR_2)
    {
        case 128:
            return FUNC_2(VAR_0, VAR_1);
        case 130:
            return FUNC_0(VAR_0, VAR_1);
        case 129:
            return FUNC_1(VAR_0, VAR_1);
    }

    vlc_fourcc_t VAR_3 = FUNC_2(VAR_0, VAR_1);
    if (!VAR_3)
        VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_3)
        VAR_3 = FUNC_1(VAR_0, VAR_1);
    return VAR_3;
}
