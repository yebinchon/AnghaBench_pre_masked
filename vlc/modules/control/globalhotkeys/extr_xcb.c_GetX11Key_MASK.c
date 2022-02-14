
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int xcb_keysym_t ;
struct TYPE_2__ {unsigned int i_vlc; unsigned int i_x11; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static xcb_keysym_t FUNC_0( unsigned VAR_2 )
{

    if( VAR_2 >= 32 && VAR_2 <= 127 )
        return VAR_2;

    for( int VAR_3 = 0; VAR_1[VAR_3].i_vlc != 0; VAR_3++ )
    {
        if( VAR_1[VAR_3].i_vlc == VAR_2 )
            return VAR_1[VAR_3].i_x11;
    }

    return VAR_0;
}
