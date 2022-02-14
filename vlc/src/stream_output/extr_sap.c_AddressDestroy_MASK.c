
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int lock; int wait; int thread; int * first; } ;
typedef TYPE_1__ sap_address_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (sap_address_t *VAR_0)
{
    FUNC_0 (VAR_0->first == ((void*)0));

    FUNC_3 (VAR_0->thread);
    FUNC_5 (VAR_0->thread, ((void*)0));
    FUNC_4 (&VAR_0->wait);
    FUNC_6 (&VAR_0->lock);
    FUNC_2 (VAR_0->fd);
    FUNC_1 (VAR_0);
}
