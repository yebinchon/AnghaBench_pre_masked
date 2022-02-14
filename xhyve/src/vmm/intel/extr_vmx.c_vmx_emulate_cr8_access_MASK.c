
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int vm; } ;
struct vlapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlapic*) ;
 int FUNC_1 (struct vlapic*,int) ;
 struct vlapic* FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct vmx *VAR_2, int VAR_3, uint64_t VAR_4)
{
 struct vlapic *VAR_5;
 uint64_t VAR_6;
 int VAR_7;


 if ((VAR_4 & 0xe0) != 0x00) {
  return (VAR_1);
 }

 VAR_5 = FUNC_2(VAR_2->vm, VAR_3);
 VAR_7 = (VAR_4 >> 8) & 0xf;
 if (VAR_4 & 0x10) {
  VAR_6 = FUNC_0(VAR_5);
  FUNC_4(VAR_3, VAR_7, VAR_6);
 } else {
  VAR_6 = FUNC_3(VAR_3, VAR_7);
  FUNC_1(VAR_5, VAR_6);
 }

 return (VAR_0);
}
