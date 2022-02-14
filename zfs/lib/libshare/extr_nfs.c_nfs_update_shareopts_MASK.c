
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sa_share_impl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char* shareopts; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(sa_share_impl_t VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 char *VAR_8;
 boolean_t VAR_9 = VAR_0;
 char *VAR_10;

 FUNC_0(VAR_5, VAR_4)->active =
     FUNC_4(VAR_5);

 VAR_10 = FUNC_0(VAR_5, VAR_4)->shareopts;

 if (FUNC_5(VAR_7, "on") == 0)
  VAR_7 = "rw,crossmnt";

 if (FUNC_0(VAR_5, VAR_4)->active && VAR_10 != ((void*)0) &&
     FUNC_5(VAR_10, VAR_7) != 0) {
  VAR_9 = VAR_1;
  FUNC_2(VAR_5);
 }

 VAR_8 = FUNC_6(VAR_7);

 if (VAR_8 == ((void*)0))
  return (VAR_2);

 if (VAR_10 != ((void*)0))
  FUNC_1(VAR_10);

 FUNC_0(VAR_5, VAR_4)->shareopts = VAR_8;

 if (VAR_9)
  FUNC_3(VAR_5);

 return (VAR_3);
}
