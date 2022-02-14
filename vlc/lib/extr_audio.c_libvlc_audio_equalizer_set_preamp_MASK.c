
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float f_preamp; } ;
typedef TYPE_1__ libvlc_equalizer_t ;


 scalar_t__ FUNC_0 (float) ;

int FUNC_1( libvlc_equalizer_t *VAR_0, float VAR_1 )
{
    if( FUNC_0(VAR_1) )
        return -1;
    if( VAR_1 < -20.f )
        VAR_1 = -20.f;
    else if( VAR_1 > 20.f )
        VAR_1 = 20.f;

    VAR_0->f_preamp = VAR_1;
    return 0;
}
