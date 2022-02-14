
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int OutputFlags ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,char const*,size_t,int ) ;
 int FUNC_2 (char const*,char const*,char const*,size_t,int const*,unsigned int,int ) ;

int FUNC_3(
                const char *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                size_t VAR_3,
                const pid_t VAR_4[],
                unsigned VAR_5,
                OutputFlags VAR_6) {

        int VAR_7;

        FUNC_0(VAR_1);

        VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
