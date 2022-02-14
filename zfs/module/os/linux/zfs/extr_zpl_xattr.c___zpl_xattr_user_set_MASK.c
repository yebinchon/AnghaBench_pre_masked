
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int z_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct inode*,char*,void const*,size_t,int) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_4, const char *VAR_5,
    const void *VAR_6, size_t VAR_7, int VAR_8)
{
 char *VAR_9;
 int VAR_10;


 if (FUNC_3(VAR_5, "") == 0)
  return (-VAR_0);

 if (!(FUNC_0(VAR_4)->z_flags & VAR_3))
  return (-VAR_1);

 VAR_9 = FUNC_1("%s%s", VAR_2, VAR_5);
 VAR_10 = FUNC_4(VAR_4, VAR_9, VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_9);

 return (VAR_10);
}
