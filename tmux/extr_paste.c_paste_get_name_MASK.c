
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {char* name; } ;


 struct paste_buffer* FUNC_0 (int ,int *,struct paste_buffer*) ;
 int VAR_0 ;
 int VAR_1 ;

struct paste_buffer *
FUNC_1(const char *VAR_2)
{
 struct paste_buffer VAR_3;

 if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
  return (((void*)0));

 VAR_3.name = (char *)VAR_2;
 return (FUNC_0(VAR_1, &VAR_0, &VAR_3));
}
