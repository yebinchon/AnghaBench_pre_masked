
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_arg {char* arg_buf; } ;


 int FUNC_0 (void*,char*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 int VAR_3;
 struct buf_arg *VAR_4 = VAR_2;

 VAR_3 = FUNC_0(VAR_0, VAR_4->arg_buf, VAR_1);
 VAR_4->arg_buf = (char *)VAR_4->arg_buf + VAR_1;

 return (VAR_3);
}
