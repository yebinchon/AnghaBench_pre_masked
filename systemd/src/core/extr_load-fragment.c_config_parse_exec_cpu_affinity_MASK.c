
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_set; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int *,int,char const*,char const*,unsigned int,char const*) ;

int FUNC_2(const char *VAR_0,
                                   const char *VAR_1,
                                   unsigned VAR_2,
                                   const char *VAR_3,
                                   unsigned VAR_4,
                                   const char *VAR_5,
                                   int VAR_6,
                                   const char *VAR_7,
                                   void *VAR_8,
                                   void *VAR_9) {

        ExecContext *VAR_10 = VAR_8;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);
        FUNC_0(VAR_7);
        FUNC_0(VAR_8);

        return FUNC_1(VAR_7, &VAR_10->cpu_set, 1, VAR_0, VAR_1, VAR_2, VAR_5);
}
