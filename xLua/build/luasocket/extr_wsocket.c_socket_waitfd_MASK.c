
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int p_timeout ;
typedef int * p_socket ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int *,int *,struct timeval*) ;
 double FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(p_socket VAR_6, int VAR_7, p_timeout VAR_8) {
    int VAR_9;
    fd_set VAR_10, VAR_11, VAR_12, *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    struct timeval VAR_16, *VAR_17 = ((void*)0);
    double VAR_18;
    if (FUNC_6(VAR_8)) return VAR_2;
    if (VAR_7 & VAR_4) {
        FUNC_2(&VAR_10);
        FUNC_1(*VAR_6, &VAR_10);
        VAR_13 = &VAR_10;
    }
    if (VAR_7 & VAR_5) { FUNC_2(&VAR_11); FUNC_1(*VAR_6, &VAR_11); VAR_14 = &VAR_11; }
    if (VAR_7 & VAR_3) { FUNC_2(&VAR_12); FUNC_1(*VAR_6, &VAR_12); VAR_15 = &VAR_12; }
    if ((VAR_18 = FUNC_5(VAR_8)) >= 0.0) {
        VAR_16.tv_sec = (int) VAR_18;
        VAR_16.tv_usec = (int) ((VAR_18-VAR_16.tv_sec)*1.0e6);
        VAR_17 = &VAR_16;
    }
    VAR_9 = FUNC_4(0, VAR_13, VAR_14, VAR_15, VAR_17);
    if (VAR_9 == -1) return FUNC_3();
    if (VAR_9 == 0) return VAR_2;
    if (VAR_7 == VAR_3 && FUNC_0(*VAR_6, &VAR_12)) return VAR_0;
    return VAR_1;
}
