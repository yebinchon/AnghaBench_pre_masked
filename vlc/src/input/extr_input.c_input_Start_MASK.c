
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {int is_running; int thread; scalar_t__ b_preparsing; } ;
typedef TYPE_1__ input_thread_private_t ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,void* (*) (void*),TYPE_1__*,int ) ;

int FUNC_6( input_thread_t *VAR_3 )
{
    input_thread_private_t *VAR_4 = FUNC_3(VAR_3);
    void *(*VAR_5)(void *) = FUNC_1;

    if( VAR_4->b_preparsing )
        VAR_5 = FUNC_0;

    FUNC_2( !VAR_4->is_running );

    VAR_4->is_running = !FUNC_5( &VAR_4->thread, VAR_5, VAR_4,
                                   VAR_2 );
    if( !VAR_4->is_running )
    {
        FUNC_4( VAR_3, "cannot create input thread" );
        return VAR_0;
    }
    return VAR_1;
}
