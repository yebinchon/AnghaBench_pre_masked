
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu {int dummy; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int FUNC_0 (struct vcpu*,int,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct vcpu *VAR_0, enum vcpu_state VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1, 0)) != 0)
  FUNC_1("Error %d setting state to %d", VAR_2, VAR_1);
}
