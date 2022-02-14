
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* buf; size_t size; } ;
typedef TYPE_1__ Extent ;


 int FUNC_0 (char*,TYPE_1__*,size_t,unsigned char*,void*,size_t) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Extent *VAR_0, void *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3=VAR_0->buf, *VAR_4=VAR_1;
    size_t VAR_5;
    FUNC_0("xread %%p(%%x %%p) %%p %%x\\n", VAR_0, VAR_0->size, VAR_0->buf, VAR_1, VAR_2);
    if (VAR_0->size < VAR_2) {
        FUNC_0("xreadfail %%p(%%x %%p) %%p %%x\\n",
            VAR_0, VAR_0->size, VAR_0->buf, VAR_1, VAR_2);
        FUNC_1(127);
    }
    for (VAR_5 = VAR_2; 0!=VAR_5--; ++VAR_3, ++VAR_4) {
        *VAR_4 = *VAR_3;
    }
    VAR_0->buf += VAR_2;
    VAR_0->size -= VAR_2;
}
