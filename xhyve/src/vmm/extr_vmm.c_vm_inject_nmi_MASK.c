
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int nmi_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm*,int,int) ;

int
FUNC_1(struct vm *VAR_2, int VAR_3)
{
 struct vcpu *VAR_4;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_4 = &VAR_2->vcpu[VAR_3];

 VAR_4->nmi_pending = 1;
 FUNC_0(VAR_2, VAR_3, 0);
 return (0);
}
