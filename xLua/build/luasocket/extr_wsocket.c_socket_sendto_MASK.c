
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
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*,int,int ,int *,int ) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

int FUNC_3(p_socket VAR_5, const char *VAR_6, size_t VAR_7, size_t *VAR_8,
        SA *VAR_9, socklen_t VAR_10, p_timeout VAR_11)
{
    int VAR_12;
    *VAR_8 = 0;
    if (*VAR_5 == VAR_2) return VAR_0;
    for ( ;; ) {
        int VAR_13 = FUNC_1(*VAR_5, VAR_6, (int) VAR_7, 0, VAR_9, VAR_10);
        if (VAR_13 > 0) {
            *VAR_8 = VAR_13;
            return VAR_1;
        }
        VAR_12 = FUNC_0();
        if (VAR_12 != VAR_4) return VAR_12;
        if ((VAR_12 = FUNC_2(VAR_5, VAR_3, VAR_11)) != VAR_1) return VAR_12;
    }
}
