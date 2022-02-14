
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {TYPE_1__* master; int p_item; int interrupt; int input; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_3__ {int p_demux; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void *FUNC_7( void *VAR_1 )
{
    input_thread_private_t *VAR_2 = VAR_1;
    input_thread_t *VAR_3 = &VAR_2->input;

    FUNC_6(&VAR_2->interrupt);

    if( !FUNC_1( VAR_3 ) )
    {

        bool VAR_4 = 0;

        if ( FUNC_5( VAR_2->p_item )
          && FUNC_3( VAR_2->master->p_demux, VAR_0,
                            &VAR_4 ) )
            VAR_4 = 0;
        if( VAR_4 )
            FUNC_2( VAR_3, 0 );
        FUNC_0( VAR_3 );
    }

    FUNC_4( VAR_3 );
    return ((void*)0);
}
