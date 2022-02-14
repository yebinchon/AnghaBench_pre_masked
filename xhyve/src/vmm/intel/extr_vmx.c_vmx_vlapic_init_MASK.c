
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx {int * apic_page; int vm; } ;
struct vlapic_vtx {struct vmx* vmx; } ;
struct vlapic {int vcpuid; struct LAPIC* apic_page; int vm; } ;
struct LAPIC {int dummy; } ;


 int FUNC_0 (struct vlapic*) ;
 int FUNC_1 (struct vlapic*,int) ;
 struct vlapic* FUNC_2 (int) ;
 int FUNC_3 (struct vlapic*) ;

__attribute__((used)) static struct vlapic *
FUNC_4(void *VAR_0, int VAR_1)
{
 struct vmx *VAR_2;
 struct vlapic *VAR_3;
 struct vlapic_vtx *VAR_4;

 VAR_2 = VAR_0;

 VAR_3 = FUNC_2(sizeof(struct vlapic_vtx));
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, sizeof(struct vlapic));
 VAR_3->vm = VAR_2->vm;
 VAR_3->vcpuid = VAR_1;
 VAR_3->apic_page = (struct LAPIC *)&VAR_2->apic_page[VAR_1];

 VAR_4 = (struct vlapic_vtx *)VAR_3;
 VAR_4->vmx = VAR_2;

 FUNC_3(VAR_3);

 return (VAR_3);
}
