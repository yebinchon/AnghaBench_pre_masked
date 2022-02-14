
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvlist_prtctl {int dummy; } ;
struct nvlist_printops {int dummy; } ;
typedef struct nvlist_prtctl* nvlist_prtctl_t ;


 struct nvlist_printops* FUNC_0 (int,int) ;
 int FUNC_1 (struct nvlist_prtctl*) ;
 struct nvlist_prtctl* FUNC_2 (int) ;
 int FUNC_3 (int ,struct nvlist_prtctl*,struct nvlist_printops*) ;
 int VAR_0 ;

nvlist_prtctl_t
FUNC_4(void)
{
 struct nvlist_prtctl *VAR_1;
 struct nvlist_printops *VAR_2;

 if ((VAR_1 = FUNC_2(sizeof (*VAR_1))) == ((void*)0))
  return (((void*)0));

 if ((VAR_2 = FUNC_0(1, sizeof (*VAR_2))) == ((void*)0)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }

 FUNC_3(VAR_0, VAR_1, VAR_2);

 return (VAR_1);
}
