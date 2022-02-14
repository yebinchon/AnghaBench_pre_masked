
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_attr; } ;
typedef TYPE_1__ tpool_t ;
typedef int sigset_t ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(tpool_t *VAR_2)
{
 pthread_t VAR_3;
 sigset_t VAR_4;
 int VAR_5;

 (void) FUNC_1(VAR_0, ((void*)0), &VAR_4);
 VAR_5 = FUNC_0(&VAR_3, &VAR_2->tp_attr, VAR_1, VAR_2);
 (void) FUNC_1(VAR_0, &VAR_4, ((void*)0));
 return (VAR_5);
}
