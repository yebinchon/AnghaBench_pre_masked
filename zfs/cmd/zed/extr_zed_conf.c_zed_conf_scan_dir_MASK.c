
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
struct zed_conf {char* zedlet_dir; int * zedlets; scalar_t__ do_verbose; int do_force; } ;
struct stat {int st_mode; scalar_t__ st_uid; } ;
struct dirent {char* d_name; } ;
typedef int pathname ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_11 ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*,...) ;
 scalar_t__ FUNC_8 (int *,int *,char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct zed_conf *VAR_12)
{
 zed_strings_t *VAR_13;
 DIR *VAR_14;
 struct dirent *VAR_15;
 char VAR_16[VAR_7];
 struct stat VAR_17;
 int VAR_18;

 if (!VAR_12) {
  VAR_11 = VAR_0;
  FUNC_7(VAR_3, "Failed to scan zedlet dir: %s",
      FUNC_6(VAR_11));
  return (-1);
 }
 VAR_13 = FUNC_9();
 if (!VAR_13) {
  VAR_11 = VAR_2;
  FUNC_7(VAR_6, "Failed to scan dir \"%s\": %s",
      VAR_12->zedlet_dir, FUNC_6(VAR_11));
  return (-1);
 }
 VAR_14 = FUNC_2(VAR_12->zedlet_dir);
 if (!VAR_14) {
  int VAR_19 = VAR_11;
  FUNC_7(VAR_6, "Failed to open dir \"%s\": %s",
      VAR_12->zedlet_dir, FUNC_6(VAR_11));
  FUNC_10(VAR_13);
  VAR_11 = VAR_19;
  return (-1);
 }
 while ((VAR_15 = FUNC_3(VAR_14))) {
  if (VAR_15->d_name[0] == '.')
   continue;

  VAR_18 = FUNC_4(VAR_16, sizeof (VAR_16),
      "%s/%s", VAR_12->zedlet_dir, VAR_15->d_name);
  if ((VAR_18 < 0) || (VAR_18 >= sizeof (VAR_16))) {
   FUNC_7(VAR_6, "Failed to stat \"%s\": %s",
       VAR_15->d_name, FUNC_6(VAR_1));
   continue;
  }
  if (FUNC_5(VAR_16, &VAR_17) < 0) {
   FUNC_7(VAR_6, "Failed to stat \"%s\": %s",
       VAR_16, FUNC_6(VAR_11));
   continue;
  }
  if (!FUNC_0(VAR_17.st_mode)) {
   FUNC_7(VAR_4,
       "Ignoring \"%s\": not a regular file",
       VAR_15->d_name);
   continue;
  }
  if ((VAR_17.st_uid != 0) && !VAR_12->do_force) {
   FUNC_7(VAR_5,
       "Ignoring \"%s\": not owned by root",
       VAR_15->d_name);
   continue;
  }
  if (!(VAR_17.st_mode & VAR_10)) {
   FUNC_7(VAR_4,
       "Ignoring \"%s\": not executable by user",
       VAR_15->d_name);
   continue;
  }
  if ((VAR_17.st_mode & VAR_8) && !VAR_12->do_force) {
   FUNC_7(VAR_5,
       "Ignoring \"%s\": writable by group",
       VAR_15->d_name);
   continue;
  }
  if ((VAR_17.st_mode & VAR_9) && !VAR_12->do_force) {
   FUNC_7(VAR_5,
       "Ignoring \"%s\": writable by other",
       VAR_15->d_name);
   continue;
  }
  if (FUNC_8(VAR_13, ((void*)0), VAR_15->d_name) < 0) {
   FUNC_7(VAR_6,
       "Failed to register \"%s\": %s",
       VAR_15->d_name, FUNC_6(VAR_11));
   continue;
  }
  if (VAR_12->do_verbose)
   FUNC_7(VAR_4,
       "Registered zedlet \"%s\"", VAR_15->d_name);
 }
 if (FUNC_1(VAR_14) < 0) {
  int VAR_20 = VAR_11;
  FUNC_7(VAR_6, "Failed to close dir \"%s\": %s",
      VAR_12->zedlet_dir, FUNC_6(VAR_11));
  FUNC_10(VAR_13);
  VAR_11 = VAR_20;
  return (-1);
 }
 if (VAR_12->zedlets)
  FUNC_10(VAR_12->zedlets);

 VAR_12->zedlets = VAR_13;
 return (0);
}
