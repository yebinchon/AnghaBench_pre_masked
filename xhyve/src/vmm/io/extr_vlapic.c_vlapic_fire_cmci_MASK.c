
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vlapic*,int ) ;
 int FUNC_1 (struct vlapic*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

void
FUNC_3(struct vlapic *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (FUNC_0(VAR_2, VAR_3)) {
  FUNC_2(VAR_2->vm, VAR_2->vcpuid, VAR_1, 1);
 }
}
