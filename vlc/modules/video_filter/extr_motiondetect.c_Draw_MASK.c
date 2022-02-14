
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int i_colors; int* colors; int* color_x_min; int* color_x_max; int* color_y_min; int* color_y_max; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_0->p_sys;

    int VAR_5 = 0;

    for( int VAR_6 = 1; VAR_6 < VAR_4->i_colors; VAR_6++ )
    {
        int VAR_7, VAR_8;

        if( VAR_4->colors[VAR_6] != VAR_6 )
            continue;

        const int VAR_9 = VAR_4->color_x_min[VAR_6];
        const int VAR_10 = VAR_4->color_x_max[VAR_6];
        const int VAR_11 = VAR_4->color_y_min[VAR_6];
        const int VAR_12 = VAR_4->color_y_max[VAR_6];

        if( VAR_9 == -1 )
            continue;
        if( ( VAR_12 - VAR_11 ) * ( VAR_10 - VAR_9 ) < 16 )
            continue;

        VAR_5++;

        VAR_8 = VAR_11;
        for( VAR_7 = VAR_9; VAR_7 <= VAR_10; VAR_7++ )
            VAR_1[VAR_8*VAR_2+VAR_7*VAR_3] = 0xff;

        VAR_8 = VAR_12;
        for( VAR_7 = VAR_9; VAR_7 <= VAR_10; VAR_7++ )
            VAR_1[VAR_8*VAR_2+VAR_7*VAR_3] = 0xff;

        VAR_7 = VAR_9;
        for( VAR_8 = VAR_11; VAR_8 <= VAR_12; VAR_8++ )
            VAR_1[VAR_8*VAR_2+VAR_7*VAR_3] = 0xff;

        VAR_7 = VAR_10;
        for( VAR_8 = VAR_11; VAR_8 <= VAR_12; VAR_8++ )
            VAR_1[VAR_8*VAR_2+VAR_7*VAR_3] = 0xff;
    }
    FUNC_0( VAR_0, "Counted %d moving shapes.", VAR_5 );
}
