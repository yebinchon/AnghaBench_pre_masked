
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
 int FUNC_1 (scalar_t__,char*,int,int ,int *,int *) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

int FUNC_3(p_socket VAR_6, char *VAR_7, size_t VAR_8, size_t *VAR_9,
        SA *VAR_10, socklen_t *VAR_11, p_timeout VAR_12)
{
    int VAR_13, VAR_14 = VAR_1;
    *VAR_9 = 0;
    if (*VAR_6 == VAR_2) return VAR_0;
    for ( ;; ) {
        int VAR_15 = FUNC_1(*VAR_6, VAR_7, (int) VAR_8, 0, VAR_10, VAR_11);
        if (VAR_15 > 0) {
            *VAR_9 = VAR_15;
            return VAR_1;
        }
        if (VAR_15 == 0) return VAR_0;
        VAR_13 = FUNC_0();




        if (VAR_13 != VAR_5) {
            if (VAR_13 != VAR_4 || VAR_14 == VAR_4) return VAR_13;
            VAR_14 = VAR_13;
        }
        if ((VAR_13 = FUNC_2(VAR_6, VAR_3, VAR_12)) != VAR_1) return VAR_13;
    }
}
