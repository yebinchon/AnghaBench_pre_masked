
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {int size; int width; char* data; } ;



__attribute__((used)) static int
FUNC_0(const struct utf8_data *VAR_0)
{
 if (VAR_0->size != 1 || VAR_0->width != 1)
  return (0);
 return (*VAR_0->data == ' ');
}
