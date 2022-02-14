
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_decoder_device ;
struct TYPE_7__ {int opaque; int (* cleanupDeviceCb ) (int ) ;int hd3d; } ;
typedef TYPE_2__ d3d9_decoder_device ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(vlc_decoder_device *VAR_0)
{
    d3d9_decoder_device *VAR_1 = VAR_0->sys;

    FUNC_0( &VAR_1->hd3d );

    if ( VAR_1->cleanupDeviceCb )
        VAR_1->cleanupDeviceCb( VAR_1->opaque );
    FUNC_3( FUNC_1(VAR_0), VAR_1 );
}
