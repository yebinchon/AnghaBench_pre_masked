
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct basl_fio {int dummy; } ;


 int FUNC_0 (struct basl_fio*) ;
 int FUNC_1 (struct basl_fio*,int) ;

__attribute__((used)) static int
FUNC_2(struct basl_fio *VAR_0, struct basl_fio *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0);
 if (!VAR_2) {
  VAR_2 = FUNC_1(VAR_1, 1);
  if (VAR_2) {
   FUNC_0(VAR_0);
  }
 }

 return (VAR_2);
}
