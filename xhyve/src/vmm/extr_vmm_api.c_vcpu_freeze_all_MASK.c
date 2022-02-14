
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int,int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(bool VAR_4)
{
 enum vcpu_state VAR_5;
 int VAR_6;

 VAR_5 = (VAR_4) ? VAR_0 : VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_0(VAR_3, VAR_6, VAR_5, VAR_4)) {
   FUNC_1("vcpu_set_state failed\n");
  }
 }
}
