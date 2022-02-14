
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSLConnection ;
typedef int Connection ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(Connection *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 < 0)
  return -1;

 return FUNC_0((SSLConnection *) VAR_0);
}
