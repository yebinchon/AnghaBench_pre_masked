
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int suspended_cpus; int * rendezvous_func; int active_cpus; struct vcpu* vcpu; } ;
struct vcpu {int vcpu_sleep_mtx; int vcpu_sleep_cnd; } ;
struct timespec {int tv_sec; int tv_nsec; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (struct vm*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,struct timespec const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vcpu*) ;
 int FUNC_8 (struct vm*,int,int) ;
 int FUNC_9 (struct vcpu*,int ) ;
 int FUNC_10 (struct vcpu*) ;
 int FUNC_11 (struct vm*,int) ;

__attribute__((used)) static int
FUNC_12(struct vm *VAR_3, int VAR_4, bool *VAR_5)
{
 int VAR_6, VAR_7;
 struct vcpu *VAR_8;
 const struct timespec VAR_9 = {.tv_sec = 1, .tv_nsec = 0};

 VAR_7 = 0;
 VAR_8 = &VAR_3->vcpu[VAR_4];

 FUNC_2(((unsigned) VAR_4), &VAR_3->suspended_cpus);
 FUNC_7(VAR_8);
 while (1) {
  if (FUNC_0(&VAR_3->suspended_cpus, &VAR_3->active_cpus) == 0) {
   FUNC_3(VAR_3, VAR_4, "All vcpus suspended");
   break;
  }

  if (VAR_3->rendezvous_func == ((void*)0)) {
   FUNC_3(VAR_3, VAR_4, "Sleeping during suspend");
   FUNC_9(VAR_8, VAR_1);

   FUNC_5(&VAR_8->vcpu_sleep_mtx);
   FUNC_10(VAR_8);
   FUNC_4(&VAR_8->vcpu_sleep_cnd,
    &VAR_8->vcpu_sleep_mtx, &VAR_9);
   FUNC_7(VAR_8);
   FUNC_6(&VAR_8->vcpu_sleep_mtx);


   FUNC_9(VAR_8, VAR_0);
  } else {
   FUNC_3(VAR_3, VAR_4, "Rendezvous during suspend");
   FUNC_10(VAR_8);
   FUNC_11(VAR_3, VAR_4);
   FUNC_7(VAR_8);
  }
 }
 FUNC_10(VAR_8);




 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_1(((unsigned) VAR_6), &VAR_3->suspended_cpus)) {
   FUNC_8(VAR_3, VAR_6, 0);
  }
 }

 *VAR_5 = 1;
 return (0);
}
