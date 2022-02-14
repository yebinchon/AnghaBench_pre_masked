
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * f_amp; int f_preamp; } ;
typedef TYPE_1__ libvlc_equalizer_t ;
struct TYPE_6__ {int * f_amp; int f_preamp; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

libvlc_equalizer_t *FUNC_2( unsigned VAR_3 )
{
    libvlc_equalizer_t *VAR_4;

    if ( VAR_3 >= VAR_1 )
        return ((void*)0);

    VAR_4 = FUNC_0( sizeof( *VAR_4 ) );
    if ( FUNC_1( VAR_4 == ((void*)0) ) )
        return ((void*)0);

    VAR_4->f_preamp = VAR_2[ VAR_3 ].f_preamp;

    for ( unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
        VAR_4->f_amp[ VAR_5 ] = VAR_2[ VAR_3 ].f_amp[ VAR_5 ];

    return VAR_4;
}
