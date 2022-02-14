
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int cudaVideoChromaFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static vlc_fourcc_t FUNC_0(cudaVideoChromaFormat VAR_3, unsigned VAR_4)
{
    switch (VAR_3) {
        case 128:
            if (VAR_4 <= 8)
                return VAR_0;
            if (VAR_4 <= 10)
                return VAR_1;
            return VAR_2;




        default:
            return 0;
    }
}
