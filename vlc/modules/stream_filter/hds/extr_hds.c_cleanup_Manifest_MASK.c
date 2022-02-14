
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vlc_reader; TYPE_2__* bootstraps; TYPE_1__* medias; int * element_stack; } ;
typedef TYPE_3__ manifest_t ;
struct TYPE_6__ {int profile; int url; int id; int data; } ;
struct TYPE_5__ {int metadata; int bootstrap_id; int media_url; int stream_id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2( manifest_t *VAR_3 )
{
    for (unsigned VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_0( VAR_3->element_stack[VAR_4] );

    for( unsigned VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ )
    {
        FUNC_0( VAR_3->medias[VAR_5].stream_id );
        FUNC_0( VAR_3->medias[VAR_5].media_url );
        FUNC_0( VAR_3->medias[VAR_5].bootstrap_id );
        FUNC_0( VAR_3->medias[VAR_5].metadata );
    }

    for( unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        FUNC_0( VAR_3->bootstraps[VAR_6].data );
        FUNC_0( VAR_3->bootstraps[VAR_6].id );
        FUNC_0( VAR_3->bootstraps[VAR_6].url );
        FUNC_0( VAR_3->bootstraps[VAR_6].profile );
    }

    if( VAR_3->vlc_reader )
        FUNC_1( VAR_3->vlc_reader );
}
