
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int halted_cpus; int active_cpus; scalar_t__ suspend; int * rendezvous_func; struct vcpu* vcpu; } ;
struct vcpu {int vcpu_sleep_mtx; int vcpu_sleep_cnd; int vlapic; } ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (unsigned int,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct vm*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,int *,struct timespec const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vcpu*) ;
 int FUNC_10 (struct vcpu*,int ) ;
 int FUNC_11 (struct vcpu*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (struct vm*,int) ;
 scalar_t__ FUNC_14 (struct vm*,int) ;
 int FUNC_15 (struct vm*,int ) ;

__attribute__((used)) static int
FUNC_16(struct vm *VAR_4, int VAR_5, bool VAR_6)
{
 struct vcpu *VAR_7;
 const char *VAR_8;
 int VAR_9, VAR_10;
 const struct timespec VAR_11 = {.tv_sec = 1, .tv_nsec = 0};

 FUNC_4(!FUNC_2(((unsigned) VAR_5), &VAR_4->halted_cpus),
  ("vcpu already halted"));

 VAR_7 = &VAR_4->vcpu[VAR_5];
 VAR_9 = 0;
 VAR_10 = 0;

 FUNC_9(VAR_7);
 while (1) {
  if (VAR_4->rendezvous_func != ((void*)0) || VAR_4->suspend)
   break;
  if (FUNC_14(VAR_4, VAR_5))
   break;
  if (!VAR_6) {
   if (FUNC_13(VAR_4, VAR_5) ||
       FUNC_12(VAR_7->vlapic, ((void*)0))) {
    break;
   }
  }







  if (VAR_6) {
   VAR_8 = "vmhalt";
   FUNC_5(VAR_4, VAR_5, "Halted");
   if (!VAR_9 && VAR_3) {
    VAR_9 = 1;
    FUNC_3(((unsigned) VAR_5), &VAR_4->halted_cpus);
   }
   if (FUNC_1(&VAR_4->halted_cpus, &VAR_4->active_cpus) == 0) {
    VAR_10 = 1;
    break;
   }
  } else {
   VAR_8 = "vmidle";
  }


  FUNC_10(VAR_7, VAR_1);




  FUNC_7(&VAR_7->vcpu_sleep_mtx);
  FUNC_11(VAR_7);
  FUNC_6(&VAR_7->vcpu_sleep_cnd,
   &VAR_7->vcpu_sleep_mtx, &VAR_11);
  FUNC_9(VAR_7);
  FUNC_8(&VAR_7->vcpu_sleep_mtx);

  FUNC_10(VAR_7, VAR_0);

 }

 if (VAR_9)
  FUNC_0(((unsigned) VAR_5), &VAR_4->halted_cpus);

 FUNC_11(VAR_7);

 if (VAR_10)
  FUNC_15(VAR_4, VAR_2);

 return (0);
}
