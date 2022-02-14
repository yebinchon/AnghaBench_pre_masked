
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_visible_lines; int i_lines; int i_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int *,int,int const) ;

__attribute__((used)) static inline void
FUNC_1( plane_t *VAR_0, uint8_t VAR_1 )
{
    const int VAR_2 = VAR_0->i_visible_lines / VAR_1;
    const int VAR_3 = VAR_0->i_visible_lines % VAR_1 + VAR_0->i_lines - VAR_0->i_visible_lines;
    for( int VAR_4 = 0; VAR_4<VAR_1; VAR_4++ )
    {
        FUNC_0( &VAR_0->p_pixels[VAR_0->i_pitch * (VAR_4 * VAR_2)],
                VAR_4,
                VAR_0->i_pitch * VAR_2 );
    }
    FUNC_0( &VAR_0->p_pixels[VAR_0->i_pitch * (VAR_1 - 1) * VAR_2],
            VAR_1 - 1,
            VAR_0->i_pitch * VAR_3 );
}
