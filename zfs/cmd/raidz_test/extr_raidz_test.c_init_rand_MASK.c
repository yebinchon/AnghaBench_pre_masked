
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, size_t VAR_2, void *VAR_3)
{
 int VAR_4;
 int *VAR_5 = (int *)VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2 / sizeof (int); VAR_4++)
  VAR_5[VAR_4] = VAR_0[VAR_4];

 return (0);
}
