
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int i_type; } ;
typedef TYPE_1__ MP4_Box_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;

MP4_Box_t * FUNC_2( uint32_t VAR_0 )
{
    MP4_Box_t *VAR_1 = FUNC_0( 1, sizeof( MP4_Box_t ) );
    if( FUNC_1( VAR_1 != ((void*)0) ) )
    {
        VAR_1->i_type = VAR_0;
    }
    return VAR_1;
}
