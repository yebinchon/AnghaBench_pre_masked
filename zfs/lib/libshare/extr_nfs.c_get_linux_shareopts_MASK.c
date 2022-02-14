
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,char**) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, char **VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3 != ((void*)0));

 *VAR_3 = ((void*)0);


 (void) FUNC_0(VAR_3, "no_subtree_check", ((void*)0));


 (void) FUNC_0(VAR_3, "mountpoint", ((void*)0));

 VAR_4 = FUNC_2(VAR_2, VAR_1,
     VAR_3);

 if (VAR_4 != VAR_0) {
  FUNC_3(*VAR_3);
  *VAR_3 = ((void*)0);
 }

 return (VAR_4);
}
