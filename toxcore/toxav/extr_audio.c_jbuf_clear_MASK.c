
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct JitterBuffer {size_t bottom; size_t top; size_t size; int ** queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct JitterBuffer *VAR_0)
{
    for (; VAR_0->bottom != VAR_0->top; ++VAR_0->bottom) {
        if (VAR_0->queue[VAR_0->bottom % VAR_0->size]) {
            FUNC_0(VAR_0->queue[VAR_0->bottom % VAR_0->size]);
            VAR_0->queue[VAR_0->bottom % VAR_0->size] = ((void*)0);
        }
    }
}
