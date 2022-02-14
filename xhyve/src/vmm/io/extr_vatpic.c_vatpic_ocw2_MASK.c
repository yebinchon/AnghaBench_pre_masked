
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpic {int dummy; } ;
struct atpic {int rotate; int service; int lowprio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vatpic*,char*,int) ;
 int FUNC_1 (struct atpic*) ;

__attribute__((used)) static int
FUNC_2(struct vatpic *VAR_3, struct atpic *VAR_4, uint8_t VAR_5)
{
 FUNC_0(VAR_3, "atpic ocw2 0x%x", VAR_5);

 VAR_4->rotate = ((VAR_5 & VAR_1) != 0);

 if ((VAR_5 & VAR_0) != 0) {
  int VAR_6;

  if ((VAR_5 & VAR_2) != 0) {

   VAR_6 = VAR_5 & 0x7;
  } else {

   VAR_6 = FUNC_1(VAR_4);
  }

  if (VAR_6 != -1) {
   VAR_4->service &= ~(1 << VAR_6);

   if (VAR_4->rotate)
    VAR_4->lowprio = VAR_6;
  }
 } else if ((VAR_5 & VAR_2) != 0 && VAR_4->rotate == 1) {

  VAR_4->lowprio = VAR_5 & 0x7;
 }

 return (0);
}
