
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct utsname {char* release; } ;
struct utmpx {int ut_id; int ut_line; int ut_host; } ;


 int FUNC_0 (struct utmpx*) ;
 int FUNC_1 (struct utmpx*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct utsname*) ;

__attribute__((used)) static void FUNC_4(struct utmpx *VAR_0, usec_t VAR_1) {
        struct utsname VAR_2 = {};

        FUNC_0(VAR_0);

        FUNC_1(VAR_0, VAR_1);

        if (FUNC_3(&VAR_2) >= 0)
                FUNC_2(VAR_0->ut_host, VAR_2.release, sizeof(VAR_0->ut_host));

        FUNC_2(VAR_0->ut_line, "~", sizeof(VAR_0->ut_line));
        FUNC_2(VAR_0->ut_id, "~~", sizeof(VAR_0->ut_id));
}
