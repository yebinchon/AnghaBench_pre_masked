
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx {int vm; TYPE_1__* cap; } ;
struct TYPE_2__ {int proc_ctls; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static void __inline
FUNC_2(struct vmx *VAR_2, int VAR_3)
{

 if ((VAR_2->cap[VAR_3].proc_ctls & VAR_0) == 0) {
  VAR_2->cap[VAR_3].proc_ctls |= VAR_0;
  FUNC_1(VAR_3, VAR_1, VAR_2->cap[VAR_3].proc_ctls);
  FUNC_0(VAR_2->vm, VAR_3, "Enabling NMI window exiting");
 }
}
