
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float f_preamp; float* f_amp; } ;
typedef TYPE_1__ libvlc_equalizer_t ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

libvlc_equalizer_t *FUNC_2( void )
{
    libvlc_equalizer_t *VAR_1;
    VAR_1 = FUNC_0( sizeof( *VAR_1 ) );
    if ( FUNC_1( VAR_1 == ((void*)0) ) )
        return ((void*)0);

    VAR_1->f_preamp = 0.f;
    for ( unsigned VAR_2 = 0; VAR_2 < VAR_0; VAR_2++ )
        VAR_1->f_amp[ VAR_2 ] = 0.f;

    return VAR_1;
}
