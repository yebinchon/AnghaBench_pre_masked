
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtable_member {int member; int interface; int path; } ;
struct siphash {int dummy; } ;


 int FUNC_0 (struct vtable_member const*) ;
 int FUNC_1 (int ,struct siphash*) ;

__attribute__((used)) static void FUNC_2(const struct vtable_member *VAR_0, struct siphash *VAR_1) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->path, VAR_1);
        FUNC_1(VAR_0->interface, VAR_1);
        FUNC_1(VAR_0->member, VAR_1);
}
