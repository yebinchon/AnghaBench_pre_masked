
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int seekpoint_t ;
struct TYPE_3__ {unsigned int i_size; int ** pp_chapters; } ;
typedef TYPE_1__ chapters_array_t ;


 void* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int **,int) ;
 int * FUNC_3 () ;

__attribute__((used)) static seekpoint_t * FUNC_4( unsigned int VAR_0, chapters_array_t *VAR_1 )
{
    if ( VAR_0 > 4096 ) return ((void*)0);
    if ( VAR_0 >= VAR_1->i_size )
    {
        unsigned int VAR_2 = VAR_1->i_size;
        while( VAR_0 >= VAR_2 ) VAR_2 += 50;

        if ( !VAR_1->pp_chapters )
        {
            VAR_1->pp_chapters = FUNC_0( VAR_2, sizeof( seekpoint_t * ) );
            if ( !VAR_1->pp_chapters ) return ((void*)0);
            VAR_1->i_size = VAR_2;
        } else {
            seekpoint_t **VAR_3 = FUNC_0( VAR_2, sizeof( seekpoint_t * ) );
            if ( !VAR_3 ) return ((void*)0);
            FUNC_2( VAR_3, VAR_1->pp_chapters, VAR_1->i_size * sizeof( seekpoint_t * ) );
            FUNC_1( VAR_1->pp_chapters );
            VAR_1->pp_chapters = VAR_3;
            VAR_1->i_size = VAR_2;
        }
    }
    if ( !VAR_1->pp_chapters[VAR_0] )
        VAR_1->pp_chapters[VAR_0] = FUNC_3();
    return VAR_1->pp_chapters[VAR_0];
}
