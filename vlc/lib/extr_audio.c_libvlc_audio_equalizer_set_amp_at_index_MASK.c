
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* f_amp; } ;
typedef TYPE_1__ libvlc_equalizer_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (float) ;

int FUNC_1( libvlc_equalizer_t *VAR_1, float VAR_2, unsigned VAR_3 )
{
    if( VAR_3 >= VAR_0 || FUNC_0(VAR_2) )
        return -1;


    if( VAR_2 < -20.f )
        VAR_2 = -20.f;
    else if( VAR_2 > 20.f )
        VAR_2 = 20.f;

    VAR_1->f_amp[ VAR_3 ] = VAR_2;
    return 0;
}
