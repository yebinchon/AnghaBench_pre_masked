
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef int gid_t ;
struct TYPE_4__ {char* user; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char const**,int *,int *,char const**,char const**,int ) ;

__attribute__((used)) static int FUNC_2(const ExecContext *VAR_1, const char **VAR_2,
                          uid_t *VAR_3, gid_t *VAR_4,
                          const char **VAR_5, const char **VAR_6) {
        int VAR_7;
        const char *VAR_8;

        FUNC_0(VAR_1);

        if (!VAR_1->user)
                return 0;




        VAR_8 = VAR_1->user;
        VAR_7 = FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_0);
        if (VAR_7 < 0)
                return VAR_7;

        *VAR_2 = VAR_8;
        return 0;
}
