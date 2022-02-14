
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_3__ {int td_flags; int * td_resume; } ;
typedef TYPE_1__ traverse_data_t ;
typedef int resume_skip_t ;
typedef int dnode_phys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int const*,int const*,int *) ;

__attribute__((used)) static resume_skip_t
FUNC_4(traverse_data_t *VAR_4, const dnode_phys_t *VAR_5,
    const zbookmark_phys_t *VAR_6)
{
 if (VAR_4->td_resume != ((void*)0) && !FUNC_0(VAR_4->td_resume)) {




  if (FUNC_3(VAR_5, VAR_6, VAR_4->td_resume))
   return (VAR_0);





  if (FUNC_1(VAR_6, VAR_4->td_resume, sizeof (*VAR_6)) == 0) {
   FUNC_2(VAR_4->td_resume, sizeof (*VAR_6));
   if (VAR_4->td_flags & VAR_3)
    return (VAR_1);
  }
 }
 return (VAR_2);
}
