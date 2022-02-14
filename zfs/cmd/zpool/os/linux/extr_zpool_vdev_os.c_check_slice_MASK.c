
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;
typedef int blkid_cache ;


 char* FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char const*,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_0, blkid_cache VAR_1, int VAR_2, boolean_t VAR_3)
{
 int VAR_4;
 char *VAR_5;


 VAR_5 = FUNC_0(VAR_1, "TYPE", VAR_0);
 if (VAR_5 == ((void*)0))
  return (0);






 if (FUNC_4(VAR_5, "zfs_member") == 0) {
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 } else {
  if (VAR_2) {
   VAR_4 = 0;
  } else {
   VAR_4 = -1;
   FUNC_5(FUNC_3("%s contains a filesystem of "
       "type '%s'\n"), VAR_0, VAR_5);
  }
 }

 FUNC_2(VAR_5);

 return (VAR_4);
}
