
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ converted; int fmt; int rc; } ;
typedef TYPE_1__ libvlc_picture_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( libvlc_picture_t* VAR_0 )
{
    if ( FUNC_3( &VAR_0->rc ) == 0 )
        return;
    FUNC_2( &VAR_0->fmt );
    if ( VAR_0->converted )
        FUNC_0( VAR_0->converted );
    FUNC_1( VAR_0 );
}
