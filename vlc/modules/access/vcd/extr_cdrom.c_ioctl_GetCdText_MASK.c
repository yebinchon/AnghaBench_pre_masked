
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_meta_t ;
struct TYPE_4__ {int i_vcdimage_handle; } ;
typedef TYPE_1__ vcddev_t ;
typedef int uint8_t ;


 int FUNC_0 (int ***,int*,int *,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__ const*,int **,int*) ;
 int FUNC_2 (int *) ;

int FUNC_3( vlc_object_t *VAR_0, const vcddev_t *VAR_1,
                     vlc_meta_t ***VAR_2, int *VAR_3 )
{
    uint8_t *VAR_4;
    int VAR_5;

    if( VAR_1->i_vcdimage_handle != -1 )
        return -1;

    if( FUNC_1( VAR_0, VAR_1, &VAR_4, &VAR_5 ) )
        return -1;

    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5 );
    FUNC_2( VAR_4 );
    return 0;
}
