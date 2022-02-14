
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,...) ;

int FUNC_1(int VAR_7, char *VAR_8[]) {

        FUNC_0("", VAR_2);

        FUNC_0("<foo></foo>",
                 VAR_5, "foo",
                 VAR_3, "foo",
                 VAR_2);

        FUNC_0("<foo waldo=piep meh=\"huhu\"/>",
                 VAR_5, "foo",
                 VAR_0, "waldo",
                 VAR_1, "piep",
                 VAR_0, "meh",
                 VAR_1, "huhu",
                 VAR_4, ((void*)0),
                 VAR_2);

        FUNC_0("xxxx\n"
                 "<foo><?xml foo?>     <!-- zzzz -->  </foo>",
                 VAR_6, "xxxx\n",
                 VAR_5, "foo",
                 VAR_6, "     ",
                 VAR_6, "  ",
                 VAR_3, "foo",
                 VAR_2);

        return 0;
}
