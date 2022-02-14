
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0( vlc_fourcc_t VAR_2,
    int *VAR_3, int *VAR_4, int *VAR_5 )
{
    switch( VAR_2 )
    {
        case 131:

            *VAR_3 = 1;
            *VAR_4 = 0;
            *VAR_5 = 2;
            return VAR_1;
        case 130:

            *VAR_3 = 1;
            *VAR_4 = 2;
            *VAR_5 = 0;
            return VAR_1;
        case 129:

            *VAR_3 = 0;
            *VAR_4 = 1;
            *VAR_5 = 3;
            return VAR_1;
        case 128:

            *VAR_3 = 0;
            *VAR_4 = 3;
            *VAR_5 = 1;
            return VAR_1;
        default:
            return VAR_0;
    }
}
