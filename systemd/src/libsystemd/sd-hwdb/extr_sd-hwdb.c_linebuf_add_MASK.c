
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linebuf {size_t len; scalar_t__ bytes; } ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static bool FUNC_1(struct linebuf *VAR_0, const char *VAR_1, size_t VAR_2) {
        if (VAR_0->len + VAR_2 >= sizeof(VAR_0->bytes))
                return 0;
        FUNC_0(VAR_0->bytes + VAR_0->len, VAR_1, VAR_2);
        VAR_0->len += VAR_2;
        return 1;
}
