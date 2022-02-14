
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vlc_thread_t ;
struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_1__ wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(vlc_thread_t VAR_0)
{
    FUNC_0(&VAR_0->wait.lock);
    FUNC_1(VAR_0);
}
