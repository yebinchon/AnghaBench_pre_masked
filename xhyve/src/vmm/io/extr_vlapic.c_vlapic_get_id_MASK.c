
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int vcpuid; } ;


 scalar_t__ FUNC_0 (struct vlapic*) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(struct vlapic *VAR_0)
{

 if (FUNC_0(VAR_0))
  return ((uint32_t) VAR_0->vcpuid);
 else
  return ((uint32_t) (VAR_0->vcpuid << 24));
}
