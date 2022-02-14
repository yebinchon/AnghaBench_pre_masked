
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_deleg_who_type_t ;
typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct group {int gr_gid; } ;
struct allow_opts {char const* who; int perms; int descend; int local; scalar_t__ group; scalar_t__ user; scalar_t__ everyone; scalar_t__ create; scalar_t__ set; } ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*) ;
 struct group* FUNC_1 (int) ;
 struct group* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,int ,int ,char const*,int ,int *) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_14(boolean_t VAR_8, struct allow_opts *VAR_9, nvlist_t **VAR_10)
{
 if (FUNC_7(VAR_10, VAR_1, 0) != 0)
  FUNC_6();

 if (VAR_9->set) {
  FUNC_10(VAR_5, VAR_9->local,
      VAR_9->descend, VAR_9->who, VAR_9->perms, *VAR_10);
 } else if (VAR_9->create) {
  FUNC_10(VAR_2, VAR_9->local,
      VAR_9->descend, ((void*)0), VAR_9->perms, *VAR_10);
 } else if (VAR_9->everyone) {
  FUNC_10(VAR_3, VAR_9->local,
      VAR_9->descend, ((void*)0), VAR_9->perms, *VAR_10);
 } else {
  char *VAR_11 = VAR_9->who;
  char *VAR_12 = VAR_11 + FUNC_12(VAR_11);

  while (VAR_11 < VAR_12) {
   const char *VAR_13;
   zfs_deleg_who_type_t VAR_14 = VAR_7;
   char *VAR_15;
   char *VAR_16 = FUNC_11(VAR_11, ',');
   char VAR_17[256];
   char VAR_18[64];
   struct passwd *VAR_19 = ((void*)0);
   struct group *VAR_20 = ((void*)0);

   uid_t VAR_21;
   if (VAR_16 == ((void*)0))
    VAR_16 = VAR_12;
   else
    *VAR_16 = '\0';

   VAR_21 = (uid_t)FUNC_13(VAR_11, &VAR_15, 0);
   if (VAR_9->user) {
    VAR_14 = VAR_6;
    if (*VAR_15 != '\0')
     VAR_19 = FUNC_3(VAR_11);
    else
     VAR_19 = FUNC_4(VAR_21);

    if (VAR_19 != ((void*)0))
     VAR_21 = VAR_19->pw_uid;
    else {
     (void) FUNC_8(VAR_17, 256, FUNC_5(
         "invalid user %s"), VAR_11);
     FUNC_0(VAR_8, VAR_0, VAR_17);
    }
   } else if (VAR_9->group) {
    VAR_14 = VAR_4;
    if (*VAR_15 != '\0')
     VAR_20 = FUNC_2(VAR_11);
    else
     VAR_20 = FUNC_1(VAR_21);

    if (VAR_20 != ((void*)0))
     VAR_21 = VAR_20->gr_gid;
    else {
     (void) FUNC_8(VAR_17, 256, FUNC_5(
         "invalid group %s"), VAR_11);
     FUNC_0(VAR_8, VAR_0, VAR_17);
    }
   } else {
    if (*VAR_15 != '\0') {
     VAR_19 = FUNC_3(VAR_11);
    } else {
     VAR_19 = FUNC_4(VAR_21);
    }

    if (VAR_19 == ((void*)0)) {
     if (*VAR_15 != '\0') {
      VAR_20 = FUNC_2(VAR_11);
     } else {
      VAR_20 = FUNC_1(VAR_21);
     }
    }

    if (VAR_19 != ((void*)0)) {
     VAR_14 = VAR_6;
     VAR_21 = VAR_19->pw_uid;
    } else if (VAR_20 != ((void*)0)) {
     VAR_14 = VAR_4;
     VAR_21 = VAR_20->gr_gid;
    } else {
     (void) FUNC_8(VAR_17, 256, FUNC_5(
         "invalid user/group %s"), VAR_11);
     FUNC_0(VAR_8, VAR_0, VAR_17);
    }
   }

   (void) FUNC_9(VAR_18, "%u", VAR_21);
   VAR_13 = VAR_18;

   FUNC_10(VAR_14, VAR_9->local,
       VAR_9->descend, VAR_13, VAR_9->perms, *VAR_10);
   VAR_11 = VAR_16 + 1;
  }
 }

 return (0);
}
