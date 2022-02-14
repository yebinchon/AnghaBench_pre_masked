
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ i_program_number; } ;
typedef TYPE_2__ en50221_capmt_info_t ;
struct TYPE_16__ {TYPE_1__* p_sessions; TYPE_2__** pp_selected_programs; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_14__ {scalar_t__ i_resource_id; } ;


 int FUNC_0 (TYPE_3__*,unsigned int,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,unsigned int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,unsigned int,TYPE_2__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5( cam_t * VAR_4, en50221_capmt_info_t *VAR_5 )
{
    bool VAR_6 = 0;
    bool VAR_7 = FUNC_2( VAR_5 );

    for ( unsigned VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ )
    {
        if ( VAR_4->pp_selected_programs[VAR_8] != ((void*)0)
              && VAR_4->pp_selected_programs[VAR_8]->i_program_number
                  == VAR_5->i_program_number )
        {
            VAR_6 = 1;

            if ( !VAR_7 )
            {
                FUNC_4( VAR_5 );
                VAR_5 = VAR_4->pp_selected_programs[VAR_8];
                VAR_4->pp_selected_programs[VAR_8] = ((void*)0);
            }
            else if( VAR_5 != VAR_4->pp_selected_programs[VAR_8] )
            {
                FUNC_4( VAR_4->pp_selected_programs[VAR_8] );
                VAR_4->pp_selected_programs[VAR_8] = VAR_5;
            }

            break;
        }
    }

    if ( !VAR_6 && VAR_7 )
    {
        for ( unsigned VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
        {
            if ( VAR_4->pp_selected_programs[VAR_9] == ((void*)0) )
            {
                VAR_4->pp_selected_programs[VAR_9] = VAR_5;
                break;
            }
        }
    }

    if ( VAR_6 || VAR_7 )
    {
        for ( unsigned VAR_10 = 1; VAR_10 <= VAR_1; VAR_10++ )
        {
            if ( VAR_4->p_sessions[VAR_10 - 1].i_resource_id
                    == VAR_2 )
            {
                if ( VAR_6 && VAR_7 )
                    FUNC_3( VAR_4, VAR_10, VAR_5 );
                else if ( VAR_6 )
                    FUNC_1( VAR_4, VAR_10, VAR_5 );
                else
                    FUNC_0( VAR_4, VAR_10, VAR_5 );
            }
        }
    }

    if ( !VAR_7 )
    {
        FUNC_4( VAR_5 );
    }

    return VAR_3;
}
