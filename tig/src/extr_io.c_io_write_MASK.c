
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {scalar_t__ error; int pipe; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct io*) ;
 int FUNC_1 (int ,char const*,size_t) ;

bool
FUNC_2(struct io *VAR_3, const void *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = VAR_4;
 size_t VAR_7 = 0;

 while (!FUNC_0(VAR_3) && VAR_7 < VAR_5) {
  ssize_t VAR_8;

  VAR_8 = FUNC_1(VAR_3->pipe, VAR_6 + VAR_7, VAR_5 - VAR_7);
  if (VAR_8 < 0 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
   continue;
  else if (VAR_8 == -1)
   VAR_3->error = VAR_2;
  else
   VAR_7 += VAR_8;
 }

 return VAR_7 == VAR_5;
}
