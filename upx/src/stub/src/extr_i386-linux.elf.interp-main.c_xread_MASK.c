
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Extent {char* buf; size_t size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void



FUNC_1(struct Extent *VAR_0, char *VAR_1, size_t VAR_2)
{
    char *VAR_3=VAR_0->buf, *VAR_4=VAR_1;
    size_t VAR_5;
    if (VAR_0->size < VAR_2) {
        FUNC_0(127);
    }
    for (VAR_5 = VAR_2; 0!=VAR_5--; ++VAR_3, ++VAR_4) {
        *VAR_4 = *VAR_3;
    }
    VAR_0->buf += VAR_2;
    VAR_0->size -= VAR_2;
}
