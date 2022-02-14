
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct command* VAR_1 ;

void FUNC_1 (struct command *VAR_2) {
  int VAR_3 = 0;
  while (VAR_1[VAR_3].name) {
    VAR_3 ++;
  }
  FUNC_0 (VAR_3 < VAR_0 - 1);
  VAR_1[VAR_3] = *VAR_2;
}
