
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rflags; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_6__ {TYPE_2__ hlt; TYPE_1__ ioapic_eoi; } ;
struct vm_exit {unsigned int rip; TYPE_3__ u; scalar_t__ exitcode; scalar_t__ inst_length; } ;
struct vm {int cookie; struct vcpu* vcpu; int suspend; int rendezvous_func; int suspended_cpus; int active_cpus; } ;
struct vcpu {unsigned int nextrip; struct vm_exit exitinfo; } ;
typedef int register_t ;


 scalar_t__ FUNC_0 (unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ,void*,void*) ;
 int VAR_4 ;
 int FUNC_2 (struct vm_exit*,struct vm_exit*,int) ;
 int FUNC_3 (struct vm*,int,int ) ;
 int FUNC_4 (struct vm*,int,int ) ;
 int FUNC_5 (struct vm*,int,int) ;
 int FUNC_6 (struct vm*,int,struct vm_exit*,int*) ;
 int FUNC_7 (struct vm*,int,int*) ;
 int FUNC_8 (struct vm*,int) ;
 int FUNC_9 (struct vm*,int,int*) ;
 int FUNC_10 (struct vm*,int) ;

int
FUNC_11(struct vm *VAR_5, int VAR_6, struct vm_exit *VAR_7)
{
 int VAR_8;
 struct vcpu *VAR_9;

 struct vm_exit *VAR_10;
 bool VAR_11, VAR_12;
 void *VAR_13, *VAR_14;

 if (VAR_6 < 0 || VAR_6 >= VAR_4)
  return (VAR_0);

 if (!FUNC_0(((unsigned) VAR_6), &VAR_5->active_cpus))
  return (VAR_0);

 if (FUNC_0(((unsigned) VAR_6), &VAR_5->suspended_cpus))
  return (VAR_0);

 VAR_13 = &VAR_5->rendezvous_func;
 VAR_14 = &VAR_5->suspend;
 VAR_9 = &VAR_5->vcpu[VAR_6];
 VAR_10 = &VAR_9->exitinfo;
 VAR_11 = 0;

restart:


 FUNC_3(VAR_5, VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_5->cookie, VAR_6, (register_t) VAR_9->nextrip, VAR_13, VAR_14);
 FUNC_3(VAR_5, VAR_6, VAR_2);




 if (VAR_8 == 0) {
  VAR_11 = 0;
  VAR_9->nextrip = VAR_10->rip + ((unsigned) VAR_10->inst_length);
  switch (((int) (VAR_10->exitcode))) {
  case 128:
   VAR_8 = FUNC_9(VAR_5, VAR_6, &VAR_11);
   break;
  case 133:
   FUNC_4(VAR_5, VAR_6,
       VAR_10->u.ioapic_eoi.vector);
   break;
  case 129:
   FUNC_8(VAR_5, VAR_6);
   VAR_8 = 0;
   break;
  case 137:
   VAR_12 = ((VAR_10->u.hlt.rflags & VAR_1) == 0);
   VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_12);
   break;
  case 130:
   VAR_8 = 0;
   break;
  case 134:
   VAR_8 = FUNC_7(VAR_5, VAR_6, &VAR_11);
   break;
  case 136:
  case 135:
   VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_10, &VAR_11);
   break;
  case 132:
  case 131:
   FUNC_10(VAR_5, VAR_6);
   break;
  default:
   VAR_11 = 1;
   break;
  }
 }

 if (VAR_8 == 0 && VAR_11 == 0)
  goto restart;


 FUNC_2(VAR_10, VAR_7, sizeof(struct vm_exit));
 return (VAR_8);
}
