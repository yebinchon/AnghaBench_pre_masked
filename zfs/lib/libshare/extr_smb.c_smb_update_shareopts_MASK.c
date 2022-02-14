
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
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(sa_share_impl_t VAR_6, const char *VAR_7,
    const char *VAR_8)
{
 char *VAR_9;
 boolean_t VAR_10 = VAR_0;
 char *VAR_11;

 if (!VAR_6)
  return (VAR_4);

 FUNC_0(VAR_6, VAR_5)->active =
     FUNC_4(VAR_6);

 VAR_11 = FUNC_0(VAR_6, VAR_5)->shareopts;

 if (FUNC_0(VAR_6, VAR_5)->active && VAR_11 != ((void*)0) &&
     FUNC_5(VAR_11, VAR_8) != 0) {
  VAR_10 = VAR_1;
  FUNC_2(VAR_6);
 }

 VAR_9 = FUNC_6(VAR_8);

 if (VAR_9 == ((void*)0))
  return (VAR_2);

 if (VAR_11 != ((void*)0))
  FUNC_1(VAR_11);

 FUNC_0(VAR_6, VAR_5)->shareopts = VAR_9;

 if (VAR_10)
  FUNC_3(VAR_6);

 return (VAR_3);
}
