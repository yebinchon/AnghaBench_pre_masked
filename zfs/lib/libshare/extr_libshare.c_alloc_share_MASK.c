
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sa_share_impl {int dummy; } ;
typedef TYPE_1__* sa_share_impl_t ;
typedef int sa_share_fsinfo_t ;
struct TYPE_5__ {struct TYPE_5__* sharepath; int * fsinfo; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (char const*) ;

__attribute__((used)) static sa_share_impl_t
FUNC_3(const char *VAR_1)
{
 sa_share_impl_t VAR_2;

 VAR_2 = FUNC_0(1, sizeof (struct sa_share_impl));

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->sharepath = FUNC_2(VAR_1);

 if (VAR_2->sharepath == ((void*)0)) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }

 VAR_2->fsinfo = FUNC_0(VAR_0, sizeof (sa_share_fsinfo_t));

 if (VAR_2->fsinfo == ((void*)0)) {
  FUNC_1(VAR_2->sharepath);
  FUNC_1(VAR_2);
  return (((void*)0));
 }

 return (VAR_2);
}
