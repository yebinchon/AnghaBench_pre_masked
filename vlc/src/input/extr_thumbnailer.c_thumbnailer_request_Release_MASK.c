
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int input_item; } ;
struct TYPE_5__ {int lock; TYPE_1__ params; scalar_t__ input_thread; } ;
typedef TYPE_2__ vlc_thumbnailer_request_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void* VAR_0 )
{
    vlc_thumbnailer_request_t* VAR_1 = VAR_0;
    if ( VAR_1->input_thread )
        FUNC_1( VAR_1->input_thread );

    FUNC_2( VAR_1->params.input_item );
    FUNC_3( &VAR_1->lock );
    FUNC_0( VAR_1 );
}
