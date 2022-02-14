
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_5, char *VAR_6[])
{
 int VAR_7;
 extern char *VAR_8;
 extern int VAR_9, VAR_10;

 while ((VAR_7 = FUNC_2(VAR_5, VAR_6, "s:f")) != -1) {
  switch (VAR_7) {
   case 's':
    VAR_2 = FUNC_0(VAR_8);
    break;
   case 'f':
    VAR_3++;
    break;
   case ':':
    (void) FUNC_1(VAR_4,
        "Option -%c requires an operand\n", VAR_10);
    VAR_0++;
    break;
  }
  if (VAR_0) {
   (void) FUNC_3(VAR_6[0]);
  }
 }

 if (VAR_5 <= VAR_9) {
  (void) FUNC_1(VAR_4, "No filename specified\n");
  FUNC_3(VAR_6[0]);
 }
 VAR_1 = VAR_6[VAR_9];
}
