
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
struct option {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int,char**,char*,struct option*,int *) ;
 char* FUNC_2 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(int VAR_8, char **VAR_9)
{
 boolean_t VAR_10, VAR_11;
 char *VAR_12;
 zpool_handle_t *VAR_13;
 int VAR_14, VAR_15;

 struct option VAR_16[] = {
  {"discard", VAR_4, ((void*)0), 'd'},
  {"wait", VAR_4, ((void*)0), 'w'},
  {0, 0, 0, 0}
 };

 VAR_10 = VAR_0;
 VAR_11 = VAR_0;
 while ((VAR_14 = FUNC_1(VAR_8, VAR_9, ":dw", VAR_16, ((void*)0))) != -1) {
  switch (VAR_14) {
  case 'd':
   VAR_10 = VAR_1;
   break;
  case 'w':
   VAR_11 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_7, FUNC_2("invalid option '%c'\n"),
       VAR_6);
   FUNC_4(VAR_0);
  }
 }

 if (VAR_11 && !VAR_10) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("--wait only valid when "
      "--discard also specified\n"));
  FUNC_4(VAR_0);
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;

 if (VAR_8 < 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("missing pool argument\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_8 > 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("too many arguments\n"));
  FUNC_4(VAR_0);
 }

 VAR_12 = VAR_9[0];

 if ((VAR_13 = FUNC_8(VAR_3, VAR_12)) == ((void*)0)) {

  if (FUNC_3(VAR_12, '/') != ((void*)0))
   (void) FUNC_0(VAR_7, "%s", FUNC_2("'zpool checkpoint' "
       "doesn't work on datasets. To save the state "
       "of a dataset from a specific point in time "
       "please use 'zfs snapshot'\n"));
  return (1);
 }

 if (VAR_10) {
  VAR_15 = (FUNC_7(VAR_13) != 0);
  if (VAR_15 == 0 && VAR_11)
   VAR_15 = FUNC_9(VAR_13, VAR_2);
 } else {
  VAR_15 = (FUNC_5(VAR_13) != 0);
 }

 FUNC_6(VAR_13);

 return (VAR_15);
}
