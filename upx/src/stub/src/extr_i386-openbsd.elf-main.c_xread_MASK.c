
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Extent {char* buf; size_t size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void



FUNC_3(struct Extent *VAR_0, char *VAR_1, size_t VAR_2)
{
    char *VAR_3=VAR_0->buf, *VAR_4=VAR_1;
    size_t VAR_5;
    FUNC_0((FUNC_1(), VAR_0, VAR_0->size, VAR_0->buf, VAR_1, VAR_2));
    if (VAR_0->size < VAR_2) {
        FUNC_2(127);
    }
    for (VAR_5 = VAR_2; 0!=VAR_5--; ++VAR_3, ++VAR_4) {
        *VAR_4 = *VAR_3;
    }
    VAR_0->buf += VAR_2;
    VAR_0->size -= VAR_2;
}
