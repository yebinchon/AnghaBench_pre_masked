
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void) {

        FUNC_0("", VAR_0, "");
        FUNC_0("", VAR_1, "");
        FUNC_0("\\", VAR_0, "\"\\\\\"");
        FUNC_0("\\", VAR_1, "$'\\\\'");
        FUNC_0("\"", VAR_0, "\"\\\"\"");
        FUNC_0("\"", VAR_1, "$'\"'");
        FUNC_0("foobar", VAR_0, "foobar");
        FUNC_0("foobar", VAR_1, "foobar");
        FUNC_0("foo bar", VAR_0, "\"foo bar\"");
        FUNC_0("foo bar", VAR_1, "$'foo bar'");
        FUNC_0("foo\tbar", VAR_0, "\"foo\tbar\"");
        FUNC_0("foo\tbar", VAR_1, "$'foo\\tbar'");
        FUNC_0("foo\nbar", VAR_0, "\"foo\nbar\"");
        FUNC_0("foo\nbar", VAR_1, "$'foo\\nbar'");
        FUNC_0("foo \"bar\" waldo", VAR_0, "\"foo \\\"bar\\\" waldo\"");
        FUNC_0("foo \"bar\" waldo", VAR_1, "$'foo \"bar\" waldo'");
        FUNC_0("foo$bar", VAR_0, "\"foo\\$bar\"");
        FUNC_0("foo$bar", VAR_1, "$'foo$bar'");




        FUNC_0("a\nb\001", VAR_0, "\"a\nb\001\"");
        FUNC_0("a\nb\001", VAR_1, "$'a\\nb\001'");

        FUNC_0("foo!bar", VAR_0, "\"foo!bar\"");
        FUNC_0("foo!bar", VAR_1, "$'foo!bar'");
}
