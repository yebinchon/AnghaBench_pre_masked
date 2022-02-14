
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_thread_t ;
struct TYPE_4__ {int thread; int finished; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (vlc_thread_t VAR_0, void **VAR_1)
{
    FUNC_4 (&VAR_0->finished);
    FUNC_3 (&VAR_0->finished);

    int VAR_2 = FUNC_2 (VAR_0->thread, VAR_1);
    FUNC_0 ("joining thread");
    FUNC_1(VAR_0);
}
