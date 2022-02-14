
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {int size; int width; int * data; } ;


 int * FUNC_0 (char const*,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const struct utf8_data *VAR_1)
{
 if (VAR_1->size != 1 || VAR_1->width != 1)
  return (0);
 return (FUNC_0(VAR_0, *VAR_1->data) != ((void*)0));
}
