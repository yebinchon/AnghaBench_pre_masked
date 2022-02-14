
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {struct vcpu* vcpu; } ;
struct vcpu {int exitintinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vcpu*) ;

int
FUNC_1(struct vm *VAR_2, int VAR_3, uint64_t *VAR_4, uint64_t *VAR_5)
{
 struct vcpu *VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_6 = &VAR_2->vcpu[VAR_3];
 *VAR_4 = VAR_6->exitintinfo;
 *VAR_5 = FUNC_0(VAR_6);
 return (0);
}
