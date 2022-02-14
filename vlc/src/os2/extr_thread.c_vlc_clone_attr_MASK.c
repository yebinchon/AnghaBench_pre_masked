
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_thread* vlc_thread_t ;
struct vlc_thread {void* (* entry ) (void*) ;int detached; int killable; int killed; scalar_t__ cancel_sock; int done_event; int cancel_event; scalar_t__ tid; int * cleaners; void* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int *,int,struct vlc_thread*) ;
 int FUNC_6 (struct vlc_thread*) ;
 struct vlc_thread* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11 (vlc_thread_t *VAR_6, bool VAR_7,
                           void *(*VAR_8) (void *), void *VAR_9, int VAR_10)
{
    struct vlc_thread *VAR_11 = FUNC_7 (sizeof (*VAR_11));
    if (FUNC_10(VAR_11 == ((void*)0)))
        return VAR_1;
    VAR_11->entry = VAR_8;
    VAR_11->data = VAR_9;
    VAR_11->detached = VAR_7;
    VAR_11->killable = 0;
    VAR_11->killed = 0;
    VAR_11->cleaners = ((void*)0);

    if( FUNC_1 (((void*)0), &VAR_11->cancel_event, 0, VAR_2))
        goto error;
    if( FUNC_1 (((void*)0), &VAR_11->done_event, 0, VAR_2))
        goto error;

    VAR_11->cancel_sock = FUNC_8 (VAR_0, VAR_4, 0);
    if( VAR_11->cancel_sock < 0 )
        goto error;

    VAR_11->tid = FUNC_5 (VAR_5, ((void*)0), 1024 * 1024, VAR_11);
    if((int)VAR_11->tid == -1)
        goto error;

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_11;

    if (VAR_10)
        FUNC_2(VAR_3,
                       FUNC_3(VAR_10),
                       FUNC_4(VAR_10),
                       VAR_11->tid);

    return 0;

error:
    FUNC_9 (VAR_11->cancel_sock);
    FUNC_0 (VAR_11->cancel_event);
    FUNC_0 (VAR_11->done_event);
    FUNC_6 (VAR_11);

    return VAR_1;
}
