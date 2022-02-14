
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_12__ {int i_ball_x; int i_ball_y; int i_ballSize; size_t ballColor; TYPE_2__* colorList; int (* drawingPixelFunction ) (TYPE_4__*,TYPE_3__*,int ,int ,int ,int,int,int) ;} ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_10__ {int comp3; int comp2; int comp1; } ;
struct TYPE_9__ {int i_visible_pitch; int i_visible_lines; } ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ,int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1( filter_sys_t *VAR_0, picture_t *VAR_1 )
{
    int VAR_2 = VAR_0->i_ball_x;
    int VAR_3 = VAR_0->i_ball_y;
    int VAR_4 = VAR_0->i_ballSize;

    const int VAR_5 = VAR_1->p[0].i_visible_pitch;
    const int VAR_6 = VAR_1->p[0].i_visible_lines;

    for( int VAR_7 = VAR_3 - VAR_4; VAR_7 <= VAR_3 + VAR_4; VAR_7++ )
    {
        bool VAR_8 = ( VAR_2 - VAR_4 ) % 2;
        for( int VAR_9 = VAR_2 - VAR_4; VAR_9 <= VAR_2 + VAR_4; VAR_9++ )
        {


            if( ( VAR_9 - VAR_2 ) * ( VAR_9 - VAR_2 ) + ( VAR_7 - VAR_3 ) * ( VAR_7 - VAR_3 ) <= VAR_4 * VAR_4
                && VAR_9 >= 0 && VAR_9 < VAR_5
                && VAR_7 >= 0 && VAR_7 < VAR_6 )
            {
                ( *VAR_0->drawingPixelFunction )( VAR_0, VAR_1,
                                    VAR_0->colorList[ VAR_0->ballColor ].comp1,
                                    VAR_0->colorList[ VAR_0->ballColor ].comp2,
                                    VAR_0->colorList[ VAR_0->ballColor ].comp3,
                                    VAR_9, VAR_7, VAR_8 );
            }
            VAR_8 = !VAR_8;
        }
    }
}
