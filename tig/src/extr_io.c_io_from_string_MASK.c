
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {size_t bufalloc; size_t bufsize; int eof; int buf; int bufpos; } ;


 int FUNC_0 (struct io*) ;
 int FUNC_1 (int *,size_t,size_t) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,size_t) ;

bool
FUNC_4(struct io *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_0);

 if (!FUNC_1(&VAR_0->buf, VAR_0->bufalloc, VAR_2))
  return 0;

 VAR_0->bufsize = VAR_0->bufalloc = VAR_2;
 VAR_0->bufpos = VAR_0->buf;
 VAR_0->eof = 1;
 FUNC_3(VAR_0->buf, VAR_1, VAR_2);

 return 1;
}
