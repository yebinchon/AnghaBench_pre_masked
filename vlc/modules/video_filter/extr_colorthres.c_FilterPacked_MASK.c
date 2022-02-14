
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {TYPE_3__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_16__ {int i_chroma; } ;
struct TYPE_17__ {TYPE_1__ video; } ;
struct TYPE_20__ {TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_21__ {int i_color; int i_satthres; int i_simthres; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_18__ {int i_visible_lines; int* p_pixels; int i_pitch; int i_visible_pitch; } ;


 TYPE_4__* FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int ,int*,int*,int*) ;
 int FUNC_2 (int*,int*,int*,int) ;
 scalar_t__ FUNC_3 (int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static picture_t *FUNC_7( filter_t *VAR_1, picture_t *VAR_2 )
{
    picture_t *VAR_3;
    filter_sys_t *VAR_4 = VAR_1->p_sys;
    int VAR_5 = FUNC_4( &VAR_4->i_simthres );
    int VAR_6 = FUNC_4( &VAR_4->i_satthres );
    int VAR_7 = FUNC_4( &VAR_4->i_color );

    if( !VAR_2 ) return ((void*)0);

    VAR_3 = FUNC_5( VAR_1 );
    if( !VAR_3 )
    {
        FUNC_6( VAR_2 );
        return ((void*)0);
    }

    int VAR_8, VAR_9, VAR_10;
    int VAR_11 = FUNC_1( VAR_1->fmt_in.video.i_chroma,
                                     &VAR_8, &VAR_9, &VAR_10 );
    if( VAR_11 == VAR_0 )
    {
        FUNC_6( VAR_2 );
        return ((void*)0);
    }




    int VAR_12, VAR_13, VAR_14;
    FUNC_2( &VAR_12, &VAR_13, &VAR_14, VAR_7 );

    for( int VAR_15 = 0; VAR_15 < VAR_2->p->i_visible_lines; VAR_15++ )
    {
        uint8_t *VAR_16 = &VAR_2->p->p_pixels[VAR_15 * VAR_2->p->i_pitch];
        uint8_t *VAR_17 = &VAR_3->p->p_pixels[VAR_15 * VAR_3->p->i_pitch];

        for( int VAR_18 = 0; VAR_18 < VAR_2->p->i_visible_pitch / 4; VAR_18++ )
        {
            VAR_17[VAR_8 + 0] = VAR_16[VAR_8 + 0];
            VAR_17[VAR_8 + 2] = VAR_16[VAR_8 + 2];

            if( FUNC_3( VAR_16[VAR_9] - 0x80, VAR_16[VAR_10] - 0x80,
                           VAR_12, VAR_13, VAR_14,
                           VAR_6, VAR_5 ) )
            {
                VAR_17[VAR_9] = VAR_16[VAR_9];
                VAR_17[VAR_10] = VAR_16[VAR_10];
            }
            else
            {
                VAR_17[VAR_9] = 0x80;
                VAR_17[VAR_10] = 0x80;
            }

            VAR_17 += 4;
            VAR_16 += 4;
        }
    }

    return FUNC_0( VAR_3, VAR_2 );
}
