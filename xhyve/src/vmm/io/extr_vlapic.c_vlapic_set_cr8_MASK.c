
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct vlapic {int vcpuid; int vm; } ;


 int FUNC_0 (struct vlapic*,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct vlapic *VAR_0, uint64_t VAR_1)
{
 uint8_t VAR_2;

 if (VAR_1 & ~((uint64_t) 0xf)) {
  FUNC_1(VAR_0->vm, VAR_0->vcpuid);
  return;
 }

 VAR_2 = (uint8_t) (VAR_1 << 4);
 FUNC_0(VAR_0, VAR_2);
}
