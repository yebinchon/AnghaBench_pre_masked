
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_table_entry {scalar_t__ ch; int interm; } ;
struct input_ctx {scalar_t__ ch; int interm_buf; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct input_ctx *VAR_2 = VAR_0;
 const struct input_table_entry *VAR_3 = VAR_1;

 if (VAR_2->ch != VAR_3->ch)
  return (VAR_2->ch - VAR_3->ch);
 return (FUNC_0(VAR_2->interm_buf, VAR_3->interm));
}
