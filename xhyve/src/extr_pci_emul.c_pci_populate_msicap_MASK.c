
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct msicap {scalar_t__ msgctrl; scalar_t__ nextptr; int capid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct msicap*,int) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct msicap *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(sizeof(struct msicap) == 14);


 FUNC_1((VAR_3 & (VAR_3 - 1)) == 0 && VAR_3 >= 1 && VAR_3 <= 32);
 VAR_5 = FUNC_3(VAR_3) - 1;

 FUNC_2(VAR_2, sizeof(struct msicap));
 VAR_2->capid = VAR_1;
 VAR_2->nextptr = (uint8_t) VAR_4;
 VAR_2->msgctrl = (uint16_t) (VAR_0 | (VAR_5 << 1));
}
