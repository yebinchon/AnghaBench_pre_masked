
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int (* proc ) (int ) ;struct TYPE_2__* next; } ;
typedef TYPE_1__ vlc_cleanup_t ;
struct vlc_thread {int * data; int done_event; TYPE_1__* cleaners; scalar_t__ killed; scalar_t__ killable; int cancel_event; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vlc_thread*) ;
 int FUNC_5 (struct vlc_thread*) ;
 struct vlc_thread* FUNC_6 () ;

void FUNC_7 (void)
{
    struct vlc_thread *VAR_1 = FUNC_6 ();
    if (VAR_1 == ((void*)0))
        return;



    if( FUNC_1( VAR_1->cancel_event, 0 ) == VAR_0 )
        FUNC_4( VAR_1 );

    if (VAR_1->killable && VAR_1->killed)
    {
        for (vlc_cleanup_t *VAR_2 = VAR_1->cleaners; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
             VAR_2->proc (VAR_2->data);

        FUNC_0( VAR_1->done_event );
        VAR_1->data = ((void*)0);
        FUNC_5 (VAR_1);
        FUNC_2();
    }
}
