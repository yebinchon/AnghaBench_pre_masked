
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vioapic {int id; TYPE_1__* rtbl; int vm; } ;
typedef int cpuset_t ;
struct TYPE_2__ {int reg; int acnt; } ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vioapic*,char*,int) ;
 int FUNC_1 (struct vioapic*,char*,int,int) ;
 int FUNC_2 (struct vioapic*) ;
 int FUNC_3 (struct vioapic*) ;
 int FUNC_4 (struct vioapic*,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct vioapic *VAR_9, int VAR_10, uint32_t VAR_11, uint32_t VAR_12)
{
 uint64_t VAR_13, VAR_14;
 uint64_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 cpuset_t VAR_20;

 VAR_17 = VAR_11 & 0xff;
 switch (VAR_17) {
 case 129:
  VAR_9->id = VAR_12 & VAR_0;
  break;
 case 128:
 case 130:

  break;
 default:
  break;
 }


 if (VAR_17 >= VAR_1 &&
     VAR_17 < VAR_1 + VAR_6 * 2) {
  VAR_18 = (VAR_17 - VAR_1) / 2;
  if ((VAR_17 - VAR_1) % 2)
   VAR_19 = 32;
  else
   VAR_19 = 0;

  VAR_15 = VAR_9->rtbl[VAR_18].reg;

  VAR_13 = (uint64_t)VAR_12 << VAR_19;
  VAR_14 = (uint64_t)0xffffffff << VAR_19;
  VAR_9->rtbl[VAR_18].reg &= ~VAR_14 | VAR_7;
  VAR_9->rtbl[VAR_18].reg |= VAR_13 & ~VAR_7;

  FUNC_1(VAR_9, "ioapic pin%d: redir table entry %#llx",
      VAR_18, VAR_9->rtbl[VAR_18].reg);






  VAR_16 = VAR_15 ^ VAR_9->rtbl[VAR_18].reg;
  if (VAR_16 & ~((uint64_t) (VAR_2 | VAR_4))) {
   FUNC_0(VAR_9, "ioapic pin%d: recalculate "
       "vlapic trigger-mode register", VAR_18);
   FUNC_3(VAR_9);
   VAR_20 = FUNC_5(VAR_9->vm);
   FUNC_6(VAR_9->vm, VAR_10, VAR_20,
       VAR_8, ((void*)0));
   FUNC_2(VAR_9);
  }







  if ((VAR_9->rtbl[VAR_18].reg & VAR_2) == VAR_3 &&
      (VAR_9->rtbl[VAR_18].reg & VAR_5) == 0 &&
      (VAR_9->rtbl[VAR_18].acnt > 0)) {
   FUNC_1(VAR_9, "ioapic pin%d: asserted at rtbl "
       "write, acnt %d", VAR_18, VAR_9->rtbl[VAR_18].acnt);
   FUNC_4(VAR_9, VAR_18);
  }
 }
}
