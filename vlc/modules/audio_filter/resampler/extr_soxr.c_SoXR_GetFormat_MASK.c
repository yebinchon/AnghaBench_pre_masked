
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int soxr_datatype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





__attribute__((used)) static bool
FUNC_0( vlc_fourcc_t VAR_4, soxr_datatype_t *VAR_5 )
{
    switch( VAR_4 )
    {
        case 130:
            *VAR_5 = VAR_1;
            return 1;
        case 131:
            *VAR_5 = VAR_0;
            return 1;
        case 128:
            *VAR_5 = VAR_3;
            return 1;
        case 129:
            *VAR_5 = VAR_2;
            return 1;
        default:
            return 0;
    }
}
