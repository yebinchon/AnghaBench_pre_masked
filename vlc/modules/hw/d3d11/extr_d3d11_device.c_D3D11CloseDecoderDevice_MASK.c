
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vlc_decoder_device ;
struct TYPE_9__ {int opaque; int (* cleanupDeviceCb ) (int ) ;} ;
struct TYPE_8__ {int device; } ;
struct TYPE_11__ {TYPE_2__ external; int hd3d; TYPE_1__ dec_device; } ;
typedef TYPE_4__ d3d11_decoder_device ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(vlc_decoder_device *VAR_0)
{
    d3d11_decoder_device *VAR_1 = VAR_0->sys;

    FUNC_1(VAR_1->dec_device.device);

    FUNC_0(&VAR_1->hd3d);

    if ( VAR_1->external.cleanupDeviceCb )
        VAR_1->external.cleanupDeviceCb( VAR_1->external.opaque );

    FUNC_4( FUNC_2(VAR_0), VAR_1 );
}
