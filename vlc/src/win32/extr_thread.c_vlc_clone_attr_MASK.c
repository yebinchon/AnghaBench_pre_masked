
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct vlc_thread* vlc_thread_t ;
struct TYPE_2__ {int lock; int * addr; } ;
struct vlc_thread {void* (* entry ) (void*) ;int killable; int * id; TYPE_1__ wait; int * cleaners; int killed; void* data; } ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 uintptr_t FUNC_3 (int *,int ,int ,struct vlc_thread*,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 int FUNC_5 (struct vlc_thread*) ;
 struct vlc_thread* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8 (vlc_thread_t *VAR_3, bool VAR_4,
                           void *(*VAR_5) (void *), void *VAR_6, int VAR_7)
{
    struct vlc_thread *VAR_8 = FUNC_6 (sizeof (*VAR_8));
    if (FUNC_7(VAR_8 == ((void*)0)))
        return VAR_0;
    VAR_8->entry = VAR_5;
    VAR_8->data = VAR_6;
    VAR_8->killable = 0;
    FUNC_4(&VAR_8->killed, 0);
    VAR_8->cleaners = ((void*)0);
    VAR_8->wait.addr = ((void*)0);
    FUNC_1(&VAR_8->wait.lock);





    uintptr_t VAR_9 = FUNC_3 (((void*)0), 0, VAR_2, VAR_8, 0, ((void*)0));
    if (VAR_9 == 0)
    {
        int VAR_10 = VAR_1;
        FUNC_5 (VAR_8);
        return VAR_10;
    }

    if (VAR_4)
    {
        FUNC_0((HANDLE)VAR_9);
        VAR_8->id = ((void*)0);
    }
    else
        VAR_8->id = (HANDLE)VAR_9;

    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_8;

    if (VAR_7)
        FUNC_2 (VAR_8->id, VAR_7);

    return 0;
}
