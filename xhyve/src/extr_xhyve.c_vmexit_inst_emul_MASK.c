
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vie {int num_valid; int* inst; } ;
struct TYPE_4__ {int gpa; int paging; struct vie vie; } ;
struct TYPE_5__ {TYPE_1__ inst_emul; } ;
struct vm_exit {int rip; TYPE_2__ u; } ;
struct TYPE_6__ {int vmexit_inst_emul; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct vie*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct vm_exit *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 struct vie *VAR_9;

 VAR_3.vmexit_inst_emul++;

 VAR_9 = &VAR_5->u.inst_emul.vie;
 VAR_7 = FUNC_0(*VAR_6, VAR_5->u.inst_emul.gpa, VAR_9,
  &VAR_5->u.inst_emul.paging);

 if (VAR_7) {
  if (VAR_7 == VAR_0) {
   FUNC_1(VAR_4, "Unhandled memory access to 0x%x\n",
       VAR_5->u.inst_emul.gpa);
  }

  FUNC_1(VAR_4, "Failed to emulate instruction [");
  for (VAR_8 = 0; VAR_8 < VAR_9->num_valid; VAR_8++) {
   FUNC_1(VAR_4, "0x%02x%s", VAR_9->inst[VAR_8],
       VAR_8 != (VAR_9->num_valid - 1) ? " " : "");
  }
  FUNC_1(VAR_4, "] at 0x%x\n", VAR_5->rip);
  return (VAR_1);
 }

 return (VAR_2);
}
