
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sa_share_impl_t ;
struct TYPE_2__ {char* shareopts; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(sa_share_impl_t VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7;

 if (!FUNC_4()) {
  return (VAR_1);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3)->shareopts;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_3(VAR_5, &VAR_6);

 if (VAR_7 != VAR_0)
  return (VAR_7);

 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_6);

 FUNC_2(VAR_6);

 return (VAR_7);
}
