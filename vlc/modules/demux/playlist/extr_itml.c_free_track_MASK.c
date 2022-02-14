
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* location; struct TYPE_4__* trackNum; struct TYPE_4__* genre; struct TYPE_4__* album; struct TYPE_4__* artist; struct TYPE_4__* name; } ;
typedef TYPE_1__ track_elem_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( track_elem_t *VAR_0 )
{
    if ( !VAR_0 )
        return;

    FUNC_0( VAR_0->name );
    FUNC_0( VAR_0->artist );
    FUNC_0( VAR_0->album );
    FUNC_0( VAR_0->genre );
    FUNC_0( VAR_0->trackNum );
    FUNC_0( VAR_0->location );
    FUNC_0( VAR_0 );
}
