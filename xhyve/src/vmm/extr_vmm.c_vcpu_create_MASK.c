
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int cookie; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct vm *VAR_1, int VAR_2) {
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  FUNC_1("vcpu_create: invalid cpuid %d\n", VAR_2);

 return FUNC_0(VAR_1->cookie, VAR_2);
}
