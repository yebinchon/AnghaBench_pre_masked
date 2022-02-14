
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int i_chroma; } ;
struct TYPE_8__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {int i_visible_lines; int i_pitch; int i_visible_pitch; int * p_pixels; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int*,int*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_3( picture_t * VAR_2, picture_t * VAR_3, int VAR_4, int VAR_5,
                         int VAR_6, int VAR_7, int VAR_8 )
{
    uint8_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    uint8_t *VAR_13, *VAR_14;

    int VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;


    if ( FUNC_1( VAR_2->format.i_chroma, &VAR_15,
                              &VAR_16, &VAR_17 ) != VAR_1 )
        return VAR_0;

    VAR_18 = VAR_2->p->i_visible_lines;
    VAR_19 = VAR_2->p->i_pitch;
    VAR_20 = VAR_2->p->i_visible_pitch;

    VAR_9 = VAR_2->p->p_pixels + VAR_16;
    VAR_10 = VAR_2->p->p_pixels + VAR_17;
    VAR_11 = VAR_9 + VAR_18 * VAR_19 - 8 * 4;

    VAR_13 = VAR_3->p->p_pixels + VAR_16;
    VAR_14 = VAR_3->p->p_pixels + VAR_17;

    uint8_t VAR_21, VAR_22;

    for( ; VAR_9 < VAR_11 ; )
    {
        VAR_12 = VAR_9 + VAR_20 - 8 * 4;

        for( ; VAR_9 < VAR_12 ; )
        {

            FUNC_0( FUNC_2() );
        }

        VAR_12 += 8 * 4;

        for( ; VAR_9 < VAR_12 ; )
        {
            FUNC_2();
        }

        VAR_9 += VAR_19 - VAR_20;
        VAR_10 += VAR_19 - VAR_20;
        VAR_13 += VAR_19 - VAR_20;
        VAR_14 += VAR_19 - VAR_20;
    }

    return VAR_1;
}
