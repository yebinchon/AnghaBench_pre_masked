
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_15__ {TYPE_4__* p; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_16__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_17__ {int i_color; int i_satthres; int i_simthres; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_18__ {int i_visible_lines; void** p_pixels; int i_pitch; int i_visible_pitch; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int*,int*,int*,int) ;
 scalar_t__ FUNC_2 (void*,void*,int,int,int,int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static picture_t *FUNC_7( filter_t *VAR_3, picture_t *VAR_4 )
{
    picture_t *VAR_5;
    filter_sys_t *VAR_6 = VAR_3->p_sys;
    int VAR_7 = FUNC_3( &VAR_6->i_simthres );
    int VAR_8 = FUNC_3( &VAR_6->i_satthres );
    int VAR_9 = FUNC_3( &VAR_6->i_color );

    if( !VAR_4 ) return ((void*)0);

    VAR_5 = FUNC_4( VAR_3 );
    if( !VAR_5 )
    {
        FUNC_5( VAR_4 );
        return ((void*)0);
    }


    FUNC_6( &VAR_5->p[VAR_2], &VAR_4->p[VAR_2] );




    int VAR_10, VAR_11, VAR_12;
    FUNC_1( &VAR_10, &VAR_11, &VAR_12, VAR_9 );

    for( int VAR_13 = 0; VAR_13 < VAR_4->p[VAR_0].i_visible_lines; VAR_13++ )
    {
        uint8_t *VAR_14 = &VAR_4->p[VAR_0].p_pixels[VAR_13 * VAR_4->p[VAR_0].i_pitch];
        uint8_t *VAR_15 = &VAR_4->p[VAR_1].p_pixels[VAR_13 * VAR_4->p[VAR_1].i_pitch];
        uint8_t *VAR_16 = &VAR_5->p[VAR_0].p_pixels[VAR_13 * VAR_5->p[VAR_0].i_pitch];
        uint8_t *VAR_17 = &VAR_5->p[VAR_1].p_pixels[VAR_13 * VAR_5->p[VAR_1].i_pitch];

        for( int VAR_18 = 0; VAR_18 < VAR_4->p[VAR_0].i_visible_pitch; VAR_18++ )
        {
            if( FUNC_2( *VAR_14 - 0x80, *VAR_15 - 0x80,
                           VAR_10, VAR_11, VAR_12,
                           VAR_8, VAR_7 ) )

            {
                *VAR_16++ = *VAR_14;
                *VAR_17++ = *VAR_15;
            }
            else
            {
                *VAR_16++ = 0x80;
                *VAR_17++ = 0x80;
            }
            VAR_14++;
            VAR_15++;
        }
    }

    return FUNC_0( VAR_5, VAR_4 );
}
