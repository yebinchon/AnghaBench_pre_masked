
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct vie {int dummy; } ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int FUNC_0 (struct vie*,int*,int*) ;
 int FUNC_1 (void*,int,int,int*) ;
 int FUNC_2 (void*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, int VAR_1, struct vie *VAR_2, uint8_t VAR_3)
{
 uint64_t VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;
 enum vm_reg_name VAR_9;

 FUNC_0(VAR_2, &VAR_9, &VAR_8);
 VAR_7 = FUNC_1(VAR_0, VAR_1, (int) VAR_9, &VAR_4);
 if (VAR_7 == 0) {
  VAR_5 = VAR_3;
  VAR_6 = 0xff;
  if (VAR_8) {




   VAR_5 <<= 8;
   VAR_6 <<= 8;
  }
  VAR_5 |= VAR_4 & ~VAR_6;
  VAR_7 = FUNC_2(VAR_0, VAR_1, (int) VAR_9, VAR_5);
 }
 return (VAR_7);
}
