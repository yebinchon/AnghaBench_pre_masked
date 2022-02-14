
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_vdp_video_field_t ;
typedef int vlc_va_sys_t ;


 int * FUNC_0 (int *) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static vlc_vdp_video_field_t *FUNC_3(vlc_va_sys_t *VAR_1)
{
    vlc_vdp_video_field_t *VAR_2;
    unsigned VAR_3 = (FUNC_1(1) + VAR_0) / VAR_0;

    while ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
    {
        if (--VAR_3 == 0)
            return ((void*)0);


        FUNC_2(VAR_0);
    }

    return VAR_2;
}
