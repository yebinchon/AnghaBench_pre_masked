
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_4__ {int i_visible_lines; int i_visible_pitch; int i_pitch; scalar_t__* p_pixels; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0( picture_t *VAR_1 )
{
    uint8_t *VAR_2 = VAR_1->p[VAR_0].p_pixels;

    int VAR_3 = VAR_1->p[VAR_0].i_visible_lines;
    int VAR_4 = VAR_1->p[VAR_0].i_visible_pitch;
    int VAR_5 = VAR_1->p[VAR_0].i_pitch;

    if( VAR_3 == 0 || VAR_4 == 0 )
        return 0;

    unsigned VAR_6 = 0;
    for( int VAR_7 = 0 ; VAR_7 < VAR_3 ; ++VAR_7 )
    {
        for( int VAR_8 = 0 ; VAR_8 < VAR_4; ++VAR_8 )
        {
            VAR_6 += VAR_2[VAR_7*VAR_5+VAR_8];
        }
    }
    unsigned VAR_9 = VAR_3 * VAR_4;
    return (VAR_6 + (VAR_9>>1)) / VAR_9;
}
