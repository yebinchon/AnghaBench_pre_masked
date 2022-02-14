
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,char*,int,int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(void) {
        FUNC_1(FUNC_2("unit", VAR_3, "filename", 10, VAR_0, "EINVAL: %s: %m", "hogehoge") == -VAR_0);
        FUNC_1(FUNC_2("unit", VAR_3, "filename", 10, -VAR_1, "ENOENT: %s: %m", "hogehoge") == -VAR_1);
        FUNC_1(FUNC_2("unit", VAR_3, "filename", 10, FUNC_0(VAR_2), "ENOTTY: %s: %m", "hogehoge") == -VAR_2);
}
