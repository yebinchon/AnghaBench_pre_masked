
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const vlc_fourcc_t ;



__attribute__((used)) static const vlc_fourcc_t *FUNC_0( vlc_fourcc_t VAR_0,
                                        const vlc_fourcc_t *VAR_1[],
                                        const vlc_fourcc_t VAR_2[] )
{
    for( unsigned VAR_3 = 0; VAR_1[VAR_3]; VAR_3++ )
    {
        if( VAR_1[VAR_3][0] == VAR_0 )
            return VAR_1[VAR_3];
    }
    return VAR_2;
}
