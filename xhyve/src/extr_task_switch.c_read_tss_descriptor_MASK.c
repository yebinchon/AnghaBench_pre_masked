
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vm_guest_paging {scalar_t__ cpl; } ;
struct vm_task_switch {scalar_t__ reason; struct vm_guest_paging paging; int ext; } ;
struct user_segment_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int,struct vm_guest_paging*,int ,struct user_segment_descriptor*,int*) ;
 int FUNC_5 (int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, struct vm_task_switch *VAR_4, uint16_t VAR_5,
 struct user_segment_descriptor *VAR_6, int *VAR_7)
{
 struct vm_guest_paging VAR_8;
 int VAR_9;

 FUNC_2(!FUNC_1(VAR_5));
 FUNC_2(FUNC_0(VAR_5) != 0);


 if (FUNC_3(VAR_3, VAR_5)) {
  if (VAR_4->reason == VAR_2)
   FUNC_5(VAR_3, VAR_1, VAR_5, VAR_4->ext);
  else
   FUNC_5(VAR_3, VAR_0, VAR_5, VAR_4->ext);
  return (1);
 }

 VAR_8 = VAR_4->paging;
 VAR_8.cpl = 0;
 VAR_9 = FUNC_4(VAR_3, &VAR_8, VAR_5, VAR_6, VAR_7);
 return (VAR_9);
}
