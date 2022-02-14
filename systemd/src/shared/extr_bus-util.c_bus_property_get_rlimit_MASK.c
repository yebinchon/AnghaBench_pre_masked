
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef scalar_t__ rlim_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,struct rlimit*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int ) ;
 char const* FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*,char*) ;

int FUNC_8(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        const char *VAR_8;
        struct rlimit *VAR_9;
        uint64_t VAR_10;
        rlim_t VAR_11;

        FUNC_0(*VAR_1);
        FUNC_0(*VAR_5);
        FUNC_0(VAR_6);

        VAR_8 = FUNC_2(VAR_4, "Soft");

        VAR_9 = *(struct rlimit**) VAR_6;
        if (VAR_9)
                VAR_11 = VAR_8 ? VAR_9->rlim_cur : VAR_9->rlim_max;
        else {
                struct rlimit VAR_12 = {};
                const char *VAR_13, *VAR_14;
                int VAR_15;


                VAR_13 = VAR_8 ? FUNC_6(VAR_4, VAR_8 - VAR_4) : VAR_4;


                FUNC_1(VAR_14 = FUNC_7(VAR_13, "Limit"));

                VAR_15 = FUNC_4(VAR_14 + 5);
                FUNC_0(VAR_15 >= 0);

                (void) FUNC_3(VAR_15, &VAR_12);
                VAR_11 = VAR_8 ? VAR_12.rlim_cur : VAR_12.rlim_max;
        }



        VAR_10 = VAR_11 == VAR_0 ? (uint64_t) -1 : (uint64_t) VAR_11;

        return FUNC_5(VAR_5, "t", VAR_10);
}
