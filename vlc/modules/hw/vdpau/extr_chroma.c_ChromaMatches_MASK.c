
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int VdpChromaType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static bool FUNC_0(VdpChromaType VAR_3, vlc_fourcc_t VAR_4)
{
    switch (VAR_4)
    {
        case 130:
            return VAR_3 == VAR_0;
        case 129:
            return VAR_3 == VAR_1;
        case 128:
            return VAR_3 == VAR_2;
        default:
            return 0;
    }
}
