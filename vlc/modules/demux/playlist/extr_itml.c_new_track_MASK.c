
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ duration; int * location; int * trackNum; int * genre; int * album; int * artist; int * name; } ;
typedef TYPE_1__ track_elem_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static track_elem_t *FUNC_2()
{
    track_elem_t *VAR_0 = FUNC_1( sizeof *VAR_0 );
    if( FUNC_0( VAR_0 ) )
    {
        VAR_0->name = ((void*)0);
        VAR_0->artist = ((void*)0);
        VAR_0->album = ((void*)0);
        VAR_0->genre = ((void*)0);
        VAR_0->trackNum = ((void*)0);
        VAR_0->location = ((void*)0);
        VAR_0->duration = 0;
    }
    return VAR_0;
}
