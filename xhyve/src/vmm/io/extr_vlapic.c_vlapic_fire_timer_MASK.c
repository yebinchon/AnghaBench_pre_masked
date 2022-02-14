
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlapic*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct vlapic*,int) ;
 int FUNC_2 (struct vlapic*,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct vlapic *VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (FUNC_1(VAR_3, VAR_4 | VAR_0)) {
  FUNC_0(VAR_3, "vlapic timer fired");
  FUNC_3(VAR_3->vm, VAR_3->vcpuid, VAR_2, 1);
 }
}
