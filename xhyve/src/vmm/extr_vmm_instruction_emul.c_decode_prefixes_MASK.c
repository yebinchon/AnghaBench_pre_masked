
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vie {int opsize_override; int addrsize_override; int repz_present; int repnz_present; int segment_override; int rex_present; int rex_w; int rex_r; int rex_x; int rex_b; int addrsize; int opsize; int segment_register; } ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (struct vie*) ;
 scalar_t__ FUNC_2 (struct vie*,int*) ;

__attribute__((used)) static int
FUNC_3(struct vie *VAR_1, enum vm_cpu_mode VAR_2, int VAR_3)
{
 uint8_t VAR_4;

 while (1) {
  if (FUNC_2(VAR_1, &VAR_4))
   return (-1);

  if (VAR_4 == 0x66)
   VAR_1->opsize_override = 1;
  else if (VAR_4 == 0x67)
   VAR_1->addrsize_override = 1;
  else if (VAR_4 == 0xF3)
   VAR_1->repz_present = 1;
  else if (VAR_4 == 0xF2)
   VAR_1->repnz_present = 1;
  else if (FUNC_0(VAR_4, &VAR_1->segment_register))
   VAR_1->segment_override = 1;
  else
   break;

  FUNC_1(VAR_1);
 }
 if (VAR_2 == VAR_0 && VAR_4 >= 0x40 && VAR_4 <= 0x4F) {
  VAR_1->rex_present = 1;
  VAR_1->rex_w = VAR_4 & 0x8 ? 1 : 0;
  VAR_1->rex_r = VAR_4 & 0x4 ? 1 : 0;
  VAR_1->rex_x = VAR_4 & 0x2 ? 1 : 0;
  VAR_1->rex_b = VAR_4 & 0x1 ? 1 : 0;
  FUNC_1(VAR_1);
 }




 if (VAR_2 == VAR_0) {




  VAR_1->addrsize = VAR_1->addrsize_override ? 4 : 8;
  if (VAR_1->rex_w)
   VAR_1->opsize = 8;
  else if (VAR_1->opsize_override)
   VAR_1->opsize = 2;
  else
   VAR_1->opsize = 4;
 } else if (VAR_3) {

  VAR_1->addrsize = VAR_1->addrsize_override ? 2 : 4;
  VAR_1->opsize = VAR_1->opsize_override ? 2 : 4;
 } else {

  VAR_1->addrsize = VAR_1->addrsize_override ? 4 : 2;
  VAR_1->opsize = VAR_1->opsize_override ? 4 : 2;
 }
 return (0);
}
