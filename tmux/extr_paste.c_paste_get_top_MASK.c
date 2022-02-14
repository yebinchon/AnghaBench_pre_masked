
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {char* name; } ;


 struct paste_buffer* FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

struct paste_buffer *
FUNC_1(const char **VAR_2)
{
 struct paste_buffer *VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->name;
 return (VAR_3);
}
