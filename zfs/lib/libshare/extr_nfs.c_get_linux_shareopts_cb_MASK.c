
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 char **VAR_5 = (char **)VAR_4;


 if (FUNC_1(VAR_2, "ro") == 0 || FUNC_1(VAR_2, "rw") == 0 ||
     FUNC_1(VAR_2, "sec") == 0)
  return (VAR_0);

 if (FUNC_1(VAR_2, "anon") == 0)
  VAR_2 = "anonuid";

 if (FUNC_1(VAR_2, "root_mapping") == 0) {
  (void) FUNC_0(VAR_5, "root_squash", ((void*)0));
  VAR_2 = "anonuid";
 }

 if (FUNC_1(VAR_2, "nosub") == 0)
  VAR_2 = "subtree_check";

 if (FUNC_1(VAR_2, "insecure") != 0 && FUNC_1(VAR_2, "secure") != 0 &&
     FUNC_1(VAR_2, "async") != 0 && FUNC_1(VAR_2, "sync") != 0 &&
     FUNC_1(VAR_2, "no_wdelay") != 0 && FUNC_1(VAR_2, "wdelay") != 0 &&
     FUNC_1(VAR_2, "nohide") != 0 && FUNC_1(VAR_2, "hide") != 0 &&
     FUNC_1(VAR_2, "crossmnt") != 0 &&
     FUNC_1(VAR_2, "no_subtree_check") != 0 &&
     FUNC_1(VAR_2, "subtree_check") != 0 &&
     FUNC_1(VAR_2, "insecure_locks") != 0 &&
     FUNC_1(VAR_2, "secure_locks") != 0 &&
     FUNC_1(VAR_2, "no_auth_nlm") != 0 && FUNC_1(VAR_2, "auth_nlm") != 0 &&
     FUNC_1(VAR_2, "no_acl") != 0 && FUNC_1(VAR_2, "mountpoint") != 0 &&
     FUNC_1(VAR_2, "mp") != 0 && FUNC_1(VAR_2, "fsuid") != 0 &&
     FUNC_1(VAR_2, "refer") != 0 && FUNC_1(VAR_2, "replicas") != 0 &&
     FUNC_1(VAR_2, "root_squash") != 0 &&
     FUNC_1(VAR_2, "no_root_squash") != 0 &&
     FUNC_1(VAR_2, "all_squash") != 0 &&
     FUNC_1(VAR_2, "no_all_squash") != 0 && FUNC_1(VAR_2, "fsid") != 0 &&
     FUNC_1(VAR_2, "anonuid") != 0 && FUNC_1(VAR_2, "anongid") != 0) {
  return (VAR_1);
 }

 (void) FUNC_0(VAR_5, VAR_2, VAR_3);

 return (VAR_0);
}
