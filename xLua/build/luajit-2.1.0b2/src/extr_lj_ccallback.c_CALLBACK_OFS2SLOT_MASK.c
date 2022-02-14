
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSize ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static MSize FUNC_0(MSize VAR_2)
{
  MSize VAR_3;
  VAR_2 -= VAR_1;
  VAR_3 = VAR_2 / (32*4 + VAR_0);
  return (VAR_2 % (32*4 + VAR_0))/4 + VAR_3*32;
}
