
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_medialibrary_t ;
struct TYPE_3__ {int * p_media_library; } ;
typedef TYPE_1__ libvlc_priv_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

vlc_medialibrary_t* FUNC_2( vlc_object_t* VAR_0 )
{
    libvlc_priv_t* VAR_1 = FUNC_0( FUNC_1(VAR_0) );
    return VAR_1->p_media_library;
}
