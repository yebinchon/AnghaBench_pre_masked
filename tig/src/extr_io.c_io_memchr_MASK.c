
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {char* data; int size; } ;


 char* FUNC_0 (char*,int,int) ;

char *
FUNC_1(struct buffer *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3;

 if (!VAR_0 || VAR_1 < VAR_0->data || VAR_0->data + VAR_0->size <= VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0->size - (VAR_1 - VAR_0->data));
 return VAR_3 ? VAR_3 + 1 : ((void*)0);
}
