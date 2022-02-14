
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_output; } ;
typedef TYPE_1__ video_splitter_t ;
typedef int picture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int **) ;

__attribute__((used)) static int FUNC_3( video_splitter_t *VAR_2,
                   picture_t *VAR_3[], picture_t *VAR_4 )
{
    if( FUNC_2( VAR_2, VAR_3 ) )
    {
        FUNC_1( VAR_4 );
        return VAR_0;
    }

    for( int VAR_5 = 0; VAR_5 < VAR_2->i_output; VAR_5++ )
        FUNC_0( VAR_3[VAR_5], VAR_4 );

    FUNC_1( VAR_4 );
    return VAR_1;
}
