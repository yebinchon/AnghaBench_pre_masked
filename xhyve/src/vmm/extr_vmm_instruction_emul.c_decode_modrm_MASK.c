
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int op_flags; } ;
struct vie {int mod; int rm; int reg; int rex_b; int rex_r; int base_register; int disp_bytes; TYPE_1__ op; } ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 (struct vie*) ;
 scalar_t__ FUNC_1 (struct vie*,int*) ;

__attribute__((used)) static int
FUNC_2(struct vie *VAR_9, enum vm_cpu_mode VAR_10)
{
 uint8_t VAR_11;

 if (VAR_9->op.op_flags & VAR_3)
  return (0);

 if (VAR_10 == VAR_1)
  return (-1);

 if (FUNC_1(VAR_9, &VAR_11))
  return (-1);

 VAR_9->mod = (VAR_11 >> 6) & 0x3;
 VAR_9->rm = (VAR_11 >> 0) & 0x7;
 VAR_9->reg = (VAR_11 >> 3) & 0x7;






 if (VAR_9->mod == VAR_2)
  return (-1);

 if ((VAR_9->mod == 130 && VAR_9->rm == VAR_4) ||
     (VAR_9->mod != VAR_2 && VAR_9->rm == VAR_5)) {
 } else {
  VAR_9->rm |= (VAR_9->rex_b << 3);
 }

 VAR_9->reg |= (VAR_9->rex_r << 3);


 if (VAR_9->mod != VAR_2 && VAR_9->rm == VAR_5)
  goto done;

 VAR_9->base_register = (int) VAR_8[VAR_9->rm];

 switch (VAR_9->mod) {
 case 128:
  VAR_9->disp_bytes = 1;
  break;
 case 129:
  VAR_9->disp_bytes = 4;
  break;
 case 130:
  if (VAR_9->rm == VAR_4) {
   VAR_9->disp_bytes = 4;







   if (VAR_10 == VAR_0)
    VAR_9->base_register = VAR_6;
   else
    VAR_9->base_register = VAR_7;
  }
  break;
 }

done:
 FUNC_0(VAR_9);

 return (0);
}
