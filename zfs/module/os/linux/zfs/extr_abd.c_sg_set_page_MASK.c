
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; struct page* page; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct scatterlist *VAR_0, struct page *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{

 FUNC_0(VAR_3 == 0);
 VAR_0->page = VAR_1;
 VAR_0->length = VAR_2;
}
