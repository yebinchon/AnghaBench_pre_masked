
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linebuf {size_t len; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct linebuf *VAR_0, size_t VAR_1) {
        FUNC_0(VAR_0->len >= VAR_1);
        VAR_0->len -= VAR_1;
}
