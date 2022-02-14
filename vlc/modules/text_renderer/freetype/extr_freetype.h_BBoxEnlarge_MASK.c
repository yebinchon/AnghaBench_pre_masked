
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* yMax; void* xMax; void* yMin; void* xMin; } ;
typedef TYPE_1__ FT_BBox ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;

__attribute__((used)) static inline void FUNC_2( FT_BBox *VAR_0, const FT_BBox *VAR_1 )
{
    VAR_0->xMin = FUNC_1(VAR_0->xMin, VAR_1->xMin);
    VAR_0->yMin = FUNC_1(VAR_0->yMin, VAR_1->yMin);
    VAR_0->xMax = FUNC_0(VAR_0->xMax, VAR_1->xMax);
    VAR_0->yMax = FUNC_0(VAR_0->yMax, VAR_1->yMax);
}
