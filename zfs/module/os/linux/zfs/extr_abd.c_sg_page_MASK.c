
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {struct page* page; } ;
struct page {int dummy; } ;



__attribute__((used)) static inline struct page *
FUNC_0(struct scatterlist *VAR_0)
{
 return (VAR_0->page);
}
