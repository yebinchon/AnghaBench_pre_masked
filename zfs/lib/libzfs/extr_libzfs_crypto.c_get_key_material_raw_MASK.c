
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_keyformat_t ;
typedef char uint8_t ;
struct termios {int c_lflag; } ;
struct sigaction {int sa_handler; int sa_mask; scalar_t__ sa_flags; } ;
typedef scalar_t__ boolean_t ;
typedef int FILE ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_12 (int *) ;
 int VAR_14 ;
 int FUNC_13 (int ,struct termios*) ;
 int FUNC_14 (int ,int ,struct termios*) ;

__attribute__((used)) static int
FUNC_15(FILE *VAR_15, const char *VAR_16, zfs_keyformat_t VAR_17,
    boolean_t VAR_18, boolean_t VAR_19, uint8_t **VAR_20, size_t *VAR_21)
{
 int VAR_22 = 0, VAR_23;
 size_t VAR_24 = 0;
 struct termios VAR_25, VAR_26;
 struct sigaction VAR_27, VAR_28, VAR_29;

 *VAR_21 = 0;

 if (FUNC_7(FUNC_1(VAR_15))) {




  VAR_12 = 0;
  VAR_27.sa_flags = 0;
  (void) FUNC_12(&VAR_27.sa_mask);
  VAR_27.sa_handler = VAR_11;

  (void) FUNC_11(VAR_5, &VAR_27, &VAR_28);
  VAR_27.sa_handler = VAR_7;
  (void) FUNC_11(VAR_6, &VAR_27, &VAR_29);


  if (VAR_16 != ((void*)0)) {
   (void) FUNC_10("%s %s%s for '%s': ",
       (VAR_18) ? "Re-enter" : "Enter",
       (VAR_19) ? "new " : "",
       FUNC_4(VAR_17), VAR_16);
  } else {
   (void) FUNC_10("%s %s%s: ",
       (VAR_18) ? "Re-enter" : "Enter",
       (VAR_19) ? "new " : "",
       FUNC_4(VAR_17));

  }
  (void) FUNC_0(VAR_14);


  (void) FUNC_13(FUNC_1(VAR_15), &VAR_25);

  VAR_26 = VAR_25;
  VAR_26.c_lflag &= ~(VAR_0 | VAR_1 | VAR_2 | VAR_3);

  VAR_22 = FUNC_14(FUNC_1(VAR_15), VAR_8, &VAR_26);
  if (VAR_22 != 0) {
   VAR_22 = VAR_13;
   VAR_13 = 0;
   goto out;
  }
 }


 if (VAR_17 != VAR_10) {
  VAR_23 = FUNC_5((char **)VAR_20, &VAR_24, VAR_15);
  if (VAR_23 < 0) {
   VAR_22 = VAR_13;
   VAR_13 = 0;
   goto out;
  }


  if ((*VAR_20)[VAR_23 - 1] == '\n') {
   (*VAR_20)[VAR_23 - 1] = '\0';
   VAR_23--;
  }
 } else {






  *VAR_20 = FUNC_9((VAR_9 + 1) * sizeof (char));
  if (*VAR_20 == ((void*)0)) {
   VAR_22 = VAR_4;
   goto out;
  }

  VAR_23 = FUNC_2(*VAR_20, 1, VAR_9 + 1, VAR_15);
  if (VAR_23 < 0) {

   FUNC_3(*VAR_20);
   *VAR_20 = ((void*)0);
   VAR_22 = VAR_13;
   VAR_13 = 0;
   goto out;
  }
 }

 *VAR_21 = VAR_23;

out:
 if (FUNC_7(FUNC_1(VAR_15))) {

  (void) FUNC_14(FUNC_1(VAR_15), VAR_8, &VAR_25);
  (void) FUNC_11(VAR_5, &VAR_28, ((void*)0));
  (void) FUNC_11(VAR_6, &VAR_29, ((void*)0));


  if (VAR_12 != 0) {
   (void) FUNC_8(FUNC_6(), VAR_12);
  }


  FUNC_10("\n");
 }

 return (VAR_22);

}
