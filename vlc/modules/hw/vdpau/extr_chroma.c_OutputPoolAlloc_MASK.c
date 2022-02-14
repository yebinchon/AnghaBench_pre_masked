
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int video_format_t ;
typedef int vdp_t ;
typedef int picture_pool_t ;
typedef int VdpRGBAFormat ;
typedef int VdpDevice ;


 scalar_t__ FUNC_0 (int *,int *,int ,int const*,int *) ;
 int * FUNC_1 (int *,int ,int const*,int) ;

__attribute__((used)) static picture_pool_t *FUNC_2(vlc_object_t *VAR_0, vdp_t *VAR_1,
    VdpDevice VAR_2, const video_format_t *restrict VAR_3)
{

    VdpRGBAFormat VAR_4;

    if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4))
        return ((void*)0);


    return FUNC_1(VAR_1, VAR_4, VAR_3, 3);
}
