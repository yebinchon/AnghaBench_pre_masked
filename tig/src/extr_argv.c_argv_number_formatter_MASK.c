
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_var {scalar_t__ value_ref; } ;
struct format_context {int bufpos; int buf; } ;


 int FUNC_0 (int ,int *,char*,unsigned long) ;

__attribute__((used)) static bool
FUNC_1(struct format_context *VAR_0, struct format_var *VAR_1)
{
 unsigned long VAR_2 = *(unsigned long *) VAR_1->value_ref;

 return FUNC_0(VAR_0->buf, &VAR_0->bufpos, "%ld", VAR_2);
}
