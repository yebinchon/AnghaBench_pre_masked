
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* p_next; } ;
typedef TYPE_2__ text_segment_t ;
struct TYPE_14__ {float y; } ;
struct TYPE_17__ {TYPE_2__* p_segments; int flags; TYPE_1__ origin; int inner_align; int align; } ;
struct TYPE_16__ {TYPE_4__ region; } ;
typedef TYPE_3__ subtext_updater_sys_t ;
typedef TYPE_4__ substext_updater_region_t ;
struct eia608_screen {int * row_used; } ;
struct TYPE_18__ {size_t i_screen; struct eia608_screen* screen; } ;
typedef TYPE_5__ eia608_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct eia608_screen*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( subtext_updater_sys_t *VAR_3, eia608_t *VAR_4 )
{
    struct eia608_screen *VAR_5 = &VAR_4->screen[VAR_4->i_screen];
    substext_updater_region_t *VAR_6 = &VAR_3->region;
    text_segment_t **VAR_7 = &VAR_6->p_segments;
    bool VAR_8 = 0;

    for( int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
    {
        if( !VAR_5->row_used[VAR_9] )
            continue;

        text_segment_t *VAR_10 = FUNC_0( VAR_5, VAR_9 );
        if( VAR_10 )
        {
            if( VAR_8 )
            {
                substext_updater_region_t *VAR_11;
                VAR_11 = FUNC_2();
                if( !VAR_11 )
                {
                    FUNC_3( VAR_10 );
                    return;
                }

                VAR_11->align = VAR_6->align;
                VAR_11->inner_align = VAR_6->inner_align;
                VAR_11->flags = VAR_6->flags;
                FUNC_1( VAR_6, VAR_11 );
                VAR_6 = VAR_11;
                VAR_7 = &VAR_6->p_segments;
                VAR_8 = 0;
            }

            if( VAR_6->p_segments == ((void*)0) )
            {
                VAR_6->origin.y = (float) VAR_9
                                     / (VAR_0 * VAR_1);
                VAR_6->flags |= VAR_2;
            }
            else
            {
                *VAR_7 = FUNC_4( "\n" );
                if( *VAR_7 )
                    VAR_7 = &((*VAR_7)->p_next);
            }

            *VAR_7 = VAR_10;
            do { VAR_7 = &((*VAR_7)->p_next); } while ( *VAR_7 != ((void*)0) );
        }
        else
        {
            VAR_8 = !!VAR_6->p_segments;
        }
    }
}
