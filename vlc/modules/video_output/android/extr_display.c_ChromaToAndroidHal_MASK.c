
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(vlc_fourcc_t VAR_4)
{
    switch (VAR_4) {
        case 128:
        case 132:
            return VAR_0;
        case 131:
            return VAR_3;
        case 130:
            return VAR_2;
        case 129:
            return VAR_1;
        default:
            return -1;
    }
}
