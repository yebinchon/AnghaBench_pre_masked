
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modlmisc {int misc_linkinfo; } ;
struct modlinkage {int * ml_linkage; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct modlmisc*,struct modlinkage*) ;
 int FUNC_1 (struct modlmisc*,struct modlinkage*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;

int
FUNC_3(struct modlinkage *VAR_2)
{
 int VAR_3 = 0;
 struct modlmisc **VAR_4, *VAR_5;

 VAR_4 = (struct modlmisc **)&VAR_2->ml_linkage[0];

 while (*VAR_4 != ((void*)0)) {
  if ((VAR_3 = FUNC_1(*VAR_4, VAR_2)) != 0) {
   VAR_5 = *VAR_4;
   VAR_4 = (struct modlmisc **)&VAR_2->ml_linkage[0];
   while (*VAR_4 != VAR_5) {
    if (FUNC_0(*VAR_4, VAR_2) != 0) {
     FUNC_2(VAR_0, VAR_1,
         (*VAR_4)->misc_linkinfo);
     break;
    }
    VAR_4++;
   }
   break;
  }
  VAR_4++;
 }
 return (VAR_3);
}
