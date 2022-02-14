
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int VdpYCbCrFormat ;
typedef int VdpChromaType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
__attribute__((used)) static inline
bool FUNC_0(vlc_fourcc_t VAR_7,
                 VdpChromaType *restrict VAR_8, VdpYCbCrFormat *restrict VAR_9)
{
    switch (VAR_7)
    {
        case 136:
        case 128:
            *VAR_8 = VAR_0;
            *VAR_9 = VAR_6;
            break;
        case 133:
            *VAR_8 = VAR_0;
            *VAR_9 = VAR_3;
            break;
        case 135:
            *VAR_8 = VAR_1;
            *VAR_9 = VAR_6;
            break;
        case 132:
            *VAR_8 = VAR_1;
            *VAR_9 = VAR_3;
            break;
        case 129:
            *VAR_8 = VAR_1;
            *VAR_9 = VAR_5;
            break;
        case 130:
            *VAR_8 = VAR_1;
            *VAR_9 = VAR_4;
            break;
        case 134:
            *VAR_8 = VAR_2;
            *VAR_9 = VAR_6;
            break;
        case 131:
            *VAR_8 = VAR_2;
            *VAR_9 = VAR_3;
            break;
        default:
            return 0;
    }
    return 1;
}
