
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int i_media; TYPE_1__** media; } ;
typedef TYPE_2__ vlm_t ;
typedef int vlm_media_t ;
struct TYPE_4__ {int cfg; } ;


 int FUNC_0 (int,int **,int *) ;
 int FUNC_1 (int,int **) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( vlm_t *VAR_1, vlm_media_t ***VAR_2, int *VAR_3 )
{
    vlm_media_t **VAR_4;
    int VAR_5;

    FUNC_1( VAR_5, VAR_4 );
    for( int VAR_6 = 0; VAR_6 < VAR_1->i_media; VAR_6++ )
    {
        vlm_media_t *VAR_7 = FUNC_2( &VAR_1->media[VAR_6]->cfg );
        FUNC_0( VAR_5, VAR_4, VAR_7 );
    }

    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;

    return VAR_0;
}
