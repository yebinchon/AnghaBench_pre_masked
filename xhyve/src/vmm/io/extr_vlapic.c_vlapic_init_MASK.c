
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {scalar_t__ vcpuid; int msr_apicbase; int callout; int * apic_page; int * vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vlapic*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct vlapic*) ;

void
FUNC_4(struct vlapic *VAR_4)
{
 FUNC_0(VAR_4->vm != ((void*)0), ("vlapic_init: vm is not initialized"));
 FUNC_0(VAR_4->vcpuid >= 0 && VAR_4->vcpuid < VAR_3,
     ("vlapic_init: vcpuid is not initialized"));
 FUNC_0(VAR_4->apic_page != ((void*)0), ("vlapic_init: apic_page is not "
     "initialized"));
 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->callout, 1);

 VAR_4->msr_apicbase = VAR_2 | VAR_1;

 if (VAR_4->vcpuid == 0)
  VAR_4->msr_apicbase |= VAR_0;

 FUNC_3(VAR_4);
}
