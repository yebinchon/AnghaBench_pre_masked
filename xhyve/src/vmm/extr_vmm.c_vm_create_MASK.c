
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int rendezvous_sleep_cnd; int rendezvous_mtx; scalar_t__ num_mem_segs; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*) ;
 int FUNC_1 (struct vm*,int) ;
 struct vm* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct vm*,int) ;
 int VAR_1 ;

int
FUNC_6(struct vm **VAR_2)
{
 struct vm *VAR_3;

 if (!VAR_1)
  return (VAR_0);

 VAR_3 = FUNC_2(sizeof(struct vm));
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, sizeof(struct vm));
 VAR_3->num_mem_segs = 0;
 FUNC_4(&VAR_3->rendezvous_mtx, ((void*)0));
 FUNC_3(&VAR_3->rendezvous_sleep_cnd, ((void*)0));

 FUNC_5(VAR_3, 1);

 *VAR_2 = VAR_3;
 return (0);
}
