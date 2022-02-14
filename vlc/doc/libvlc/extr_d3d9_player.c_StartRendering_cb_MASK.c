
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_context {int libvlc_d3d; } ;
typedef int libvlc_video_direct3d_hdr10_metadata_t ;


 int FUNC_0 (int ,int *,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1( void *VAR_0, bool VAR_1, const libvlc_video_direct3d_hdr10_metadata_t *VAR_2 )
{
    struct render_context *VAR_3 = VAR_0;
    if ( VAR_1 )
    {

        return 1;
    }




    FUNC_0(VAR_3->libvlc_d3d, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    return 1;
}
