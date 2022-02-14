
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int p_timeout ;
typedef scalar_t__* p_socket ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

int FUNC_3(p_socket VAR_6, p_socket VAR_7, SA *VAR_8, socklen_t *VAR_9,
        p_timeout VAR_10) {
    if (*VAR_6 == VAR_2) return VAR_0;
    for ( ;; ) {
        int VAR_11;

        if ((*VAR_7 = FUNC_1(*VAR_6, VAR_8, VAR_9)) != VAR_2) return VAR_1;

        VAR_11 = FUNC_0();

        if (VAR_11 != VAR_5 && VAR_11 != VAR_4) return VAR_11;

        if ((VAR_11 = FUNC_2(VAR_6, VAR_3, VAR_10)) != VAR_1) return VAR_11;
    }
}
