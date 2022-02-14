
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {struct vcpu* vcpu; int cookie; } ;
struct vcpu {int nextrip; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*,int,char*,int ) ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(struct vm *VAR_4, int VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct vcpu *VAR_8;
 int VAR_9;

 if (VAR_5 < 0 || VAR_5 >= VAR_1)
  return (VAR_0);

 if (VAR_6 >= VAR_3)
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_4->cookie, VAR_5, VAR_6, VAR_7);
 if (VAR_9 || VAR_6 != VAR_2)
  return (VAR_9);


 FUNC_0(VAR_4, VAR_5, "Setting nextrip to %#llx", VAR_7);
 VAR_8 = &VAR_4->vcpu[VAR_5];
 VAR_8->nextrip = VAR_7;
 return (0);
}
