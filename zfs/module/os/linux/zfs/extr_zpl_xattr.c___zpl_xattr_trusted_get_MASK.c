
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct inode*,char*,void*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_4, const char *VAR_5,
    void *VAR_6, size_t VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_0))
  return (-VAR_1);


 if (FUNC_3(VAR_5, "") == 0)
  return (-VAR_2);

 VAR_8 = FUNC_1("%s%s", VAR_3, VAR_5);
 VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_6, VAR_7);
 FUNC_2(VAR_8);

 return (VAR_9);
}
