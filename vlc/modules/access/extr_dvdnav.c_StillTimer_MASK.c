
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_enabled; int lock; } ;
struct TYPE_4__ {TYPE_1__ still; int dvdnav; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0;

    FUNC_2( &VAR_1->still.lock );
    if( FUNC_1(VAR_1->still.b_enabled) )
    {
        VAR_1->still.b_enabled = 0;
        FUNC_0( VAR_1->dvdnav );
    }
    FUNC_3( &VAR_1->still.lock );
}
