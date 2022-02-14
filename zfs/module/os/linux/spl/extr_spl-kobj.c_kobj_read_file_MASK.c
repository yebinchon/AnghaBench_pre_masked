
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _buf {int vp; } ;
typedef unsigned int ssize_t ;
typedef int offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,unsigned int,int ,int ,int ,int ,int ,unsigned int*) ;

int
FUNC_1(struct _buf *VAR_2, char *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 ssize_t VAR_6;

 if (FUNC_0(VAR_0, VAR_2->vp, VAR_3, VAR_4, (offset_t)VAR_5,
     VAR_1, 0, 0, 0, &VAR_6) != 0)
  return (-1);

 return (VAR_4 - VAR_6);
}
