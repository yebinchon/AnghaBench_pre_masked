
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;

boolean_t
FUNC_1(struct inode *VAR_1)
{
 return (FUNC_0(VAR_1) && (VAR_1->i_ino <= VAR_0));
}
