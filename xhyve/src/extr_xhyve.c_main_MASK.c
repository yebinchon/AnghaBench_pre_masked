
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int,char**,char*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 int * FUNC_17 () ;
 int FUNC_18 (void*) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;
 void* VAR_9 ;
 int FUNC_22 (void*,size_t*) ;
 int FUNC_23 () ;
 int FUNC_24 (void*) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_25 (int) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_30 (int) ;
 int FUNC_31 (int ,int ,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_32 () ;
 int FUNC_33 (size_t,int ) ;

int
FUNC_34(int VAR_18, char *VAR_19[])
{
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;
 uint64_t VAR_29;
 size_t VAR_30;

 VAR_23 = 0;
 VAR_25 = 0;
 VAR_12 = FUNC_4(VAR_19[0]);
 VAR_22 = 0;
 VAR_5 = 1;
 VAR_11 = 0;
 VAR_30 = 256 * VAR_2;
 VAR_27 = 1;
 VAR_28 = 1;
 VAR_24 = 0;

 while ((VAR_20 = FUNC_9(VAR_18, VAR_19, "behvuwxMACHPWY:f:F:g:c:s:m:l:U:")) != -1) {
  switch (VAR_20) {
  case 'A':
   VAR_4 = 1;
   break;
  case 'b':
   VAR_23 = 1;
   break;
  case 'c':
   VAR_5 = FUNC_3(VAR_9);
   break;
  case 'C':
   VAR_25 = 1;
   break;
  case 'f':
   if (FUNC_7(VAR_9) != 0) {
    FUNC_6 (1);
   } else {
    VAR_24 = 1;
    break;
   }
  case 'F':
   VAR_10 = VAR_9;
   break;
  case 'g':
   VAR_22 = FUNC_3(VAR_9);
   break;
  case 'l':
   if (FUNC_18(VAR_9) != 0) {
    FUNC_5(VAR_1, "invalid lpc device "
        "configuration '%s'", VAR_9);
   }
   break;
  case 's':
   if (FUNC_24(VAR_9) != 0)
    FUNC_6(1);
   else
    break;
  case 'm':
   VAR_21 = FUNC_22(VAR_9, &VAR_30);
   if (VAR_21)
    FUNC_5(VAR_1, "invalid memsize '%s'", VAR_9);
   break;
  case 'M':
   VAR_11 = 1;
   break;
  case 'H':
   VAR_7 = 1;
   break;
  case 'P':
   VAR_8 = 1;
   break;
  case 'e':
   VAR_14 = 1;
   break;
  case 'u':
   VAR_28 = 0;
   break;
  case 'U':
   VAR_6 = VAR_9;
   break;
  case 'w':
   VAR_15 = 0;
   break;
  case 'W':
   VAR_16 = 0;
   break;
  case 'x':
   VAR_17 = 1;
   break;
  case 'Y':
   VAR_27 = 0;
   break;
  case 'v':
   FUNC_28();
  case 'h':
   FUNC_30(0);
  default:
   FUNC_30(1);
  }
 }

 if ((VAR_24 != 1) && (FUNC_17() == ((void*)0)))
  FUNC_30(1);

 VAR_21 = FUNC_32();
 if (VAR_21) {
  FUNC_8(VAR_13, "Unable to create VM (%d)\n", VAR_21);
  FUNC_6(1);
 }

 if (VAR_5 < 1) {
  FUNC_8(VAR_13, "Invalid guest vCPUs (%d)\n", VAR_5);
  FUNC_6(1);
 }

 VAR_26 = FUNC_21();
 if (VAR_5 > VAR_26) {
  FUNC_8(VAR_13, "%d vCPUs requested but only %d available\n",
   VAR_5, VAR_26);
  FUNC_6(1);
 }

 VAR_21 = FUNC_33(VAR_30, VAR_3);
 if (VAR_21) {
  FUNC_8(VAR_13, "Unable to setup memory (%d)\n", VAR_21);
  FUNC_6(1);
 }

 VAR_21 = FUNC_14();
 if (VAR_21) {
  FUNC_8(VAR_13, "init_msr error %d\n", VAR_21);
  FUNC_6(1);
 }

 VAR_21 = FUNC_27();
 if (VAR_21) {
  FUNC_8(VAR_13, "pidfile error %d\n", VAR_21);
  FUNC_6(1);
 }

 FUNC_13();
 FUNC_12();
    FUNC_2();
 FUNC_23();
 FUNC_16();

 FUNC_25(VAR_28);
 FUNC_26();




 if (FUNC_15() != 0)
  FUNC_6(1);

 if (VAR_22 != 0)
  FUNC_11(VAR_22);

 if (VAR_23)
  FUNC_10();




 if (VAR_27) {
  VAR_21 = FUNC_20(VAR_5);
  if (VAR_21)
   FUNC_6(1);
 }

 VAR_21 = FUNC_29();
 FUNC_1(VAR_21 == 0);

 if (VAR_4) {
  VAR_21 = FUNC_0(VAR_5);
  FUNC_1(VAR_21 == 0);
 }

 VAR_29 = 0;

 FUNC_31(VAR_0, VAR_0, VAR_29);




 FUNC_19();

 FUNC_6(1);
}
