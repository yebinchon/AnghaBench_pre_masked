
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vacuum_candidate {struct vacuum_candidate* oldest_file; } ;


 int FUNC_0 (struct vacuum_candidate*) ;

__attribute__((used)) static void FUNC_1(struct vacuum_candidate *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->oldest_file);
        FUNC_0(VAR_0);
}
