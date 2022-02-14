
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_video_blend ) (TYPE_1__*,int *,int const*,int,int,int) ;int p_module; } ;
typedef TYPE_1__ vlc_blender_t ;
typedef int picture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int const*,int,int,int) ;

int FUNC_1( vlc_blender_t *VAR_2,
                  picture_t *VAR_3, int VAR_4, int VAR_5,
                  const picture_t *VAR_6, int VAR_7 )
{
    if( !VAR_2->p_module )
        return VAR_0;

    VAR_2->pf_video_blend( VAR_2, VAR_3, VAR_6, VAR_4, VAR_5, VAR_7 );
    return VAR_1;
}
