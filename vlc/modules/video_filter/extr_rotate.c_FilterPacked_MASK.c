
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int i_chroma; } ;
struct TYPE_20__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_21__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_22__ {int * p_motion; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_19__ {int i_visible_pitch; int i_visible_lines; int* p_pixels; int i_pitch; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int*,int*,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_5__*,int*,int*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,char*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_5__*,int) ;

__attribute__((used)) static picture_t *FUNC_8( filter_t *VAR_1, picture_t *VAR_2 )
{
    picture_t *VAR_3;
    filter_sys_t *VAR_4 = VAR_1->p_sys;

    if( !VAR_2 ) return ((void*)0);

    int VAR_5, VAR_6, VAR_7;

    if( FUNC_1( VAR_2->format.i_chroma, &VAR_7,
                             &VAR_5, &VAR_6 ) != VAR_0 )
    {
        FUNC_5( VAR_1, "Unsupported input chroma (%4.4s)",
                  (char*)&(VAR_2->format.i_chroma) );
        FUNC_6( VAR_2 );
        return ((void*)0);
    }

    VAR_3 = FUNC_3( VAR_1 );
    if( !VAR_3 )
    {
        FUNC_6( VAR_2 );
        return ((void*)0);
    }

    const int VAR_8 = VAR_2->p->i_visible_pitch>>1;
    const int VAR_9 = VAR_2->p->i_visible_lines;

    const uint8_t *VAR_10 = VAR_2->p->p_pixels+VAR_7;
    const uint8_t *VAR_11 = VAR_2->p->p_pixels+VAR_5;
    const uint8_t *VAR_12 = VAR_2->p->p_pixels+VAR_6;
    const int VAR_13 = VAR_2->p->i_pitch;

    uint8_t *VAR_14 = VAR_3->p->p_pixels+VAR_7;
    uint8_t *VAR_15 = VAR_3->p->p_pixels+VAR_5;
    uint8_t *VAR_16 = VAR_3->p->p_pixels+VAR_6;
    const int VAR_17 = VAR_3->p->i_pitch;

    const int VAR_18 = VAR_9>>1;
    const int VAR_19 = VAR_8>>1;

    if( VAR_4->p_motion != ((void*)0) )
    {
        int VAR_20 = FUNC_4( VAR_4->p_motion );
        FUNC_7( VAR_4, VAR_20 / 20.f );
    }

    int VAR_21, VAR_22;
    FUNC_2( VAR_4, &VAR_21, &VAR_22 );

    for( int VAR_23 = 0; VAR_23 < VAR_9; VAR_23++ )
    {
        for( int VAR_24 = 0; VAR_24 < VAR_8; VAR_24++ )
        {
            int VAR_25;
            int VAR_26;

            VAR_25 = VAR_18 +
                ( ( VAR_21 * ( VAR_24 - VAR_19 )
                  + VAR_22 * ( VAR_23 - VAR_18 ) )>>12 );
            VAR_26 = VAR_19 +
                ( ( VAR_22 * ( VAR_24 - VAR_19 )
                  - VAR_21 * ( VAR_23 - VAR_18 ) )>>12 );
            if( 0 <= VAR_26 && VAR_26 < VAR_8
             && 0 <= VAR_25 && VAR_25 < VAR_9 )
            {
                VAR_14[VAR_23*VAR_17+2*VAR_24] = VAR_10[VAR_25*VAR_13+2*VAR_26];
                VAR_26 /= 2;
                VAR_15[VAR_23*VAR_17+2*VAR_24] = VAR_11[VAR_25*VAR_13+4*VAR_26];
                VAR_16[VAR_23*VAR_17+2*VAR_24] = VAR_12[VAR_25*VAR_13+4*VAR_26];
            }
            else
            {
                VAR_14[VAR_23*VAR_17+2*VAR_24] = 0x00;
                VAR_15[VAR_23*VAR_17+2*VAR_24] = 0x80;
                VAR_16[VAR_23*VAR_17+2*VAR_24] = 0x80;
            }


            VAR_24++;
            if( VAR_24 >= VAR_8 )
                break;

            VAR_25 = VAR_18 +
                ( ( VAR_21 * ( VAR_24 - VAR_19 )
                  + VAR_22 * ( VAR_23 - VAR_18 ) )>>12 );
            VAR_26 = VAR_19 +
                ( ( VAR_22 * ( VAR_24 - VAR_19 )
                  - VAR_21 * ( VAR_23 - VAR_18 ) )>>12 );
            if( 0 <= VAR_26 && VAR_26 < VAR_8
             && 0 <= VAR_25 && VAR_25 < VAR_9 )
            {
                VAR_14[VAR_23*VAR_17+2*VAR_24] = VAR_10[VAR_25*VAR_13+2*VAR_26];
            }
            else
            {
                VAR_14[VAR_23*VAR_17+2*VAR_24] = 0x00;
            }
        }
    }

    return FUNC_0( VAR_3, VAR_2 );
}
