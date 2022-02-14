
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_timeout ;
typedef scalar_t__ t_socket ;
typedef int lua_State ;
typedef int fd_set ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int,int,int *) ;
 int FUNC_2 (int *,int,int,int *,scalar_t__*) ;
 int FUNC_3 (int *,char*) ;
 double FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,scalar_t__,int,int,int) ;
 int FUNC_11 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_12 (int *,double,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_1) {
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    t_socket VAR_7 = VAR_0;
    fd_set VAR_8, VAR_9;
    t_timeout VAR_10;
    double VAR_11 = FUNC_4(VAR_1, 3, -1);
    FUNC_0(&VAR_8); FUNC_0(&VAR_9);
    FUNC_8(VAR_1, 3);
    FUNC_6(VAR_1); VAR_4 = FUNC_5(VAR_1);
    FUNC_6(VAR_1); VAR_2 = FUNC_5(VAR_1);
    FUNC_6(VAR_1); VAR_3 = FUNC_5(VAR_1);
    FUNC_2(VAR_1, 1, VAR_4, &VAR_8, &VAR_7);
    FUNC_2(VAR_1, 2, VAR_4, &VAR_9, &VAR_7);
    VAR_6 = FUNC_1(VAR_1, 1, VAR_2, &VAR_8);
    VAR_11 = VAR_6 > 0? 0.0: VAR_11;
    FUNC_12(&VAR_10, VAR_11, -1);
    FUNC_13(&VAR_10);
    VAR_5 = FUNC_11(VAR_7+1, &VAR_8, &VAR_9, ((void*)0), &VAR_10);
    if (VAR_5 > 0 || VAR_6 > 0) {
        FUNC_10(VAR_1, &VAR_8, VAR_7+1, VAR_4, VAR_2, VAR_6);
        FUNC_10(VAR_1, &VAR_9, VAR_7+1, VAR_4, VAR_3, 0);
        FUNC_9(VAR_1, VAR_2);
        FUNC_9(VAR_1, VAR_3);
        return 2;
    } else if (VAR_5 == 0) {
        FUNC_7(VAR_1, "timeout");
        return 3;
    } else {
        FUNC_3(VAR_1, "select failed");
        return 3;
    }
}
