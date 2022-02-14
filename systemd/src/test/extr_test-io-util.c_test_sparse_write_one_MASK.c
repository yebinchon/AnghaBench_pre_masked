
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char*,size_t) ;
 scalar_t__ FUNC_4 (int,char*,size_t) ;
 scalar_t__ FUNC_5 (int,char const*,size_t,int) ;

__attribute__((used)) static void FUNC_6(int VAR_2, const char *VAR_3, size_t VAR_4) {
        char VAR_5[VAR_4];

        FUNC_0(FUNC_2(VAR_2, 0, VAR_1) == 0);
        FUNC_0(FUNC_1(VAR_2, 0) >= 0);
        FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_4, 4) == (ssize_t) VAR_4);

        FUNC_0(FUNC_2(VAR_2, 0, VAR_0) == (off_t) VAR_4);
        FUNC_0(FUNC_1(VAR_2, VAR_4) >= 0);

        FUNC_0(FUNC_2(VAR_2, 0, VAR_1) == 0);
        FUNC_0(FUNC_4(VAR_2, VAR_5, VAR_4) == (ssize_t) VAR_4);

        FUNC_0(FUNC_3(VAR_3, VAR_5, VAR_4) == 0);
}
