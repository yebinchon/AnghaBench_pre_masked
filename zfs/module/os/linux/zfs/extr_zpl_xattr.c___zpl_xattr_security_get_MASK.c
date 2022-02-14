
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct inode*,char*,void*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, const char *VAR_3,
    void *VAR_4, size_t VAR_5)
{
 char *VAR_6;
 int VAR_7;


 if (FUNC_2(VAR_3, "") == 0)
  return (-VAR_0);

 VAR_6 = FUNC_0("%s%s", VAR_1, VAR_3);
 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_4, VAR_5);
 FUNC_1(VAR_6);

 return (VAR_7);
}
