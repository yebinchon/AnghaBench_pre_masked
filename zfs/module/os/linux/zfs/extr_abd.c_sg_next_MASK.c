
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ end; } ;



__attribute__((used)) static inline struct scatterlist *
FUNC_0(struct scatterlist *VAR_0)
{
 if (VAR_0->end)
  return (((void*)0));

 return (VAR_0 + 1);
}
