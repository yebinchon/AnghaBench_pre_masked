
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int64_t
FUNC_5( libvlc_media_t * VAR_0 )
{
    FUNC_0( VAR_0 );

    if( !VAR_0->p_input_item )
    {
        FUNC_4( "No input item" );
        return -1;
    }

    if (!FUNC_3( VAR_0->p_input_item ))
        return -1;

    return FUNC_1(FUNC_2( VAR_0->p_input_item ));
}
