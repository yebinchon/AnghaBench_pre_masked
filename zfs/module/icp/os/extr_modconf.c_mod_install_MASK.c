
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modlmisc {int dummy; } ;
struct modlinkage {scalar_t__ ml_rev; int * ml_linkage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct modlmisc*,struct modlinkage*) ;
 int FUNC_1 (struct modlmisc*,struct modlinkage*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct modlinkage *VAR_3)
{
 int VAR_4 = -1;
 struct modlmisc **VAR_5;
 struct modlmisc **VAR_6;

 if (VAR_3->ml_rev != VAR_2) {
  FUNC_2(VAR_0, "mod_install: "
      "modlinkage structure is not MODREV_1\n");
  return (VAR_1);
 }
 VAR_5 = (struct modlmisc **)&VAR_3->ml_linkage[0];

 while (*VAR_5 != ((void*)0)) {
  if ((VAR_4 = FUNC_0(*VAR_5, VAR_3)) != 0) {
   VAR_6 = (struct modlmisc **)&VAR_3->ml_linkage[0];

   while (VAR_6 != VAR_5) {
    FUNC_1(*VAR_6, VAR_3);
    VAR_6++;
   }
   break;
  }
  VAR_5++;
 }
 return (VAR_4);
}
