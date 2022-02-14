
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("test"));

        FUNC_0(!FUNC_1(((void*)0)));
        FUNC_0(!FUNC_1(""));
        FUNC_0(!FUNC_1("xxx\a"));
        FUNC_0(!FUNC_1("xxx\007b"));
        FUNC_0(!FUNC_1("\007\009"));
        FUNC_0(!FUNC_1("5_starting_with_a_number_is_wrong"));
        FUNC_0(!FUNC_1("#¤%&?_only_numbers_letters_and_underscore_allowed"));
}
