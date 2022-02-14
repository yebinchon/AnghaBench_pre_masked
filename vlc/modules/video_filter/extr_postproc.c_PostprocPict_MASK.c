
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_19__ {int i_height; int i_width; } ;
struct TYPE_20__ {TYPE_2__ video; } ;
struct TYPE_22__ {TYPE_3__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_23__ {int lock; int pp_context; int * pp_mode; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_18__ {int i_pitch; int * p_pixels; } ;


 TYPE_4__* FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int const**,int*,int **,int*,int ,int ,int *,int ,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static picture_t *FUNC_7( filter_t *VAR_0, picture_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;

    picture_t *VAR_3 = FUNC_1( VAR_0 );
    if( !VAR_3 )
    {
        FUNC_3( VAR_1 );
        return ((void*)0);
    }


    FUNC_5( &VAR_2->lock );
    if( VAR_2->pp_mode != ((void*)0) )
    {
        const uint8_t *VAR_4[3];
        uint8_t *VAR_5[3];
        int VAR_6[3], VAR_7[3];

        for( int VAR_8 = 0; VAR_8 < VAR_1->i_planes; VAR_8++ )
        {
            VAR_4[VAR_8] = VAR_1->p[VAR_8].p_pixels;
            VAR_5[VAR_8] = VAR_3->p[VAR_8].p_pixels;



            VAR_6[VAR_8] = VAR_1->p[VAR_8].i_pitch;
            VAR_7[VAR_8] = VAR_3->p[VAR_8].i_pitch;
        }

        FUNC_4( VAR_4, VAR_6, VAR_5, VAR_7,
                        VAR_0->fmt_in.video.i_width,
                        VAR_0->fmt_in.video.i_height, ((void*)0), 0,
                        VAR_2->pp_mode, VAR_2->pp_context, 0 );
    }
    else
        FUNC_2( VAR_3, VAR_1 );
    FUNC_6( &VAR_2->lock );

    return FUNC_0( VAR_3, VAR_1 );
}
