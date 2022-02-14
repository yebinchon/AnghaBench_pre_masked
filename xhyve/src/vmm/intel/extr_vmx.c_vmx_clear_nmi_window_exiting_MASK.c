
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx {int vm; TYPE_1__* cap; } ;
struct TYPE_2__ {int proc_ctls; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int) ;

__attribute__((used)) static void __inline
FUNC_3(struct vmx *VAR_2, int VAR_3)
{

 FUNC_0((VAR_2->cap[VAR_3].proc_ctls & VAR_0) != 0,
     ("nmi_window_exiting not set %#x", VAR_2->cap[VAR_3].proc_ctls));
 VAR_2->cap[VAR_3].proc_ctls &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_2->cap[VAR_3].proc_ctls);
 FUNC_1(VAR_2->vm, VAR_3, "Disabling NMI window exiting");
}
