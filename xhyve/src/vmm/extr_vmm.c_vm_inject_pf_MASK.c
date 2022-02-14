
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vm*,int,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct vm*,int,int ,int,int) ;
 int FUNC_3 (struct vm*,int,int ,int ) ;

void
FUNC_4(void *VAR_2, int VAR_3, int VAR_4, uint64_t VAR_5)
{
 struct vm *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2;
 FUNC_1(VAR_6, VAR_3, "Injecting page fault: error_code %#x, cr2 %#llx",
     VAR_4, VAR_5);

 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_1, VAR_5);
 FUNC_0(VAR_7 == 0, ("vm_set_register(cr2) error %d", VAR_7));

 FUNC_2(VAR_6, VAR_3, VAR_0, 1, VAR_4);
}
