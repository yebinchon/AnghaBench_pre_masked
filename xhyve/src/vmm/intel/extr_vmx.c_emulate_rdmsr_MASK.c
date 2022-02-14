
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct vmx {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int*,int*) ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (struct vmx*,int,int ,int*) ;

__attribute__((used)) static int
FUNC_4(struct vmx *VAR_2, int VAR_3, u_int VAR_4, bool *VAR_5)
{
 uint64_t VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4))
  VAR_9 = FUNC_1(VAR_2->vm, VAR_3, VAR_4, &VAR_6, VAR_5);
 else
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_6);

 if (VAR_9 == 0) {
  VAR_7 = (uint32_t) VAR_6;
  FUNC_2(VAR_3, VAR_0, VAR_7);
  VAR_8 = (uint32_t) (VAR_6 >> 32);
  FUNC_2(VAR_3, VAR_1, VAR_8);
 }

 return (VAR_9);
}
