
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slotinfo {TYPE_1__* si_funcs; } ;
struct businfo {struct slotinfo* slotinfo; } ;
struct TYPE_2__ {char* fi_name; char* fi_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct businfo* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (char*) ;
 struct businfo** VAR_3 ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int*,...) ;
 int VAR_4 ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;

int
FUNC_8(char *VAR_5)
{
 struct businfo *VAR_6;
 struct slotinfo *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = -1;
 VAR_10 = FUNC_7(VAR_5);

 VAR_8 = VAR_9 = ((void*)0);
 if ((VAR_11 = FUNC_6(VAR_10, ',')) != ((void*)0)) {
  *VAR_11 = '\0';
  VAR_8 = VAR_11 + 1;
  if ((VAR_11 = FUNC_6(VAR_8, ',')) != ((void*)0)) {
   *VAR_11 = '\0';
   VAR_9 = VAR_11 + 1;
  }
 } else {
  FUNC_4(VAR_5);
  goto done;
 }


 if (FUNC_5(VAR_10, "%d:%d:%d", &VAR_13, &VAR_14, &VAR_15) != 3) {
  VAR_13 = 0;

  if (FUNC_5(VAR_10, "%d:%d", &VAR_14, &VAR_15) != 2) {
   VAR_15 = 0;

   if (FUNC_5(VAR_10, "%d", &VAR_14) != 1) {
    VAR_14 = -1;
   }
  }
 }

 if (VAR_13 < 0 || VAR_13 >= VAR_0 || VAR_14 < 0 || VAR_14 >= VAR_2 ||
     VAR_15 < 0 || VAR_15 >= VAR_1) {
  FUNC_4(VAR_5);
  goto done;
 }

 if (VAR_3[VAR_13] == ((void*)0))
  VAR_3[VAR_13] = FUNC_0(1, sizeof(struct businfo));

 VAR_6 = VAR_3[VAR_13];
 VAR_7 = &VAR_6->slotinfo[VAR_14];

 if (VAR_7->si_funcs[VAR_15].fi_name != ((void*)0)) {
  FUNC_1(VAR_4, "pci slot %d:%d already occupied!\n",
   VAR_14, VAR_15);
  goto done;
 }

 if (FUNC_3(VAR_8) == ((void*)0)) {
  FUNC_1(VAR_4, "pci slot %d:%d: unknown device \"%s\"\n",
   VAR_14, VAR_15, VAR_8);
  goto done;
 }

 VAR_12 = 0;
 VAR_7->si_funcs[VAR_15].fi_name = VAR_8;
 VAR_7->si_funcs[VAR_15].fi_param = VAR_9;

done:
 if (VAR_12)
  FUNC_2(VAR_10);

 return (VAR_12);
}
