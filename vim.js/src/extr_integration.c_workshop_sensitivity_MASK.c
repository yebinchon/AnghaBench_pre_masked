
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* verb; int sense; } ;
typedef TYPE_1__ VerbSense ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(int VAR_0, char *VAR_1)
{

 VerbSense *VAR_2;
 int VAR_3;
 char *VAR_4;
 if ((VAR_0 < 1) || (VAR_0 > 500)) {
  return;
 }

 VAR_2 = (VerbSense *)FUNC_1((VAR_0+1)*sizeof(VerbSense));



 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  while (*VAR_4 == ' ') {
   VAR_4++;
  }
  VAR_2[VAR_3].verb = VAR_4;
  while (*VAR_4 && (*VAR_4 != ' ') && (*VAR_4 != '\001')) {
   VAR_4++;
  }
  if (*VAR_4 == 0) {
   VAR_2[VAR_3].verb = ((void*)0);
   break;
  }
  if (*VAR_4 == '\001') {
   *VAR_4 = 0;
   VAR_4++;
  }
  *VAR_4 = 0;
  VAR_4++;
  while (*VAR_4 == ' ') {
   VAR_4++;
  }
  if (*VAR_4 == '1') {
   VAR_2[VAR_3].sense = 1;
  } else {
   VAR_2[VAR_3].sense = 0;
  }
  VAR_4++;
 }
 VAR_2[VAR_3].verb = ((void*)0);

 FUNC_2(VAR_2);

 FUNC_0(VAR_2);
}
