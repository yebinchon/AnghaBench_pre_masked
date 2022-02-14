
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* f_amp; } ;
typedef TYPE_1__ libvlc_equalizer_t ;


 unsigned int VAR_0 ;
 float FUNC_0 (char*) ;

float FUNC_1( libvlc_equalizer_t *VAR_1, unsigned VAR_2 )
{
    if ( VAR_2 >= VAR_0 )
        return FUNC_0("");

    return VAR_1->f_amp[ VAR_2 ];
}
