
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vlc_thread_t ;
typedef int atomic_int ;
struct TYPE_4__ {int lock; int * addr; } ;
struct TYPE_5__ {TYPE_1__ wait; int killed; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (vlc_thread_t VAR_1)
{
    atomic_int *VAR_2;

    FUNC_1(&VAR_1->killed, 1);

    FUNC_3(&VAR_1->wait.lock);
    VAR_2 = VAR_1->wait.addr;
    if (VAR_2 != ((void*)0))
    {
        FUNC_0(VAR_2, 1, VAR_0);
        FUNC_2(VAR_2);
    }
    FUNC_4(&VAR_1->wait.lock);
}
