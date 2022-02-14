
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; TYPE_1__* p_sessions; int ** pp_selected_programs; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_6__ {int (* pf_close ) (TYPE_2__*,unsigned int) ;scalar_t__ i_resource_id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (int ) ;

void FUNC_4( cam_t * VAR_2 )
{
    for( unsigned VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        if( VAR_2->pp_selected_programs[VAR_3] != ((void*)0) )
        {
            FUNC_0( VAR_2->pp_selected_programs[VAR_3] );
        }
    }

    for( unsigned VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++ )
    {
        if( VAR_2->p_sessions[VAR_4 - 1].i_resource_id
              && VAR_2->p_sessions[VAR_4 - 1].pf_close != ((void*)0) )
        {
            VAR_2->p_sessions[VAR_4 - 1].pf_close( VAR_2, VAR_4 );
        }
    }

    FUNC_3( VAR_2->fd );
    FUNC_1( VAR_2 );
}
