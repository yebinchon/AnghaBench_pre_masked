
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vlc_thread_t ;
struct TYPE_6__ {int data; int (* entry ) (int ) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int (*) (TYPE_1__*),TYPE_1__*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_1)
{
    vlc_thread_t VAR_2 = VAR_1;

    VAR_0 = VAR_2;

    FUNC_3(FUNC_0, VAR_2);
    VAR_2->entry(VAR_2->data);
    FUNC_2();
    FUNC_0(VAR_2);
    return ((void*)0);
}
