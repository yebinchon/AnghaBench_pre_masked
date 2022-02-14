
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,int) ;

int FUNC_4 (void)
{
    (void)FUNC_0 (VAR_1, ((void*)0), VAR_0, 0);


    FUNC_3("", 0, 0);
    FUNC_3("\n", 1, '\n');
    FUNC_3("\x7F", 1, 0x7F);
    FUNC_3("\xC3\xA9", 2, 0xE9);
    FUNC_3("\xDF\xBF", 2, 0x7FF);
    FUNC_3("\xE2\x82\xAC", 3, 0x20AC);
    FUNC_3("\xEF\xBF\xBF", 3, 0xFFFF);
    FUNC_3("\xF0\x90\x80\x81", 4, 0x10001);
    FUNC_3("\xF4\x80\x80\x81", 4, 0x100001);
    FUNC_3("\xF4\x8F\xBF\xBF", 4, 0x10FFFF);

    FUNC_3("\xC0\x80", -1, 0);
    FUNC_3("\xC1\xBF", -1, 0x7F);
    FUNC_3("\xE0\x80\x80", -1, 0);
    FUNC_3("\xE0\x9F\xBF", -1, 0x7FF);
    FUNC_3("\xF0\x80\x80\x80", -1, 0);
    FUNC_3("\xF0\x8F\xBF\xBF", -1, 0xFFFF);

    FUNC_3("\xF4\x90\x80\x80", -1, 0x110000);
    FUNC_3("\xF7\xBF\xBF\xBF", -1, 0x1FFFFF);

    FUNC_3("\xED\x9F\xBF", 3, 0xD7FF);
    FUNC_3("\xED\xA0\x80", -1, 0xD800);
    FUNC_3("\xED\xBF\xBF", -1, 0xDFFF);
    FUNC_3("\xEE\x80\x80", 3, 0xE000);

    FUNC_3("\x80", -1, 0);
    FUNC_3("\xBF", -1, 0);

    FUNC_3("\xDF", -1, 0x7FF);
    FUNC_3("\xEF", -1, 0xFFFF);
    FUNC_3("\xF4", -1, 0x10FFFF);
    FUNC_3("\xEF\xBF", -1, 0xFFFF);
    FUNC_3("\xF4\xBF\xBF", -1, 0x10FFFF);

    FUNC_1 ("", "");
    FUNC_1 ("this_should_not_be_modified_1234",
          "this_should_not_be_modified_1234");

    FUNC_1 ("\xFF", "?");
    FUNC_1 ("\xEF\xBB\xBFHello", "\xEF\xBB\xBFHello");
    FUNC_1 ("\x00\xE9", "");

    FUNC_1 ("T\xC3\xA9l\xC3\xA9vision \xE2\x82\xAC", "Télévision €");
    FUNC_1 ("T\xE9l\xE9vision", "T?l?vision");
    FUNC_1 ("\xC1\x94\xC3\xa9l\xC3\xA9vision", "??élévision");

    FUNC_1 ("Hel\xF0\x83\x85\x87lo", "Hel????lo");

    FUNC_2 ("", "", 0);
    FUNC_2 ("", "a", -1);
    FUNC_2 ("a", "", 0);
    FUNC_2 ("heLLo", "l", 2);
    FUNC_2 ("heLLo", "lo", 3);
    FUNC_2 ("heLLo", "llo", 2);
    FUNC_2 ("heLLo", "la", -1);
    FUNC_2 ("heLLo", "oa", -1);
    FUNC_2 ("Télé", "é", 1);
    FUNC_2 ("Télé", "élé", 1);
    FUNC_2 ("Télé", "léé", -1);

    return 0;
}
