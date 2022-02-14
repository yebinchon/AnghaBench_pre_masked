
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {int i_pixel_pitch; int i_visible_pitch; int i_visible_lines; int i_pitch; int * p_pixels; } ;
typedef TYPE_5__ plane_t ;
struct TYPE_23__ {int i_planes; TYPE_5__* p; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_20__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_21__ {TYPE_3__ video; } ;
struct TYPE_18__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_24__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_25__ {int i_cropleft; int i_cropright; int i_croptop; int i_cropbottom; int i_paddleft; int i_paddtop; } ;
typedef TYPE_8__ filter_sys_t ;


 TYPE_6__* FUNC_0 (TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static picture_t *FUNC_5( filter_t *VAR_0, picture_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    picture_t *VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9, VAR_10, VAR_11;

    const int VAR_12[] = { 0x00, 0x80, 0x80, 0xff };

    if( !VAR_1 ) return ((void*)0);


    VAR_3 = FUNC_1( VAR_0 );
    if( !VAR_3 )
    {
        FUNC_4( VAR_1 );
        return ((void*)0);
    }

    for( int VAR_13 = 0; VAR_13 < VAR_1->i_planes; VAR_13++ )


    {
        plane_t *VAR_14 = VAR_1->p+VAR_13;
        plane_t *VAR_15 = VAR_3->p+VAR_13;
        uint8_t *VAR_16 = VAR_14->p_pixels;
        uint8_t *VAR_17 = VAR_15->p_pixels;
        int VAR_18 = VAR_14->i_pixel_pitch;
        int VAR_19 = VAR_13 > 3 ? VAR_12[0]
                                       : VAR_12[VAR_13];



        VAR_4 = ( ( VAR_0->fmt_in.video.i_visible_width
                          - VAR_2->i_cropleft - VAR_2->i_cropright )
                        * VAR_14->i_visible_pitch )
                      / VAR_1->p->i_visible_pitch;
        VAR_5 = ( ( VAR_0->fmt_in.video.i_visible_height
                          - VAR_2->i_croptop - VAR_2->i_cropbottom )
                        * VAR_14->i_visible_lines )
                      / VAR_1->p->i_visible_lines;
        VAR_6 = ( VAR_2->i_cropleft * VAR_14->i_visible_pitch)
                      / VAR_1->p->i_visible_pitch;
        VAR_7 = ( VAR_2->i_croptop * VAR_14->i_visible_lines)
                      / VAR_1->p->i_visible_lines;
        VAR_8 = ( VAR_0->fmt_out.video.i_visible_width
                        * VAR_15->i_visible_pitch )
                      / VAR_3->p->i_visible_pitch;
        VAR_9 = ( VAR_0->fmt_out.video.i_visible_height
                        * VAR_15->i_visible_lines )
                      / VAR_3->p->i_visible_lines;
        VAR_10 = ( VAR_2->i_paddleft * VAR_15->i_visible_pitch )
                      / VAR_3->p->i_visible_pitch;
        VAR_11 = ( VAR_2->i_paddtop * VAR_15->i_visible_lines )
                       / VAR_3->p->i_visible_lines;


        VAR_16 += VAR_7 * VAR_14->i_pitch;


        FUNC_3( VAR_17, VAR_19, VAR_11 * VAR_15->i_pitch );
        VAR_17 += VAR_11 * VAR_15->i_pitch;

        for( int VAR_20 = 0; VAR_20 < VAR_5; VAR_20++ )
        {
            uint8_t *VAR_21 = VAR_16 + VAR_14->i_pitch;
            uint8_t *VAR_22 = VAR_17 + VAR_15->i_pitch;


            VAR_16 += VAR_6 * VAR_18;


            FUNC_3( VAR_17, VAR_19, VAR_10 * VAR_18 );
            VAR_17 += VAR_10 * VAR_18;


            FUNC_2( VAR_17, VAR_16, VAR_4 * VAR_18 );
            VAR_17 += VAR_4 * VAR_18;
            VAR_16 += VAR_4 * VAR_18;


            FUNC_3( VAR_17, VAR_19,
                        ( VAR_8 - VAR_10 - VAR_4 ) * VAR_18 );


            VAR_16 = VAR_21;
            VAR_17 = VAR_22;
        }


        FUNC_3( VAR_17, VAR_19,
                 ( VAR_9 - VAR_11 - VAR_5 ) * VAR_15->i_pitch );
    }

    return FUNC_0( VAR_3, VAR_1 );
}
