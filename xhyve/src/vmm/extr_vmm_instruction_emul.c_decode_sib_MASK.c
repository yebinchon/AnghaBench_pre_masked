
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vie {int mod; scalar_t__ rm; int ss; int index; int base; int rex_x; int rex_b; int disp_bytes; int base_register; int index_register; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (struct vie*) ;
 scalar_t__ FUNC_1 (struct vie*,int*) ;

__attribute__((used)) static int
FUNC_2(struct vie *VAR_5)
{
 uint8_t VAR_6;


 if (VAR_5->mod == VAR_0 || VAR_5->rm != VAR_2)
  return (0);

 if (FUNC_1(VAR_5, &VAR_6))
  return (-1);


 VAR_5->ss = (VAR_6 >> 6) & 0x3;
 VAR_5->index = (VAR_6 >> 3) & 0x7;
 VAR_5->base = (VAR_6 >> 0) & 0x7;


 VAR_5->index |= VAR_5->rex_x << 3;
 VAR_5->base |= VAR_5->rex_b << 3;

 switch (VAR_5->mod) {
 case 128:
  VAR_5->disp_bytes = 1;
  break;
 case 129:
  VAR_5->disp_bytes = 4;
  break;
 }

 if (VAR_5->mod == VAR_1 &&
     (VAR_5->base == 5 || VAR_5->base == 13)) {
  VAR_5->disp_bytes = 4;
 } else {
  VAR_5->base_register = (int) VAR_4[VAR_5->base];
 }
 if (VAR_5->index != 4)
  VAR_5->index_register = (int) VAR_4[VAR_5->index];


 if (VAR_5->index_register < VAR_3)
  VAR_5->scale = (uint8_t) (1 << VAR_5->ss);

 FUNC_0(VAR_5);

 return (0);
}
