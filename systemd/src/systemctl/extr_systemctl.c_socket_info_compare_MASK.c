
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int type; int path; scalar_t__ machine; } ;


 int FUNC_0 (struct socket_info const*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct socket_info *VAR_0, const struct socket_info *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (!VAR_0->machine && VAR_1->machine)
                return -1;
        if (VAR_0->machine && !VAR_1->machine)
                return 1;
        if (VAR_0->machine && VAR_1->machine) {
                VAR_2 = FUNC_1(VAR_0->machine, VAR_1->machine);
                if (VAR_2 != 0)
                        return VAR_2;
        }

        VAR_2 = FUNC_2(VAR_0->path, VAR_1->path);
        if (VAR_2 == 0)
                VAR_2 = FUNC_2(VAR_0->type, VAR_1->type);

        return VAR_2;
}
