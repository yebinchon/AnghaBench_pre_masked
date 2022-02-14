
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linebuf {int len; char* bytes; } ;



__attribute__((used)) static bool FUNC_0(struct linebuf *VAR_0, char VAR_1) {
        if (VAR_0->len + 1 >= sizeof(VAR_0->bytes))
                return 0;
        VAR_0->bytes[VAR_0->len++] = VAR_1;
        return 1;
}
