
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void) {
        char VAR_0[40];

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 1, ""), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 1, "1"), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 1, "12"), ""));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, ""), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, "1"), "1"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, "12"), "."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, "123"), "."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, ""), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "1"), "1"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "12"), "12"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "123"), ".."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "1234"), ".."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, ""), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "1"), "1"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "12"), "12"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "123"), "123"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "1234"), FUNC_2() ? "…" : "..."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "12345"), FUNC_2() ? "…" : "..."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, ""), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "1"), "1"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "12"), "12"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "123"), "123"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "1234"), "1234"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "12345"), FUNC_2() ? "1…" : "1..."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "123456"), FUNC_2() ? "1…" : "1..."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 1, "\020"), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, "\020"), "."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "\020"), ".."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "\020"), "…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "\020"), "\\020"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "1234\020"), "1…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "1234\020"), "12…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 7, "1234\020"), "123…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 8, "1234\020"), "1234…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 9, "1234\020"), "1234\\020"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 1, "\t\n"), ""));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 2, "\t\n"), "."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 3, "\t\n"), ".."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "\t\n"), "…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "\t\n"), "\\t\\n"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "1234\t\n"), "1…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "1234\t\n"), "12…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 7, "1234\t\n"), "123…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 8, "1234\t\n"), "1234…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 9, "1234\t\n"), "1234\\t\\n"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 4, "x\t\020\n"), "…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 5, "x\t\020\n"), "x…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "x\t\020\n"), "x…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 7, "x\t\020\n"), "x\\t…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 8, "x\t\020\n"), "x\\t…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 9, "x\t\020\n"), "x\\t…"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 10, "x\t\020\n"), "x\\t\\020\\n"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "1\011"), "1\\t"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "1\020"), "1\\020"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "1\020x"), FUNC_2() ? "1…" : "1..."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 40, "1\020"), "1\\020"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 40, "1\020x"), "1\\020x"));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, 40, "\a\b\f\n\r\t\v\\\"'"), "\\a\\b\\f\\n\\r\\t\\v\\\\\\\"\\'"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 6, "\a\b\f\n\r\t\v\\\"'"), FUNC_2() ? "\\a…" : "\\a..."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 7, "\a\b\f\n\r\t\v\\\"'"), FUNC_2() ? "\\a…" : "\\a..."));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, 8, "\a\b\f\n\r\t\v\\\"'"), FUNC_2() ? "\\a\\b…" : "\\a\\b..."));

        FUNC_0(FUNC_3(FUNC_1(VAR_0, sizeof VAR_0, "1\020"), "1\\020"));
        FUNC_0(FUNC_3(FUNC_1(VAR_0, sizeof VAR_0, "1\020x"), "1\\020x"));
}
