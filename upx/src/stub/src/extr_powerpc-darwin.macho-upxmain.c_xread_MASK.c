
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; size_t size; } ;
typedef TYPE_1__ Extent ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(Extent *VAR_0, void *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3=VAR_0->buf, *VAR_4=VAR_1;
    size_t VAR_5;
    FUNC_0((FUNC_1(), VAR_0, VAR_0->size, VAR_0->buf, VAR_1, VAR_2));
    if (VAR_0->size < VAR_2) {
        FUNC_0((FUNC_2(), VAR_0, VAR_0->size, VAR_0->buf, VAR_1, VAR_2));
        FUNC_3(127);
    }
    for (VAR_5 = VAR_2; 0!=VAR_5--; ++VAR_3, ++VAR_4) {
        *VAR_4 = *VAR_3;
    }
    VAR_0->buf += VAR_2;
    VAR_0->size -= VAR_2;
}
