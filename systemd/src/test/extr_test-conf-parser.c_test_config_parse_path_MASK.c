
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("/path", "/path");
        FUNC_0("/path//////////", "/path");
        FUNC_0("///path/foo///bar////bar//", "/path/foo/bar/bar");
        FUNC_0("/path//./////hogehoge///.", "/path/hogehoge");
        FUNC_0("/path/\xc3\x80", "/path/\xc3\x80");

        FUNC_0("not_absolute/path", ((void*)0));
        FUNC_0("/path/\xc3\x7f", ((void*)0));
}
