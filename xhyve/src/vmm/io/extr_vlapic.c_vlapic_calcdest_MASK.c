
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vm {int dummy; } ;
struct vlapic {TYPE_1__* apic_page; } ;
typedef int cpuset_t ;
struct TYPE_2__ {int dfr; int ldr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vlapic*,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct vm*) ;
 int FUNC_6 (struct vm*,int) ;
 struct vlapic* FUNC_7 (struct vm*,int) ;
 scalar_t__ FUNC_8 (struct vlapic*) ;

__attribute__((used)) static void
FUNC_9(struct vm *VAR_4, cpuset_t *VAR_5, uint32_t VAR_6, bool VAR_7,
    bool VAR_8, bool VAR_9)
{
 struct vlapic *VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;
 cpuset_t VAR_19;
 int VAR_20;

 if ((VAR_9 && VAR_6 == 0xffffffff) ||
     (!VAR_9 && VAR_6 == 0xff)) {



  *VAR_5 = FUNC_5(VAR_4);
  return;
 }

 if (VAR_7) {



  FUNC_3(VAR_5);
  VAR_20 = FUNC_6(VAR_4, ((int) VAR_6));
  if (VAR_20 < VAR_3)
   FUNC_2(((unsigned) VAR_20), VAR_5);
 } else {




  VAR_15 = VAR_6 & 0xff;





  if (VAR_9) {
   VAR_18 = VAR_6 >> 16;
   VAR_16 = VAR_6 & 0xffff;
  } else {
   VAR_18 = (VAR_6 >> 4) & 0xf;
   VAR_16 = VAR_6 & 0xf;
  }





  FUNC_3(VAR_5);
  VAR_19 = FUNC_5(VAR_4);
  while ((VAR_20 = FUNC_1(&VAR_19)) != 0) {
   VAR_20--;
   FUNC_0(((unsigned) VAR_20), &VAR_19);

   VAR_10 = FUNC_7(VAR_4, VAR_20);
   VAR_11 = VAR_10->apic_page->dfr;
   VAR_12 = VAR_10->apic_page->ldr;

   if ((VAR_11 & VAR_2) ==
       VAR_1) {
    VAR_13 = VAR_12 >> 24;
    VAR_17 = VAR_15;
   } else if ((VAR_11 & VAR_2) ==
       VAR_0) {
    if (FUNC_8(VAR_10)) {
     VAR_14 = VAR_12 >> 16;
     VAR_13 = VAR_12 & 0xffff;
    } else {
     VAR_14 = VAR_12 >> 28;
     VAR_13 = (VAR_12 >> 24) & 0xf;
    }
    if (VAR_14 != VAR_18)
     continue;
    VAR_17 = VAR_16;
   } else {




    FUNC_4(VAR_10, "vlapic has bad logical "
        "model %x - cannot deliver interrupt", VAR_11);
    continue;
   }

   if ((VAR_17 & VAR_13) != 0) {
    FUNC_2(((unsigned) VAR_20), VAR_5);
    if (VAR_8)
     break;
   }
  }
 }
}
