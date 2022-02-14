
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;
 int VAR_12 ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int *,int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_12(int VAR_13, char **VAR_14)
{
 zfs_handle_t *VAR_15;
 int VAR_16 = 0;
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19, *VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 struct sigaction VAR_23;

 while ((VAR_22 = FUNC_2(VAR_13, VAR_14, "FHt")) != -1) {
  switch (VAR_22) {
  case 'F':
   VAR_16 |= VAR_4;
   break;
  case 'H':
   VAR_16 |= VAR_5;
   break;
  case 't':
   VAR_16 |= VAR_6;
   break;
  default:
   (void) FUNC_0(VAR_12,
       FUNC_3("invalid option '%c'\n"), VAR_11);
   FUNC_8(VAR_0);
  }
 }

 VAR_13 -= VAR_10;
 VAR_14 += VAR_10;

 if (VAR_13 < 1) {
  (void) FUNC_0(VAR_12,
      "%s", FUNC_3("must provide at least one snapshot name\n"));
  FUNC_8(VAR_0);
 }

 if (VAR_13 > 2) {
  (void) FUNC_0(VAR_12, "%s", FUNC_3("too many arguments\n"));
  FUNC_8(VAR_0);
 }

 VAR_18 = VAR_14[0];
 VAR_17 = (VAR_13 == 2) ? VAR_14[1] : ((void*)0);

 VAR_20 = ((void*)0);
 if (*VAR_18 != '@')
  VAR_20 = FUNC_7(VAR_18);
 else if (VAR_17)
  VAR_20 = FUNC_7(VAR_17);
 if (VAR_20 == ((void*)0))
  FUNC_8(VAR_0);

 if ((VAR_19 = FUNC_6(VAR_20, '@')) != ((void*)0))
  *VAR_19 = '\0';

 if ((VAR_15 = FUNC_10(VAR_9, VAR_20, VAR_7)) == ((void*)0)) {
  FUNC_1(VAR_20);
  return (1);
 }
 FUNC_1(VAR_20);





 if (FUNC_5(&VAR_23.sa_mask) == -1) {
  VAR_21 = VAR_8;
  goto out;
 }
 VAR_23.sa_flags = 0;
 VAR_23.sa_handler = VAR_2;
 if (FUNC_4(VAR_1, &VAR_23, ((void*)0)) == -1) {
  VAR_21 = VAR_8;
  goto out;
 }

 VAR_21 = FUNC_11(VAR_15, VAR_3, VAR_18, VAR_17, VAR_16);
out:
 FUNC_9(VAR_15);

 return (VAR_21 != 0);
}
