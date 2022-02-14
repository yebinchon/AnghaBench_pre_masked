
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;
typedef int blkid_cache ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*) ;
 int VAR_0 ;

int
FUNC_5(const char *VAR_1, boolean_t VAR_2,
    boolean_t VAR_3, boolean_t VAR_4)
{
 blkid_cache VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5, ((void*)0));
 if (VAR_6 != 0) {
  (void) FUNC_3(VAR_0, "%s", FUNC_4("unable to access the blkid "
      "cache.\n"));
  return (-1);
 }

 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_5);

 return (VAR_6);
}
