
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_error; int b_ready; int obj; int b_done; int lock; int wait; } ;
typedef TYPE_1__ event_thread_t ;
typedef int MSG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;

__attribute__((used)) static void *FUNC_12( void *VAR_0 )
{
    event_thread_t *VAR_1 = (event_thread_t *)VAR_0;
    MSG VAR_2;
    int VAR_3 = FUNC_11 ();


    FUNC_8( &VAR_1->lock );



    if( FUNC_4( VAR_1 ) )
        VAR_1->b_error = 1;

    VAR_1->b_ready = 1;
    FUNC_7( &VAR_1->wait );

    const bool VAR_4 = VAR_1->b_error;
    FUNC_9( &VAR_1->lock );

    if( VAR_4 )
    {
        FUNC_10( VAR_3 );
        return ((void*)0);
    }



    for( ;; )
    {
        if( !FUNC_1( &VAR_2, 0, 0, 0 ) || FUNC_5( &VAR_1->b_done ) )
        {
            break;
        }



        FUNC_2(&VAR_2);
        FUNC_0(&VAR_2);

    }

    FUNC_6( VAR_1->obj, "Win32 Vout EventThread terminating" );

    FUNC_3( VAR_1 );
    FUNC_10(VAR_3);
    return ((void*)0);
}
