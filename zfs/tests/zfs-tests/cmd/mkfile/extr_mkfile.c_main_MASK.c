
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {size_t st_blksize; } ;
typedef scalar_t__ ssize_t ;
typedef int offset_t ;
typedef size_t off_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (size_t,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (int,size_t) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_9 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,struct stat64*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 (char) ;
 scalar_t__ FUNC_11 (int,size_t,int ) ;
 int FUNC_12 (char*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_13 (int) ;
 size_t FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 (int,char*,size_t) ;

int
FUNC_17(int VAR_12, char **VAR_13)
{
 char *VAR_14;
 off_t VAR_15;
 size_t VAR_16;
 size_t VAR_17 = 1;
 char *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24;

 if (VAR_12 == 1)
  FUNC_15();

 while (VAR_13[1] && VAR_13[1][0] == '-') {
  VAR_14 = &VAR_13[1][0];
  while (*(++VAR_14)) {
   switch (*VAR_14) {
   case 'v':
    VAR_22++;
    break;
   case 'n':
    VAR_23++;
    break;
   default:
    FUNC_15();
   }
  }
  VAR_12--;
  VAR_13++;
 }
 if (VAR_12 < 3)
  FUNC_15();

 VAR_16 = FUNC_14(VAR_13[1]);
 if (VAR_16 && FUNC_9(VAR_13[1][VAR_16-1])) {
  switch (VAR_13[1][VAR_16-1]) {
  case 'k':
  case 'K':
   VAR_17 = VAR_3;
   break;
  case 'b':
  case 'B':
   VAR_17 = VAR_0;
   break;
  case 'm':
  case 'M':
   VAR_17 = VAR_4;
   break;
  case 'g':
  case 'G':
   VAR_17 = VAR_2;
   break;
  default:
   (void) FUNC_5(VAR_10,
       FUNC_8("unknown size %s\n"), VAR_13[1]);
   FUNC_15();
  }

  for (VAR_21 = 0; VAR_21 <= (VAR_16-2); VAR_21++) {
   if (!FUNC_10(VAR_13[1][VAR_21])) {
    (void) FUNC_5(VAR_10,
        FUNC_8("unknown size %s\n"), VAR_13[1]);
    FUNC_15();
   }
  }
  VAR_13[1][VAR_16-1] = '\0';
 }
 VAR_15 = ((off_t)FUNC_1(VAR_13[1]) * (off_t)VAR_17);

 VAR_13++;
 VAR_12--;

 while (VAR_12 > 1) {
  int VAR_25;

  if (VAR_22)
   (void) FUNC_5(VAR_11, FUNC_8("%s %lld bytes\n"),
       VAR_13[1], (offset_t)VAR_15);
  VAR_25 = FUNC_12(VAR_13[1], VAR_5|VAR_7|VAR_6, VAR_1);
  if (VAR_25 < 0) {
   VAR_24 = VAR_9;
   (void) FUNC_5(VAR_10,
       FUNC_8("Could not open %s: %s\n"),
       VAR_13[1], FUNC_13(VAR_24));
   VAR_20++;
   VAR_13++;
   VAR_12--;
   continue;
  }
  if (FUNC_11(VAR_25, (off_t)VAR_15-1, VAR_8) < 0) {
   VAR_24 = VAR_9;
   (void) FUNC_5(VAR_10, FUNC_8(
       "Could not seek to offset %ld in %s: %s\n"),
       (unsigned long)VAR_15-1, VAR_13[1], FUNC_13(VAR_24));
   (void) FUNC_4(VAR_25);
   VAR_20++;
   VAR_13++;
   VAR_12--;
   continue;
  } else if (FUNC_16(VAR_25, "", 1) != 1) {
   VAR_24 = VAR_9;
   (void) FUNC_5(VAR_10, FUNC_8(
       "Could not set length of %s: %s\n"),
       VAR_13[1], FUNC_13(VAR_24));
   (void) FUNC_4(VAR_25);
   VAR_20++;
   VAR_13++;
   VAR_12--;
   continue;
  }

  if (!VAR_23) {
   off_t VAR_26 = 0;
   struct stat64 VAR_27;

   if (FUNC_11(VAR_25, (off_t)0, VAR_8) < 0) {
    VAR_24 = VAR_9;
    (void) FUNC_5(VAR_10, FUNC_8(
        "Could not seek to beginning of %s: %s\n"),
        VAR_13[1], FUNC_13(VAR_24));
    (void) FUNC_4(VAR_25);
    VAR_20++;
    VAR_13++;
    VAR_12--;
    continue;
   }
   if (FUNC_7(VAR_25, &VAR_27) < 0) {
    VAR_24 = VAR_9;
    (void) FUNC_5(VAR_10, FUNC_8(
        "Could not fstat64 %s: %s\n"),
        VAR_13[1], FUNC_13(VAR_24));
    (void) FUNC_4(VAR_25);
    VAR_20++;
    VAR_13++;
    VAR_12--;
    continue;
   }
   if (VAR_19 != VAR_27.st_blksize) {
    if (VAR_18)
     FUNC_6(VAR_18);
    VAR_19 = (size_t)VAR_27.st_blksize;
    VAR_18 = FUNC_2(1, VAR_19);
    if (VAR_18 == ((void*)0)) {
     (void) FUNC_5(VAR_10, FUNC_8(
         "Could not allocate buffer of"
         " size %d\n"), (int)VAR_19);
     (void) FUNC_4(VAR_25);
     VAR_19 = 0;
     VAR_20++;
     VAR_13++;
     VAR_12--;
     continue;
    }
   }
   while (VAR_26 < VAR_15) {
    ssize_t VAR_28;
    size_t VAR_29 = (size_t)FUNC_0(VAR_19, VAR_15-VAR_26);

    if ((VAR_28 = FUNC_16(VAR_25, VAR_18, VAR_29)) !=
        (ssize_t)VAR_29) {
     VAR_24 = VAR_9;
     if (VAR_28 < 0)
      VAR_28 = 0;
     VAR_26 += VAR_28;
     (void) FUNC_5(VAR_10, FUNC_8(
       "%s: initialized %lu of %lu bytes: %s\n"),
         VAR_13[1], (unsigned long)VAR_26,
         (unsigned long)VAR_15,
         FUNC_13(VAR_24));
     VAR_20++;
     break;
    }
    VAR_26 += VAR_29;
   }






   if (VAR_26 < VAR_15) {
    (void) FUNC_4(VAR_25);
    VAR_13++;
    VAR_12--;
    continue;
   }
  }
  if (FUNC_4(VAR_25) < 0) {
   VAR_24 = VAR_9;
   (void) FUNC_5(VAR_10, FUNC_8(
       "Error encountered when closing %s: %s\n"),
       VAR_13[1], FUNC_13(VAR_24));
   VAR_20++;
   VAR_13++;
   VAR_12--;
   continue;
  }






  if (FUNC_3(VAR_13[1], VAR_1) < 0)
   (void) FUNC_5(VAR_10, FUNC_8(
       "warning: couldn't set mode to %#o\n"), VAR_1);

  VAR_13++;
  VAR_12--;
 }
 return (VAR_20);
}
