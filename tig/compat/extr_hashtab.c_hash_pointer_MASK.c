
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int hashval_t ;
typedef scalar_t__ PTR ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static hashval_t
FUNC_1 (const PTR VAR_1)
{
  intptr_t VAR_2 = (intptr_t) VAR_1;
  unsigned VAR_3, VAR_4, VAR_5;

  VAR_3 = VAR_4 = 0x9e3779b9;
  VAR_3 += VAR_2 >> (sizeof (intptr_t) * VAR_0 / 2);
  VAR_4 += VAR_2 & (((intptr_t) 1 << (sizeof (intptr_t) * VAR_0 / 2)) - 1);
  VAR_5 = 0x42135234;
  FUNC_0 (VAR_3, VAR_4, VAR_5);
  return VAR_5;
}
