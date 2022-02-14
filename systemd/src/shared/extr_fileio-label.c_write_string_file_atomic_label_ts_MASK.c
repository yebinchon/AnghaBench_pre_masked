
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,char const*,int,struct timespec*) ;

int FUNC_3(const char *VAR_3, const char *VAR_4, struct timespec *VAR_5) {
        int VAR_6;

        VAR_6 = FUNC_1(VAR_3, VAR_0);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_2|VAR_1, VAR_5);

        FUNC_0();

        return VAR_6;
}
