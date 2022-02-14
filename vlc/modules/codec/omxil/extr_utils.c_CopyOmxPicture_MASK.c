
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_10__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int copy_cache_t ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_9__ {int i_pitch; int i_visible_pitch; int i_visible_lines; int const* p_pixels; } ;
typedef TYPE_3__ ArchitectureSpecificCopyData ;


 int FUNC_0 (TYPE_2__*,int const**,size_t const*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int const*,TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5( int VAR_2, picture_t *VAR_3,
                     int VAR_4,
                     int VAR_5, uint8_t *VAR_6, int VAR_7,
                     ArchitectureSpecificCopyData *VAR_8 )
{
    uint8_t *VAR_9;
    int VAR_10;
    int VAR_11, VAR_12, VAR_13;
    if( VAR_2 == VAR_1 )
    {
        FUNC_3(VAR_6, VAR_3);
        return;
    }
    for( VAR_11 = 0; VAR_11 < VAR_3->i_planes; VAR_11++ )
    {
        if(VAR_11 == 1) VAR_5 /= VAR_7;
        VAR_9 = VAR_3->p[VAR_11].p_pixels;
        VAR_10 = VAR_3->p[VAR_11].i_pitch;
        VAR_12 = VAR_3->p[VAR_11].i_visible_pitch;

        for( VAR_13 = 0; VAR_13 < VAR_3->p[VAR_11].i_visible_lines; VAR_13++ )
        {
            FUNC_1( VAR_9, VAR_6, VAR_12 );
            VAR_6 += VAR_5;
            VAR_9 += VAR_10;
        }



        if( VAR_11 == 0 && VAR_4 > VAR_3->p[VAR_11].i_visible_lines )
            VAR_6 += VAR_5 * (VAR_4 - VAR_3->p[VAR_11].i_visible_lines);
        else if ( VAR_11 > 0 && VAR_4/2 > VAR_3->p[VAR_11].i_visible_lines )
            VAR_6 += VAR_5 * (VAR_4/2 - VAR_3->p[VAR_11].i_visible_lines);
    }
}
