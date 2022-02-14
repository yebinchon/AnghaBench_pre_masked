
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* th_ycbcr_buffer ;
struct TYPE_8__ {int i_lines; int i_visible_lines; int i_pitch; int i_visible_pitch; int p_pixels; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {int * p; int i_planes; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {int stride; int data; int height; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( picture_t *VAR_0,
                                th_ycbcr_buffer VAR_1 )
{
    int VAR_2, VAR_3;
    VAR_3 = FUNC_0(VAR_0->i_planes, 3);
    for( VAR_2 = 0; VAR_2 < VAR_3; VAR_2++ )
    {
        plane_t VAR_4;
        VAR_4.i_lines = VAR_1[VAR_2].height;
        VAR_4.p_pixels = VAR_1[VAR_2].data;
        VAR_4.i_pitch = VAR_1[VAR_2].stride;
        VAR_4.i_visible_pitch = VAR_4.i_pitch;
        VAR_4.i_visible_lines = VAR_4.i_lines;
        FUNC_1( &VAR_0->p[VAR_2], &VAR_4 );
    }
}
