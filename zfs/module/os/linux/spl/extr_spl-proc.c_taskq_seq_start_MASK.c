
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct list_head {struct list_head* next; } ;
typedef int loff_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (struct list_head*,int ,int ) ;
 int FUNC_2 (struct seq_file*) ;
 int VAR_0 ;
 struct list_head VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_3(struct seq_file *VAR_4, loff_t *VAR_5)
{
 struct list_head *VAR_6;
 loff_t VAR_7 = *VAR_5;

 FUNC_0(&VAR_2);
 if (!VAR_7)
  FUNC_2(VAR_4);

 VAR_6 = VAR_1.next;
 while (VAR_7--) {
  VAR_6 = VAR_6->next;
  if (VAR_6 == &VAR_1)
  return (((void*)0));
 }

 return (FUNC_1(VAR_6, VAR_0, VAR_3));
}
