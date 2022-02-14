
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {size_t input_space; int input_len; char* input_buf; char ch; int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct input_ctx *VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_2->input_space;
 while (VAR_2->input_len + 1 >= VAR_3) {
  VAR_3 *= 2;
  if (VAR_3 > VAR_0) {
   VAR_2->flags |= VAR_1;
   return (0);
  }
  VAR_2->input_buf = FUNC_0(VAR_2->input_buf, VAR_3);
  VAR_2->input_space = VAR_3;
 }
 VAR_2->input_buf[VAR_2->input_len++] = VAR_2->ch;
 VAR_2->input_buf[VAR_2->input_len] = '\0';

 return (0);
}
