
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* security; int (* callback ) (int ,char*,char const*,char const*,int ) ;int cookie; int sharepath; } ;
typedef TYPE_1__ nfs_host_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,char const*,int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 int VAR_6;
 const char *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 nfs_host_cookie_t *VAR_11 = (nfs_host_cookie_t *)VAR_5;





 if (FUNC_3(VAR_3, "sec") == 0)
  VAR_11->security = VAR_4;

 if (FUNC_3(VAR_3, "rw") == 0 || FUNC_3(VAR_3, "ro") == 0) {
  if (VAR_4 == ((void*)0))
   VAR_4 = "*";

  VAR_7 = VAR_3;

  VAR_8 = FUNC_4(VAR_4);

  if (VAR_8 == ((void*)0))
   return (VAR_0);

  VAR_9 = VAR_8;

  do {
   VAR_10 = FUNC_2(VAR_9, ':');
   if (VAR_10 != ((void*)0)) {
    *VAR_10 = '\0';
    VAR_10++;
   }

   VAR_6 = VAR_11->callback(VAR_11->sharepath, VAR_9,
       VAR_11->security, VAR_7, VAR_11->cookie);

   if (VAR_6 != VAR_1) {
    FUNC_1(VAR_8);

    return (VAR_6);
   }

   VAR_9 = VAR_10;
  } while (VAR_9 != ((void*)0));

  FUNC_1(VAR_8);
 }

 return (VAR_1);
}
