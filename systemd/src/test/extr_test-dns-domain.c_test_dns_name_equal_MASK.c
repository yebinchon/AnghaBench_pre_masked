
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("", "", 1);
        FUNC_0("x", "x", 1);
        FUNC_0("x", "x.", 1);
        FUNC_0("abc.def", "abc.def", 1);
        FUNC_0("abc.def", "ABC.def", 1);
        FUNC_0("abc.def", "CBA.def", 0);
        FUNC_0("", "xxx", 0);
        FUNC_0("ab", "a", 0);
        FUNC_0("\\000", "\\000", 1);
        FUNC_0(".", "", 1);
        FUNC_0(".", ".", 1);
        FUNC_0("..", "..", -VAR_0);
}
