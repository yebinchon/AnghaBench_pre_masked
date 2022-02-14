
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kc_in_use_lock; scalar_t__ kc_refcnt; } ;
typedef TYPE_1__ kcf_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, void *VAR_2, int VAR_3)
{
 kcf_context_t *VAR_4 = (kcf_context_t *)VAR_1;

 VAR_4->kc_refcnt = 0;
 FUNC_0(&VAR_4->kc_in_use_lock, ((void*)0), VAR_0, ((void*)0));

 return (0);
}
