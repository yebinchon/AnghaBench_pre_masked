
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int offset; int size; } ;
typedef TYPE_1__ xattr_filldir_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(xattr_filldir_t *VAR_1, const char *VAR_2, int VAR_3)
{

 if (!FUNC_1(VAR_1, VAR_2, VAR_3))
  return (0);


 if (VAR_1->buf) {
  if (VAR_1->offset + VAR_3 + 1 > VAR_1->size)
   return (-VAR_0);

  FUNC_0(VAR_1->buf + VAR_1->offset, VAR_2, VAR_3);
  VAR_1->buf[VAR_1->offset + VAR_3] = '\0';
 }

 VAR_1->offset += (VAR_3 + 1);

 return (0);
}
