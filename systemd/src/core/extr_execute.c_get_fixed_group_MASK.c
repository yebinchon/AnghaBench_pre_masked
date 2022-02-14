
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gid_t ;
struct TYPE_4__ {char* group; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char const**,int *,int ) ;

__attribute__((used)) static int FUNC_2(const ExecContext *VAR_0, const char **VAR_1, gid_t *VAR_2) {
        int VAR_3;
        const char *VAR_4;

        FUNC_0(VAR_0);

        if (!VAR_0->group)
                return 0;

        VAR_4 = VAR_0->group;
        VAR_3 = FUNC_1(&VAR_4, VAR_2, 0);
        if (VAR_3 < 0)
                return VAR_3;

        *VAR_1 = VAR_4;
        return 0;
}
