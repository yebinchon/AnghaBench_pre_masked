
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int eof; scalar_t__ error; int pipe; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,void*,size_t) ;

ssize_t
FUNC_1(struct io *VAR_3, void *VAR_4, size_t VAR_5)
{
 do {
  ssize_t VAR_6 = FUNC_0(VAR_3->pipe, VAR_4, VAR_5);

  if (VAR_6 < 0 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
   continue;
  else if (VAR_6 == -1)
   VAR_3->error = VAR_2;
  else if (VAR_6 == 0)
   VAR_3->eof = 1;
  return VAR_6;
 } while (1);
}
