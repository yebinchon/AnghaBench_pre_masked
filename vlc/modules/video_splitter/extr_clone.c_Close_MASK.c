
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int i_output; TYPE_2__* p_output; } ;
typedef TYPE_1__ video_splitter_t ;
struct TYPE_5__ {int fmt; struct TYPE_5__* psz_module; } ;
typedef TYPE_2__ video_splitter_output_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( vlc_object_t *VAR_0 )
{
    video_splitter_t *VAR_1 = (video_splitter_t*)VAR_0;

    for( int VAR_2 = 0; VAR_2 < VAR_1->i_output; VAR_2++ )
    {
        video_splitter_output_t *VAR_3 = &VAR_1->p_output[VAR_2];

        FUNC_0( VAR_3->psz_module );
        FUNC_1( &VAR_3->fmt );
    }
    FUNC_0( VAR_1->p_output );
}
