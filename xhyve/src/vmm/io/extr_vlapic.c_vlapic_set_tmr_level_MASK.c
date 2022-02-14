
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {scalar_t__ vcpuid; int vm; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct vlapic*,char*,int) ;
 int FUNC_3 (int ,int *,int ,int,int,int) ;
 int FUNC_4 (struct vlapic*,int,int) ;

void
FUNC_5(struct vlapic *VAR_2, uint32_t VAR_3, bool VAR_4,
    int VAR_5, int VAR_6)
{
 cpuset_t VAR_7;
 bool VAR_8;

 FUNC_1(VAR_6 >= 0 && VAR_6 <= 255, ("invalid vector %d", VAR_6));




 if (VAR_5 != VAR_0 && VAR_5 != VAR_1) {
  FUNC_2(VAR_2, "Ignoring level trigger-mode for "
      "delivery-mode %d", VAR_5);
  return;
 }

 VAR_8 = (VAR_5 == VAR_1);
 FUNC_3(VAR_2->vm, &VAR_7, VAR_3, VAR_4, VAR_8, 0);

 if (!FUNC_0(((unsigned) VAR_2->vcpuid), &VAR_7))
  return;

 FUNC_2(VAR_2, "vector %d set to level-triggered", VAR_6);
 FUNC_4(VAR_2, VAR_6, 1);
}
