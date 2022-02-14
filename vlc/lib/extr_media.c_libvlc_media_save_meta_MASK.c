
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int p_input_item; TYPE_1__* p_libvlc_instance; } ;
typedef TYPE_2__ libvlc_media_t ;
struct TYPE_5__ {int p_libvlc_int; } ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int FUNC_3( libvlc_media_t *VAR_1 )
{
    FUNC_1( VAR_1 );
    vlc_object_t *VAR_2 = FUNC_0(VAR_1->p_libvlc_instance->p_libvlc_int);
    return FUNC_2( VAR_2, VAR_1->p_input_item ) == VAR_0;
}
