
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {scalar_t__ nalloc; scalar_t__ size; int * elem; scalar_t__ nelem; } ;



__attribute__((used)) static inline void
FUNC_0(struct array *VAR_0)
{
    VAR_0->nelem = 0;
    VAR_0->elem = ((void*)0);
    VAR_0->size = 0;
    VAR_0->nalloc = 0;
}
