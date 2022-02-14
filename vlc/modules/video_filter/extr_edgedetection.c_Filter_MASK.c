
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* p; int format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_14__ {scalar_t__ p_sys; } ;
typedef TYPE_3__ filter_t ;
typedef int filter_chain_t ;
struct TYPE_12__ {int i_visible_lines; int i_pitch; int * p_pixels; } ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int const,int const,int,int) ;

__attribute__((used)) static picture_t *FUNC_5( filter_t *VAR_1, picture_t *VAR_2 )
{
    picture_t *VAR_3 =
        FUNC_0( (filter_chain_t *)VAR_1->p_sys, VAR_2 );
    picture_t *VAR_4 = FUNC_2( &VAR_2->format );
    if ( VAR_4 == ((void*)0) )
    {
        FUNC_3( VAR_3 );
        FUNC_1( VAR_1, "Could not allocate memory for new frame" );
        return ((void*)0);
    }
    const int VAR_5 = VAR_3->p[VAR_0].i_visible_lines;
    const int VAR_6 = VAR_3->p[VAR_0].i_pitch;

    for ( int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
    {
        for ( int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++ )
        {

            *( VAR_4->p[VAR_0].p_pixels + ((VAR_6 * VAR_7) + VAR_8) ) =
                FUNC_4( VAR_3->p[VAR_0].p_pixels,
                       VAR_6, VAR_5, VAR_8, VAR_7 );
        }
    }
    FUNC_3( VAR_3 );
    return VAR_4;
}
