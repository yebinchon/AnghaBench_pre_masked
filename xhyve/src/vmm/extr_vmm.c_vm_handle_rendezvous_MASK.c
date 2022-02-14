
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int rendezvous_mtx; int rendezvous_sleep_cnd; int rendezvous_done_cpus; int rendezvous_req_cpus; int rendezvous_arg; int (* rendezvous_func ) (struct vm*,int,int ) ;int active_cpus; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct vm*,int,char*) ;
 int FUNC_6 (struct vm*,int,char*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vm*,int,int ) ;
 int FUNC_12 (struct vm*,int *) ;

__attribute__((used)) static void
FUNC_13(struct vm *VAR_1, int VAR_2)
{

 FUNC_4(VAR_2 == -1 || (VAR_2 >= 0 && VAR_2 < VAR_0),
     ("vm_handle_rendezvous: invalid vcpuid %d", VAR_2));

 FUNC_9(&VAR_1->rendezvous_mtx);
 while (VAR_1->rendezvous_func != ((void*)0)) {

  FUNC_0(&VAR_1->rendezvous_req_cpus, &VAR_1->active_cpus);

  if (VAR_2 != -1 &&
      FUNC_2(((unsigned) VAR_2), &VAR_1->rendezvous_req_cpus) &&
      !FUNC_2(((unsigned) VAR_2), &VAR_1->rendezvous_done_cpus)) {
   FUNC_6(VAR_1, VAR_2, "Calling rendezvous func");
   (*VAR_1->rendezvous_func)(VAR_1, VAR_2, VAR_1->rendezvous_arg);
   FUNC_3(((unsigned) VAR_2), &VAR_1->rendezvous_done_cpus);
  }
  if (FUNC_1(&VAR_1->rendezvous_req_cpus,
      &VAR_1->rendezvous_done_cpus) == 0) {
   FUNC_6(VAR_1, VAR_2, "Rendezvous completed");
   FUNC_12(VAR_1, ((void*)0));
   FUNC_7(&VAR_1->rendezvous_sleep_cnd);

   break;
  }
  FUNC_5(VAR_1, VAR_2, "Wait for rendezvous completion");
  FUNC_8(&VAR_1->rendezvous_sleep_cnd, &VAR_1->rendezvous_mtx);

 }
 FUNC_10(&VAR_1->rendezvous_mtx);
}
