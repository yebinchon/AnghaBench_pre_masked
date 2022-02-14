
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pirq {int reg; scalar_t__ active_count; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct pirq*) ;
 scalar_t__ FUNC_2 (int) ;
 struct pirq* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

void
FUNC_7(int VAR_3, uint8_t VAR_4)
{
 struct pirq *VAR_5;

 FUNC_0((VAR_3 > 0) && (((unsigned) VAR_3) <= FUNC_1(VAR_2)));
 VAR_5 = &VAR_2[VAR_3 - 1];
 FUNC_3(&VAR_5->lock);
 if (VAR_5->reg != (VAR_4 & (VAR_0 | VAR_1))) {
  if (VAR_5->active_count != 0 && FUNC_2(VAR_5->reg))
   FUNC_6(VAR_5->reg & VAR_1, -1);
  VAR_5->reg = VAR_4 & (VAR_0 | VAR_1);
  if (VAR_5->active_count != 0 && FUNC_2(VAR_5->reg))
   FUNC_5(VAR_5->reg & VAR_1, -1);
 }
 FUNC_4(&VAR_5->lock);
}
