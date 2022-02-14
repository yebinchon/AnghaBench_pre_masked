
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (void*) ;
 char* VAR_7 ;
 int FUNC_4 (int,int,int ) ;
 char* VAR_8 ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void**,int,int) ;
 int FUNC_9 (int,void*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (int,void*,int) ;

int
FUNC_12(int VAR_12, char *VAR_13[])
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 void *VAR_17;
 int VAR_18;

 FUNC_6(VAR_12, VAR_13);

 VAR_15 = FUNC_5(VAR_7, VAR_1);
 if (VAR_15 == -1) {
  (void) FUNC_2(VAR_10, "%s: %s: ", VAR_6, VAR_7);
  FUNC_7("open");
  FUNC_1(2);
 }

 VAR_16 = FUNC_5(VAR_8, VAR_2 | VAR_0, 0666);
 if (VAR_16 == -1) {
  (void) FUNC_2(VAR_10, "%s: %s: ", VAR_6, VAR_8);
  FUNC_7("open");
  FUNC_1(2);
 }





 int VAR_19 = FUNC_8(&VAR_17, 4096, VAR_4);
 if (VAR_19 != 0) {
  (void) FUNC_2(VAR_10,
      "%s: %s\n", VAR_6, FUNC_10(VAR_19));
  FUNC_1(2);
 }

 if (VAR_9 > 0) {
  if (FUNC_4(VAR_16, VAR_9 * VAR_4, VAR_3) == -1) {
   FUNC_7("output lseek");
   FUNC_1(2);
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_18 = FUNC_9(VAR_15, VAR_17, VAR_4);
  if (VAR_18 != VAR_4) {

   FUNC_7("read");
   FUNC_1(2);
  }
  if (VAR_18 != VAR_4) {
   if (VAR_18 < 0) {
    FUNC_7("read");
   } else {
    (void) FUNC_2(VAR_10,
        "%s: unexpected short read, read %d "
        "bytes, expected %d\n", VAR_6,
        VAR_18, VAR_4);
   }
   FUNC_1(2);
  }

  VAR_18 = FUNC_11(VAR_16, VAR_17, VAR_4);
  if (VAR_18 != VAR_4) {
   if (VAR_18 < 0) {
    FUNC_7("write");
   } else {
    (void) FUNC_2(VAR_10,
        "%s: unexpected short write, wrote %d "
        "bytes, expected %d\n", VAR_6,
        VAR_18, VAR_4);
   }
   FUNC_1(2);
  }

  if (VAR_11 > 1) {
   if (FUNC_4(VAR_15, (VAR_11 - 1) * VAR_4, VAR_3) == -1) {
    FUNC_7("input lseek");
    FUNC_1(2);
   }
   if (FUNC_4(VAR_16, (VAR_11 - 1) * VAR_4, VAR_3) == -1) {
    FUNC_7("output lseek");
    FUNC_1(2);
   }
  }
 }
 FUNC_3(VAR_17);

 (void) FUNC_0(VAR_16);
 (void) FUNC_0(VAR_15);

 return (0);
}
