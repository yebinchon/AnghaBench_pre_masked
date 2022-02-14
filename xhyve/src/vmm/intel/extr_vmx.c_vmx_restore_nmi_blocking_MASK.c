
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmx {int vm; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct vmx *VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_2->vm, VAR_3, "Restore Virtual-NMI blocking");
 VAR_4 = (uint32_t) FUNC_1(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_4);
}
