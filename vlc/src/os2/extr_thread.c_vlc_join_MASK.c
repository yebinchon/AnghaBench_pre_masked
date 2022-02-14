
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_thread_t ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {int cancel_sock; int done_event; int cancel_event; void* data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

void FUNC_5 (vlc_thread_t VAR_2, void **VAR_3)
{
    ULONG VAR_4;

    do
    {
        FUNC_4();
        VAR_4 = FUNC_3( VAR_2->done_event, VAR_1 );
    } while( VAR_4 == VAR_0 );

    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_2->data;

    FUNC_0( VAR_2->cancel_event );
    FUNC_0( VAR_2->done_event );

    FUNC_2( VAR_2->cancel_sock );

    FUNC_1( VAR_2 );
}
