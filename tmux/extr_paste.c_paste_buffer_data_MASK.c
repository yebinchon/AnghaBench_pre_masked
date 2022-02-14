
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {size_t size; char const* data; } ;



const char *
FUNC_0(struct paste_buffer *VAR_0, size_t *VAR_1)
{
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_0->size;
 return (VAR_0->data);
}
