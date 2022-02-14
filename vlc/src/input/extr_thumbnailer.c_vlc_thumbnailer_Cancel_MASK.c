
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int worker; } ;
typedef TYPE_2__ vlc_thumbnailer_t ;
struct TYPE_7__ {int * cb; } ;
struct TYPE_9__ {int lock; TYPE_1__ params; } ;
typedef TYPE_3__ vlc_thumbnailer_request_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( vlc_thumbnailer_t* VAR_0,
                             vlc_thumbnailer_request_t* VAR_1 )
{
    FUNC_1( &VAR_1->lock );

    VAR_1->params.cb = ((void*)0);
    FUNC_2( &VAR_1->lock );
    FUNC_0( VAR_0->worker, VAR_1 );
}
