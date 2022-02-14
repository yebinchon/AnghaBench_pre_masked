
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint32_t ;
struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {int icr_hi; void* dcr_timer; void* icr_timer; void* icr_lo; void* svr; void* dfr; void* ldr; void* id; } ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vlapic*,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (struct vlapic*) ;
 int FUNC_4 (struct vlapic*) ;
 void** FUNC_5 (struct vlapic*,void*) ;
 int FUNC_6 (struct vlapic*,int*) ;
 int FUNC_7 (struct vlapic*) ;
 int FUNC_8 (struct vlapic*) ;
 int FUNC_9 (struct vlapic*) ;
 int FUNC_10 (struct vlapic*,void*) ;
 int FUNC_11 (struct vlapic*) ;
 int FUNC_12 (struct vlapic*,int) ;
 int FUNC_13 (struct vlapic*,int) ;
 int FUNC_14 (struct vlapic*) ;
 scalar_t__ FUNC_15 (struct vlapic*) ;

int
FUNC_16(struct vlapic *VAR_1, int VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, bool *VAR_5)
{
 struct LAPIC *VAR_6 = VAR_1->apic_page;
 uint32_t *VAR_7;
 int VAR_8;

 FUNC_0((VAR_3 & 0xf) == 0 && VAR_3 < VAR_0,
     ("vlapic_write: invalid offset %#llx", VAR_3));

 FUNC_1(VAR_1, "vlapic write offset %#llx, data %#llx",
     VAR_3, VAR_4);

 if (VAR_3 > sizeof(*VAR_6))
  return (0);


 if (FUNC_15(VAR_1) && VAR_2) {
  FUNC_1(VAR_1, "MMIO write of %#llx to offset %#llx "
      "in x2APIC mode", VAR_4, VAR_3);
  return (0);
 }




 if (!FUNC_15(VAR_1) && !VAR_2) {
  FUNC_1(VAR_1, "x2APIC MSR write of %#llx to offset %#llx "
      "in xAPIC mode", VAR_4, VAR_3);
  return (0);
 }

 VAR_8 = 0;
 switch(VAR_3)
 {
  case 167:
   VAR_6->id = (uint32_t) VAR_4;
   FUNC_8(VAR_1);
   break;
  case 129:
   FUNC_13(VAR_1, VAR_4 & 0xff);
   break;
  case 172:
   FUNC_11(VAR_1);
   break;
  case 150:
   VAR_6->ldr = (uint32_t) VAR_4;
   FUNC_9(VAR_1);
   break;
  case 173:
   VAR_6->dfr = (uint32_t) VAR_4;
   FUNC_3(VAR_1);
   break;
  case 143:
   VAR_6->svr = (uint32_t) VAR_4;
   FUNC_14(VAR_1);
   break;
  case 168:
   VAR_6->icr_lo = (uint32_t) VAR_4;
   if (FUNC_15(VAR_1))
    VAR_6->icr_hi = VAR_4 >> 32;
   VAR_8 = FUNC_6(VAR_1, VAR_5);
   break;
  case 169:
   VAR_6->icr_hi = (uint32_t) VAR_4;
   break;
  case 174:
  case 138:
  case 142:
  case 147:
  case 149:
  case 148:
  case 171:
   VAR_7 = FUNC_5(VAR_1, ((uint32_t) VAR_3));
   *VAR_7 = (uint32_t) VAR_4;
   FUNC_10(VAR_1, ((uint32_t) VAR_3));
   break;
  case 139:
   VAR_6->icr_timer = (uint32_t) VAR_4;
   FUNC_7(VAR_1);
   break;

  case 140:
   VAR_6->dcr_timer = (uint32_t) VAR_4;
   FUNC_2(VAR_1);
   break;

  case 170:
   FUNC_4(VAR_1);
   break;

  case 144:
   if (FUNC_15(VAR_1))
    FUNC_12(VAR_1, VAR_4);
   break;

  case 128:
  case 175:
  case 146:
  case 145:
  case 158:
  case 157:
  case 156:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 166:
  case 165:
  case 164:
  case 163:
  case 162:
  case 161:
  case 160:
  case 159:
  case 141:
  default:

   break;
 }

 return (VAR_8);
}
