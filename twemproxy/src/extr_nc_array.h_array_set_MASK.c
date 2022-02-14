
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct array {size_t size; int nalloc; void* elem; scalar_t__ nelem; } ;



__attribute__((used)) static inline void
FUNC_0(struct array *VAR_0, void *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
    VAR_0->nelem = 0;
    VAR_0->elem = VAR_1;
    VAR_0->size = VAR_2;
    VAR_0->nalloc = VAR_3;
}
