
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slotinfo {TYPE_1__* si_funcs; } ;
struct businfo {struct slotinfo* slotinfo; } ;
struct TYPE_2__ {int * fi_devi; } ;


 int VAR_0 ;
 struct businfo** VAR_1 ;

__attribute__((used)) static int
FUNC_0(int VAR_2, int VAR_3)
{
 struct businfo *VAR_4;
 struct slotinfo *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = 0;
 if ((VAR_4 = VAR_1[VAR_2]) != ((void*)0)) {
  VAR_5 = &VAR_4->slotinfo[VAR_3];
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_5->si_funcs[VAR_6].fi_devi != ((void*)0)) {
    VAR_7++;
   }
  }
 }
 return (VAR_7 > 1);
}
