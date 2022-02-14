
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_format_t ;
typedef int vdp_t ;
typedef int picture_t ;
typedef int picture_pool_t ;
typedef int VdpRGBAFormat ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int const*) ;

picture_pool_t *FUNC_4(vdp_t *VAR_0, VdpRGBAFormat VAR_1,
                                           const video_format_t *restrict VAR_2,
                                           unsigned VAR_3)
{
    picture_t *VAR_4[VAR_3];
    unsigned VAR_5 = 0;

    while (VAR_5 < VAR_3)
    {
        VAR_4[VAR_5] = FUNC_3(VAR_0, VAR_1, VAR_2);
        if (VAR_4[VAR_5] == ((void*)0))
            break;
        VAR_5++;
    }

    if (VAR_5 == 0)
        return ((void*)0);

    picture_pool_t *VAR_6 = FUNC_1(VAR_5, VAR_4);
    if (FUNC_2(VAR_6 == ((void*)0)))
        while (VAR_5 > 0)
            FUNC_0(VAR_4[--VAR_5]);
    return VAR_6;
}
