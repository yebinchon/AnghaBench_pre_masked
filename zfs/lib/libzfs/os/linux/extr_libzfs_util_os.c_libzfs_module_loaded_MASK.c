
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_prefix ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 const char VAR_2[] = "/sys/module/";
 char VAR_3[256];

 FUNC_1(VAR_3, VAR_2, sizeof (VAR_2) - 1);
 FUNC_2(VAR_3 + sizeof (VAR_2) - 1, VAR_1);

 return (FUNC_0(VAR_3, VAR_0) == 0);
}
