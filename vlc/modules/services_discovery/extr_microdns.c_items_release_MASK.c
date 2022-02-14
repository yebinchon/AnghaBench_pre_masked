
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* psz_uri; int * p_renderer_item; int * p_input_item; } ;
struct discovery_sys {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4( struct discovery_sys *VAR_0, struct item *VAR_1 )
{
    (void) VAR_0;
    if( VAR_1->p_input_item != ((void*)0) )
    {
        FUNC_2( VAR_1->p_input_item );
    }
    else
    {
        FUNC_0( VAR_1->p_renderer_item != ((void*)0) );
        FUNC_3( VAR_1->p_renderer_item );
    }

    FUNC_1( VAR_1->psz_uri );
    FUNC_1( VAR_1 );
}
