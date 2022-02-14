
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_4__ {scalar_t__ size; int path; } ;
typedef TYPE_1__ ProgressInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const struct stat *VAR_3, void *VAR_4) {
        ProgressInfo *VAR_5 = VAR_4;
        int VAR_6;

        FUNC_0(VAR_5);

        if (VAR_1)
                return -VAR_0;

        VAR_6 = FUNC_1(&VAR_5->path, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5->size = 0;

        FUNC_2(VAR_5);
        return 0;
}
