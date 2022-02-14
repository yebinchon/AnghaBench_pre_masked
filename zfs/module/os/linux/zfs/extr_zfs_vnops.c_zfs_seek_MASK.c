
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
typedef scalar_t__ offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(struct inode *VAR_2, offset_t VAR_3, offset_t *VAR_4)
{
 if (FUNC_0(VAR_2->i_mode))
  return (0);
 return ((*VAR_4 < 0 || *VAR_4 > VAR_1) ? VAR_0 : 0);
}
