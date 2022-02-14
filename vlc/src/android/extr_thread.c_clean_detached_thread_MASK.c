
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct vlc_thread {TYPE_1__ wait; } ;


 int FUNC_0 (struct vlc_thread*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct vlc_thread *VAR_1 = VAR_0;


    FUNC_1(&VAR_1->wait.lock);
    FUNC_0(VAR_1);
}
