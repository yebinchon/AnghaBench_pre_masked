
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const vlc_fourcc_t ;
typedef int fcc ;
vlc_fourcc_t FUNC_0( int VAR_0 )
{
    static const vlc_fourcc_t VAR_1[] = {
        [134] = 128,
        [138] = 130,
        [136] = 129,
        [140] = 132,
        [142] = 131,
        [133] = 128,
        [137] = 130,
        [135] = 129,
        [139] = 132,
        [141] = 131,
    };
    if( (sizeof(VAR_1) / sizeof(VAR_1[0])) > (unsigned)VAR_0 )
        return VAR_1[VAR_0];
    return 130;
}
