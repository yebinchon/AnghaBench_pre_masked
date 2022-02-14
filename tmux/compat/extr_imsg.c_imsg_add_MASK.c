
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ibuf {int dummy; } ;


 int FUNC_0 (struct ibuf*,void const*,int) ;
 int FUNC_1 (struct ibuf*) ;

int
FUNC_2(struct ibuf *VAR_0, const void *VAR_1, uint16_t VAR_2)
{
 if (VAR_2)
  if (FUNC_0(VAR_0, VAR_1, VAR_2) == -1) {
   FUNC_1(VAR_0);
   return (-1);
  }
 return (VAR_2);
}
