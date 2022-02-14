
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* off_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int,void*,void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,char,size_t) ;
 int FUNC_7 (char*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 size_t FUNC_10 (int,char*,size_t) ;

int
FUNC_11(int VAR_12, char *VAR_13[])
{
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 size_t VAR_16 = 0;
 off_t VAR_17 = 0;
 off_t VAR_18 = 0;
 int VAR_19, VAR_20;
 mode_t VAR_21 = VAR_8 | VAR_9 | VAR_6 | VAR_7;

 while ((VAR_20 = FUNC_5(VAR_12, VAR_13, "l:s:n:")) != VAR_0) {
  switch (VAR_20) {
  case 'l':
   VAR_16 = FUNC_0(VAR_10);
   break;
  case 's':
   VAR_17 = FUNC_0(VAR_10);
   break;
  case 'n':
   VAR_18 = FUNC_0(VAR_10);
   break;
  default:
   FUNC_9(VAR_13[0]);
   break;
  }
 }

 if (VAR_11 == VAR_12 - 1)
  VAR_14 = VAR_13[VAR_11];
 else
  FUNC_9(VAR_13[0]);

 if ((VAR_19 = FUNC_7(VAR_14, VAR_4 | VAR_3 | VAR_5, VAR_21)) < 0) {
  FUNC_8("open");
  return (1);
 }

 VAR_15 = (char *)FUNC_1(1, VAR_16);
 if (VAR_15 == ((void*)0)) {
  FUNC_8("write");
  FUNC_2(VAR_19);
  return (1);
 }
 FUNC_6(VAR_15, 'c', VAR_16);

 if (FUNC_10(VAR_19, VAR_15, VAR_16) < VAR_16) {
  FUNC_4(VAR_15);
  FUNC_8("write");
  FUNC_2(VAR_19);
  return (1);
 }

 FUNC_4(VAR_15);
 {
  FUNC_8("FALLOC_FL_PUNCH_HOLE unsupported");
  FUNC_2(VAR_19);
  return (1);
 }

 FUNC_2(VAR_19);
 return (0);
}
