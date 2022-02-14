
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct grid_cell {int bg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int*,int*) ;

__attribute__((used)) static size_t
FUNC_1(const struct grid_cell *VAR_2, int *VAR_3)
{
 size_t VAR_4;
 u_char VAR_5, VAR_6, VAR_7;

 VAR_4 = 0;
 if (VAR_2->bg & VAR_0) {
  VAR_3[VAR_4++] = 48;
  VAR_3[VAR_4++] = 5;
  VAR_3[VAR_4++] = VAR_2->bg & 0xff;
 } else if (VAR_2->bg & VAR_1) {
  VAR_3[VAR_4++] = 48;
  VAR_3[VAR_4++] = 2;
  FUNC_0(VAR_2->bg, &VAR_5, &VAR_6, &VAR_7);
  VAR_3[VAR_4++] = VAR_5;
  VAR_3[VAR_4++] = VAR_6;
  VAR_3[VAR_4++] = VAR_7;
 } else {
  switch (VAR_2->bg) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
   VAR_3[VAR_4++] = VAR_2->bg + 40;
   break;
  case 8:
   VAR_3[VAR_4++] = 49;
   break;
  case 100:
  case 101:
  case 102:
  case 103:
  case 104:
  case 105:
  case 106:
  case 107:
   VAR_3[VAR_4++] = VAR_2->bg - 10;
   break;
  }
 }
 return (VAR_4);
}
