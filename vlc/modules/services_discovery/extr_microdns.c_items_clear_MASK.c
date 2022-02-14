
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;
struct discovery_sys {int items; } ;


 int FUNC_0 (struct discovery_sys*,struct item*) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 struct item* FUNC_3 (int *,size_t) ;

__attribute__((used)) static void
FUNC_4( struct discovery_sys *VAR_0 )
{
    for( size_t VAR_1 = 0; VAR_1 < FUNC_2( &VAR_0->items ); ++VAR_1 )
    {
        struct item *VAR_2 = FUNC_3( &VAR_0->items, VAR_1 );
        FUNC_0( VAR_0, VAR_2 );
    }
    FUNC_1( &VAR_0->items );
}
