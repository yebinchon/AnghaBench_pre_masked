
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_title; int * title; scalar_t__ p_demux; } ;
typedef TYPE_1__ input_source_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( input_source_t *VAR_0 )
{
    int VAR_1;

    if( VAR_0->p_demux )
        FUNC_1( VAR_0->p_demux );

    if( VAR_0->i_title > 0 )
    {
        for( VAR_1 = 0; VAR_1 < VAR_0->i_title; VAR_1++ )
            FUNC_3( VAR_0->title[VAR_1] );
        FUNC_0( VAR_0->i_title, VAR_0->title );
    }

    FUNC_2( VAR_0 );
}
