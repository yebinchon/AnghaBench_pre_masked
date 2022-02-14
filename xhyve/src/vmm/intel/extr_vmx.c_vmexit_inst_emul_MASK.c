
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct vm_guest_paging {int cpu_mode; } ;
struct TYPE_3__ {int vie; int cs_d; void* cs_base; void* gla; void* gpa; struct vm_guest_paging paging; } ;
struct TYPE_4__ {TYPE_1__ inst_emul; } ;
struct vm_exit {TYPE_2__ u; int exitcode; } ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct vm_guest_paging*,int) ;

__attribute__((used)) static void
FUNC_4(struct vm_exit *VAR_3, uint64_t VAR_4, uint64_t VAR_5, int VAR_6)
{
 struct vm_guest_paging *VAR_7;
 uint32_t VAR_8;

 VAR_7 = &VAR_3->u.inst_emul.paging;

 VAR_3->exitcode = VAR_2;
 VAR_3->u.inst_emul.gpa = VAR_4;
 VAR_3->u.inst_emul.gla = VAR_5;
 FUNC_3(VAR_7, VAR_6);
 switch (VAR_7->cpu_mode) {
 case 128:
  VAR_3->u.inst_emul.cs_base = FUNC_2(VAR_6, VAR_1);
  VAR_3->u.inst_emul.cs_d = 0;
  break;
 case 129:
 case 130:
  VAR_3->u.inst_emul.cs_base = FUNC_2(VAR_6, VAR_1);
  VAR_8 = (uint32_t) FUNC_2(VAR_6, VAR_0);
  VAR_3->u.inst_emul.cs_d = FUNC_0(VAR_8);
  break;
 case 131:
  VAR_3->u.inst_emul.cs_base = 0;
  VAR_3->u.inst_emul.cs_d = 0;
  break;
 }
 FUNC_1(&VAR_3->u.inst_emul.vie, ((void*)0), 0);
}
