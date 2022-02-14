
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (long) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (char*,int ,int ) ;
 void* FUNC_4 (int ,int *,int ) ;
 int VAR_18 ;
 long FUNC_5 (int *) ;
 int FUNC_6 (int,char**) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_7(int VAR_23, char **VAR_24)
{
 long VAR_25 = FUNC_5(((void*)0));
 int VAR_26;
 int VAR_27 = 0;

 while ((VAR_26 = FUNC_1(VAR_23, VAR_24, VAR_13, VAR_7, ((void*)0))) != -1) {
  switch (VAR_26) {
  case 'h':
   return (FUNC_6(VAR_23, VAR_24));
  case 'v':
   VAR_20++;
   break;
  case 'y':
   VAR_21 = 1;
   break;
  case 'n':
   VAR_8 = FUNC_4(VAR_9, ((void*)0), 0);
   break;
  case 'f':
   VAR_5 = FUNC_4(VAR_9, ((void*)0), 0);
   break;
  case 'x':
   VAR_22 = FUNC_4(VAR_9, ((void*)0), 0);
   break;
  case 's':
   VAR_14 = FUNC_4(VAR_9, ((void*)0), 0);
   if (VAR_14 > VAR_3) {
    FUNC_0(VAR_16, "Error: the -s value may not "
        "be greater than %d\n", VAR_3);
    VAR_27 = 1;
   }
   break;
  case 'p':
   FUNC_3(VAR_10, VAR_9, VAR_0);
   VAR_10[VAR_0 - 1] = '\0';
   break;
  case 'c':
   VAR_18 = 1;
   break;
  case 'd':
   VAR_4 = 1;
   break;
  case 't':
   FUNC_3(VAR_12, VAR_9, VAR_0);
   VAR_12[VAR_0 - 1] = '\0';
   break;
  case 'e':
   VAR_25 = FUNC_4(VAR_9, ((void*)0), 0);
   break;
  case 'r':
   VAR_15 = 1;
   break;
  case 'R':
   VAR_19 = 1;
   break;
  case 'k':
   VAR_6 = 1;
   break;
  case 'o':
   VAR_11 = FUNC_4(VAR_9, ((void*)0), 0);
   if (VAR_11 <= VAR_1 || VAR_11 >= VAR_2) {
    FUNC_0(VAR_16, "Error: the -o value must be "
        "greater than %d and less than %d\n",
        VAR_1, VAR_2);
    VAR_27 = 1;
   }
   break;
  default:
   VAR_27 = 1;
   break;
  }
 }

 if (VAR_27 != 0)
  return (VAR_27);

 FUNC_2(VAR_25);

 if (VAR_20) {
  FUNC_0(VAR_17, "verbose:          %d\n", VAR_20);
  FUNC_0(VAR_17, "verify:           %d\n", VAR_21);
  FUNC_0(VAR_17, "nth:              %d\n", VAR_8);
  FUNC_0(VAR_17, "files:            %d\n", VAR_5);
  FUNC_0(VAR_17, "xattrs:           %d\n", VAR_22);
  FUNC_0(VAR_17, "size:             %d\n", VAR_14);
  FUNC_0(VAR_17, "path:             %s\n", VAR_10);
  FUNC_0(VAR_17, "synccaches:       %d\n", VAR_18);
  FUNC_0(VAR_17, "dropcaches:       %d\n", VAR_4);
  FUNC_0(VAR_17, "script:           %s\n", VAR_12);
  FUNC_0(VAR_17, "seed:             %ld\n", VAR_25);
  FUNC_0(VAR_17, "random size:      %d\n", VAR_15);
  FUNC_0(VAR_17, "random value:     %d\n", VAR_19);
  FUNC_0(VAR_17, "keep:             %d\n", VAR_6);
  FUNC_0(VAR_17, "only:             %d\n", VAR_11);
  FUNC_0(VAR_17, "%s", "\n");
 }

 return (VAR_27);
}
