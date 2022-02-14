
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 char* VAR_1 ;
 int FUNC_1 (int ) ;
 char*** FUNC_2 (int const,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int const,char* const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (char*,char* const) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_10(const int VAR_11, char* const VAR_12[], char* (**VAR_13)[], int* const VAR_14) {
 char* VAR_15 = VAR_12[0];


 if (VAR_11 == 2 && FUNC_8("--version", VAR_12[1]) == 0) {
  *VAR_14 = 0;
  FUNC_3(VAR_7, "%s\n", VAR_1);
  return 1;
 }


 int VAR_16;
 while ((VAR_16 = FUNC_4(VAR_11, VAR_12, VAR_0)) != -1) {
  switch (VAR_16) {
   case 'h':
    FUNC_6(VAR_15, VAR_7);
    *VAR_14 = 0;
    return 1;





   case 'p':
    if (FUNC_7(VAR_4)) {
     FUNC_0("Not a valid option for -p: %s", VAR_4);
     *VAR_14 = 1;
     return 1;
    }
    break;

   case 'v':
    VAR_9++;
    break;

   case 'w':
    VAR_10++;
    break;

   case 'g':
    VAR_3++;
    break;

   case 'e':
    if (FUNC_1(VAR_4)) {
     FUNC_0("Not a valid option for -e: %s", VAR_4);
     *VAR_14 = 1;
     return 1;
    }
    break;

   case 'l':
    FUNC_5(VAR_7);
    *VAR_14 = 0;
    return 1;

   case '?':
    FUNC_6(VAR_15, VAR_6);
    return 1;
   default:

    return 1;
  }
 }


 *VAR_13 = FUNC_2(VAR_11-VAR_5+1, sizeof(char*));
 if (*VAR_13 == ((void*)0)) {
  FUNC_0("Failed to allocate memory for child args: '%s'", FUNC_9(VAR_2));
  return 1;
 }

 int VAR_17;
 for (VAR_17 = 0; VAR_17 < VAR_11 - VAR_5; VAR_17++) {
  (**VAR_13)[VAR_17] = VAR_12[VAR_5+VAR_17];
 }
 (**VAR_13)[VAR_17] = ((void*)0);

 if (VAR_17 == 0) {

  FUNC_6(VAR_15, VAR_6);
  return 1;
 }

 return 0;
}
