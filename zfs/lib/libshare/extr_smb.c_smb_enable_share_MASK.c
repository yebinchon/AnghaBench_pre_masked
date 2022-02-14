
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sa_share_impl_t ;
struct TYPE_6__ {char* shareopts; } ;
struct TYPE_5__ {int sharepath; int dataset; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(sa_share_impl_t VAR_3)
{
 char *VAR_4;

 if (!FUNC_1())
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_3, VAR_2)->shareopts;
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 if (FUNC_3(VAR_4, "off") == 0)
  return (VAR_0);


 return (FUNC_2(VAR_3->dataset,
     VAR_3->sharepath));
}
