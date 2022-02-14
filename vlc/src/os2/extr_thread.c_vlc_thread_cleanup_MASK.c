
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vlc_threadvar_t ;
struct vlc_thread {int cancel_sock; int done_event; int cancel_event; scalar_t__ detached; } ;
struct TYPE_5__ {int (* destroy ) (void*) ;struct TYPE_5__* prev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_thread*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8 (struct vlc_thread *VAR_2)
{
    vlc_threadvar_t VAR_3;

retry:

    FUNC_4 (&VAR_0);
    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->prev)
    {
        void *VAR_4 = FUNC_6 (VAR_3);
        if (VAR_4 != ((void*)0) && VAR_3->destroy != ((void*)0))
        {
            FUNC_5 (&VAR_0);
            FUNC_7 (VAR_3, ((void*)0));
            VAR_3->destroy (VAR_4);
            goto retry;
        }
    }
    FUNC_5 (&VAR_0);

    if (VAR_2->detached)
    {
        FUNC_0 (VAR_2->cancel_event);
        FUNC_0 (VAR_2->done_event );

        FUNC_2 (VAR_2->cancel_sock);

        FUNC_1 (VAR_2);
    }
}
