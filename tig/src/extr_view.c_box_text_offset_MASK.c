
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct box {int * cell; } ;



__attribute__((used)) static inline char *
FUNC_0(struct box *VAR_0, size_t VAR_1)
{
 return (char *) &VAR_0->cell[VAR_1];
}
