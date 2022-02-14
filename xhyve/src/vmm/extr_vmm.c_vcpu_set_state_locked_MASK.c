
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu {int state; int state_sleep_cnd; int state_sleep_mtx; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;




 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct timespec const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vcpu*) ;
 int FUNC_6 (struct vcpu*) ;

__attribute__((used)) static int
FUNC_7(struct vcpu *VAR_1, enum vcpu_state VAR_2,
    bool VAR_3)
{
 int VAR_4;
 const struct timespec VAR_5 = {.tv_sec = 1, .tv_nsec = 0};






 if (VAR_3) {
  while (VAR_1->state != 130) {
   FUNC_3(&VAR_1->state_sleep_mtx);
   FUNC_6(VAR_1);
   FUNC_2(&VAR_1->state_sleep_cnd,
    &VAR_1->state_sleep_mtx, &VAR_5);
   FUNC_5(VAR_1);
   FUNC_4(&VAR_1->state_sleep_mtx);

  }
 } else {
  FUNC_0(VAR_1->state != 130, ("invalid transition from "
      "vcpu idle state"));
 }







 switch (VAR_1->state) {
 case 130:
 case 129:
 case 128:
  VAR_4 = (VAR_2 != 131);
  break;
 case 131:
  VAR_4 = (VAR_2 == 131);
  break;
 }

 if (VAR_4)
  return (VAR_0);

 VAR_1->state = VAR_2;

 if (VAR_2 == 130)
  FUNC_1(&VAR_1->state_sleep_cnd);


 return (0);
}
