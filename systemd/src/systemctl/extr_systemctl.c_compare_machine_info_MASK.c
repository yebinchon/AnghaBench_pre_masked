
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_info {int name; int is_host; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct machine_info *VAR_0, const struct machine_info *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_1->is_host, VAR_0->is_host);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_1(VAR_0->name, VAR_1->name);
}
