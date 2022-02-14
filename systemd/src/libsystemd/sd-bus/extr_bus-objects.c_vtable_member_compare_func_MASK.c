
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtable_member {int member; int interface; int path; } ;


 int FUNC_0 (struct vtable_member const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct vtable_member *VAR_0, const struct vtable_member *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_0->path, VAR_1->path);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->interface, VAR_1->interface);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_1(VAR_0->member, VAR_1->member);
}
