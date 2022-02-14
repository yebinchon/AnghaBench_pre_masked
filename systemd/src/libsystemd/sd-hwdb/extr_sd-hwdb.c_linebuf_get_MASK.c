
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linebuf {int len; char* bytes; } ;



__attribute__((used)) static const char *FUNC_0(struct linebuf *VAR_0) {
        if (VAR_0->len + 1 >= sizeof(VAR_0->bytes))
                return ((void*)0);
        VAR_0->bytes[VAR_0->len] = '\0';
        return VAR_0->bytes;
}
