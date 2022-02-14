
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vlc_thread_t ;
typedef int sigset_t ;
typedef int pthread_attr_t ;
struct TYPE_6__ {int lock; int * addr; } ;
struct TYPE_7__ {int killable; void* (* entry ) (void*) ;int thread; TYPE_1__ wait; void* data; int killed; int finished; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13 (vlc_thread_t *VAR_12, void *(*VAR_13) (void *),
                           void *VAR_14, bool VAR_15)
{
    vlc_thread_t VAR_16 = FUNC_1 (sizeof (*VAR_16));
    if (FUNC_10(VAR_16 == ((void*)0)))
        return VAR_0;

    int VAR_17;

    sigset_t VAR_18;
    {
        sigset_t VAR_19;
        FUNC_9 (&VAR_19);
        FUNC_8 (&VAR_19, VAR_3);
        FUNC_7 (&VAR_19, VAR_4);
        FUNC_7 (&VAR_19, VAR_6);
        FUNC_7 (&VAR_19, VAR_7);

        FUNC_7 (&VAR_19, VAR_5);
        FUNC_6 (VAR_8, &VAR_19, &VAR_18);
    }

    if (!VAR_15)
        FUNC_12(&VAR_16->finished, 0);
    FUNC_0(&VAR_16->killed, 0);
    VAR_16->killable = 1;
    VAR_16->entry = VAR_13;
    VAR_16->data = VAR_14;
    VAR_16->wait.addr = ((void*)0);
    FUNC_11(&VAR_16->wait.lock);

    pthread_attr_t VAR_20;
    FUNC_3 (&VAR_20);
    FUNC_4 (&VAR_20, VAR_15 ? VAR_1
                                               : VAR_2);

    VAR_17 = FUNC_5 (&VAR_16->thread, &VAR_20,
                          VAR_15 ? VAR_10 : VAR_11, VAR_16);
    FUNC_2 (&VAR_20);

    FUNC_6 (VAR_9, &VAR_18, ((void*)0));
    *VAR_12 = VAR_16;
    return VAR_17;
}
