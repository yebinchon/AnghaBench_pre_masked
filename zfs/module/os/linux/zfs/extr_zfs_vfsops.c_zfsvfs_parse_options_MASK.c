
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_t ;
struct TYPE_4__ {int * from; int to; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,TYPE_1__*) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (char*,int,TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(char *VAR_4, vfs_t **VAR_5)
{
 vfs_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof (vfs_t), VAR_1);

 if (VAR_4 != ((void*)0)) {
  substring_t VAR_8[VAR_2];
  char *VAR_9, *VAR_10, *VAR_11;
  int VAR_12;

  VAR_9 = VAR_11 = FUNC_1(VAR_4);
  if (VAR_9 == ((void*)0))
   return (FUNC_0(VAR_0));

  while ((VAR_10 = FUNC_5(&VAR_11, ",")) != ((void*)0)) {
   if (!*VAR_10)
    continue;

   VAR_8[0].to = *(VAR_8[0].from = ((void*)0));
   VAR_12 = FUNC_4(VAR_10, VAR_3, VAR_8);
   VAR_7 = FUNC_6(VAR_10, VAR_12, VAR_8, VAR_6);
   if (VAR_7) {
    FUNC_2(VAR_9);
    FUNC_7(VAR_6);
    return (VAR_7);
   }
  }

  FUNC_2(VAR_9);
 }

 *VAR_5 = VAR_6;

 return (0);
}
