
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int esr_pending; int esr_firing; int vcpuid; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vlapic*,int) ;
 int FUNC_1 (struct vlapic*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

void
FUNC_3(struct vlapic *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 VAR_3->esr_pending |= VAR_4;
 if (VAR_3->esr_firing)
  return;
 VAR_3->esr_firing = 1;


 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (FUNC_0(VAR_3, VAR_5 | VAR_0)) {
  FUNC_2(VAR_3->vm, VAR_3->vcpuid, VAR_2, 1);
 }
 VAR_3->esr_firing = 0;
}
