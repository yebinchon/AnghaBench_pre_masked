
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modspecific_info {char* msi_linkinfo; int msi_p0; } ;
struct modlmisc {int misc_linkinfo; } ;
struct modlinkage {scalar_t__ ml_linkage; int ml_rev; } ;
struct modinfo {scalar_t__ mi_info; void* mi_base; struct modspecific_info* mi_msinfo; int mi_rev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct modlmisc*,struct modlinkage*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;

int
FUNC_2(struct modlinkage *VAR_3, struct modinfo *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 struct modspecific_info *VAR_7;
 struct modlmisc **VAR_8;

 VAR_4->mi_rev = VAR_3->ml_rev;

 VAR_8 = (struct modlmisc **)VAR_3->ml_linkage;
 VAR_7 = &VAR_4->mi_msinfo[0];

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (*VAR_8 == ((void*)0)) {
   VAR_7->msi_linkinfo[0] = '\0';
  } else {
   (void) FUNC_1(VAR_7->msi_linkinfo,
       (*VAR_8)->misc_linkinfo, VAR_2);
   VAR_6 = FUNC_0(*VAR_8, VAR_3, &VAR_7->msi_p0);
   if (VAR_6 != 0)
    break;
   VAR_8++;
  }
  VAR_7++;
 }

 if (VAR_4->mi_info == VAR_0) {





  VAR_4->mi_base = (void *)VAR_3;
 }

 if (VAR_6 == 0)
  return (1);
 return (0);
}
