
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_from_item_id; scalar_t__ i_item_id; } ;
struct TYPE_7__ {struct TYPE_7__* p_next; struct TYPE_7__* p_first; } ;
typedef TYPE_1__ MP4_Box_t ;


 TYPE_5__* FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static bool FUNC_2( const MP4_Box_t *VAR_0, void *VAR_1 )
{
    MP4_Box_t *VAR_2 = VAR_1;
    const MP4_Box_t *VAR_3 = FUNC_1( VAR_2, "meta/iref" );
    if( !VAR_3 )
        return 1;
    for( const MP4_Box_t *VAR_4 = VAR_3->p_first;
                          VAR_4; VAR_4 = VAR_4->p_next )
    {
        if( FUNC_0(VAR_4)->i_from_item_id == FUNC_0(VAR_0)->i_item_id )
            return 0;
    }
    return 1;
}
