
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int snapname ;
typedef int nvlist_t ;
typedef int errbuf ;
typedef int bookname ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *,char*,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int,char**,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,int,char*,char*) ;
 int VAR_7 ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_16(int VAR_8, char **VAR_9)
{
 char VAR_10[VAR_2];
 char VAR_11[VAR_2];
 zfs_handle_t *VAR_12;
 nvlist_t *VAR_13;
 int VAR_14 = 0;
 int VAR_15;


 while ((VAR_15 = FUNC_5(VAR_8, VAR_9, "")) != -1) {
  switch (VAR_15) {
  case '?':
   (void) FUNC_4(VAR_7,
       FUNC_6("invalid option '%c'\n"), VAR_6);
   goto usage;
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;


 if (VAR_8 < 1) {
  (void) FUNC_4(VAR_7, "%s", FUNC_6("missing snapshot argument\n"));
  goto usage;
 }
 if (VAR_8 < 2) {
  (void) FUNC_4(VAR_7, "%s", FUNC_6("missing bookmark argument\n"));
  goto usage;
 }

 if (FUNC_9(VAR_9[0], '@') == ((void*)0)) {
  (void) FUNC_4(VAR_7,
      FUNC_6("invalid snapshot name '%s': "
      "must contain a '@'\n"), VAR_9[0]);
  goto usage;
 }
 if (FUNC_9(VAR_9[1], '#') == ((void*)0)) {
  (void) FUNC_4(VAR_7,
      FUNC_6("invalid bookmark name '%s': "
      "must contain a '#'\n"), VAR_9[1]);
  goto usage;
 }

 if (VAR_9[0][0] == '@') {




  (void) FUNC_11(VAR_10, VAR_9[1], sizeof (VAR_10));
  *FUNC_9(VAR_10, '#') = '\0';
  (void) FUNC_10(VAR_10, VAR_9[0], sizeof (VAR_10));
 } else {
  (void) FUNC_11(VAR_10, VAR_9[0], sizeof (VAR_10));
 }
 if (VAR_9[1][0] == '#') {




  (void) FUNC_11(VAR_11, VAR_9[0], sizeof (VAR_11));
  *FUNC_9(VAR_11, '@') = '\0';
  (void) FUNC_10(VAR_11, VAR_9[1], sizeof (VAR_11));
 } else {
  (void) FUNC_11(VAR_11, VAR_9[1], sizeof (VAR_11));
 }

 VAR_12 = FUNC_14(VAR_4, VAR_10, VAR_3);
 if (VAR_12 == ((void*)0))
  goto usage;
 FUNC_13(VAR_12);


 VAR_13 = FUNC_2();
 FUNC_1(VAR_13, VAR_11, VAR_10);
 VAR_14 = FUNC_7(VAR_13, ((void*)0));
 FUNC_3(VAR_13);

 if (VAR_14 != 0) {
  const char *VAR_16 = ((void*)0);
  char VAR_17[1024];

  (void) FUNC_8(VAR_17, sizeof (VAR_17),
      FUNC_0(VAR_1,
      "cannot create bookmark '%s'"), VAR_11);

  switch (VAR_14) {
  case 128:
   VAR_16 = "bookmark is in a different pool";
   break;
  case 133:
   VAR_16 = "bookmark exists";
   break;
  case 132:
   VAR_16 = "invalid argument";
   break;
  case 129:
   VAR_16 = "bookmark feature not enabled";
   break;
  case 130:
   VAR_16 = "out of space";
   break;
  case 131:
   VAR_16 = "dataset does not exist";
   break;
  default:
   (void) FUNC_15(VAR_4, VAR_14, VAR_17);
   break;
  }
  if (VAR_16 != ((void*)0)) {
   (void) FUNC_4(VAR_7, "%s: %s\n", VAR_17,
       FUNC_0(VAR_1, VAR_16));
  }
 }

 return (VAR_14 != 0);

usage:
 FUNC_12(VAR_0);
 return (-1);
}
