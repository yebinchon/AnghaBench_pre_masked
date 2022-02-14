
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zpc_recursive; scalar_t__ zpc_ignore_noent; } ;
typedef TYPE_1__ zfs_project_control_t ;
struct dirent {char const* d_name; scalar_t__ d_type; } ;
typedef int list_t ;
typedef int fullname ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char const*,char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,TYPE_1__*) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_7, zfs_project_control_t *VAR_8,
    list_t *VAR_9)
{
 char VAR_10[VAR_4];
 struct dirent *VAR_11;
 DIR *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12 == ((void*)0)) {
  if (VAR_5 == VAR_3 && VAR_8->zpc_ignore_noent)
   return (0);

  VAR_13 = -VAR_5;
  (void) FUNC_1(VAR_6, FUNC_2("failed to opendir %s: %s\n"),
      VAR_7, FUNC_7(VAR_5));
  return (VAR_13);
 }


 VAR_8->zpc_ignore_noent = VAR_0;
 VAR_5 = 0;
 while (!VAR_13 && (VAR_11 = FUNC_4(VAR_12)) != ((void*)0)) {

  if (FUNC_6(VAR_11->d_name, ".") == 0 ||
      FUNC_6(VAR_11->d_name, "..") == 0)
   continue;

  if (FUNC_8(VAR_11->d_name) + FUNC_8(VAR_7) >=
      sizeof (VAR_10) + 1) {
   VAR_5 = VAR_2;
   break;
  }

  FUNC_5(VAR_10, "%s/%s", VAR_7, VAR_11->d_name);
  VAR_13 = FUNC_9(VAR_10, VAR_8);
  if (!VAR_13 && VAR_8->zpc_recursive && VAR_11->d_type == VAR_1)
   FUNC_10(VAR_9, VAR_10);
 }

 if (VAR_5 && !VAR_13) {
  VAR_13 = -VAR_5;
  (void) FUNC_1(VAR_6, FUNC_2("failed to readdir %s: %s\n"),
      VAR_7, FUNC_7(VAR_5));
 }

 FUNC_0(VAR_12);
 return (VAR_13);
}
