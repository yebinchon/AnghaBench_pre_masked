
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ibuf {scalar_t__ wpos; scalar_t__ max; scalar_t__ size; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct ibuf *VAR_2, size_t VAR_3)
{
 u_char *VAR_4;


 if (VAR_2->wpos + VAR_3 > VAR_2->max) {
  VAR_1 = VAR_0;
  return (-1);
 }

 VAR_4 = FUNC_0(VAR_2->buf, VAR_2->size, VAR_2->wpos + VAR_3, 1);
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_2->buf = VAR_4;
 VAR_2->size = VAR_2->wpos + VAR_3;

 return (0);
}
