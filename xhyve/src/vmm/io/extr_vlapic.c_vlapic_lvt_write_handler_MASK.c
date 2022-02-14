
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int * lvt_last; struct LAPIC* apic_page; } ;
struct LAPIC {int svr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (struct vlapic*,int) ;

void
FUNC_3(struct vlapic *VAR_9, uint32_t VAR_10)
{
 uint32_t *VAR_11, VAR_12, VAR_13;
 struct LAPIC *VAR_14;
 int VAR_15;

 VAR_14 = VAR_9->apic_page;
 VAR_11 = FUNC_2(VAR_9, VAR_10);
 VAR_13 = *VAR_11;
 VAR_15 = FUNC_1(VAR_10);

 if (!(VAR_14->svr & VAR_8))
  VAR_13 |= VAR_4;
 VAR_12 = VAR_4 | VAR_2 | VAR_7;
 switch (VAR_10) {
 case 128:
  VAR_12 |= VAR_0;
  break;
 case 131:
  break;
 case 130:
 case 129:
  VAR_12 |= VAR_6 | VAR_5 | VAR_3;

 default:
  VAR_12 |= VAR_1;
  break;
 }
 VAR_13 &= VAR_12;
 *VAR_11 = VAR_13;
 FUNC_0(&VAR_9->lvt_last[VAR_15], VAR_13);
}
