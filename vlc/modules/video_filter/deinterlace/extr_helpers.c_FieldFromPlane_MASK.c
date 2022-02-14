
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_lines; int i_visible_lines; int i_pitch; int p_pixels; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( plane_t *VAR_0, const plane_t *VAR_1, int VAR_2 )
{
    FUNC_0( VAR_0 != ((void*)0) );
    FUNC_0( VAR_1 != ((void*)0) );
    FUNC_0( VAR_2 == 0 || VAR_2 == 1 );
    (*VAR_0) = (*VAR_1);
    VAR_0->i_lines /= 2;
    VAR_0->i_visible_lines /= 2;
    VAR_0->i_pitch *= 2;

    if( VAR_2 == 1 )
        VAR_0->p_pixels += VAR_1->i_pitch;
}
