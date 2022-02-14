
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int attached_path; int instructions; int kernel_fd; } ;
typedef TYPE_1__ BPFProgram ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BPFProgram *FUNC_5(BPFProgram *VAR_0) {
        FUNC_0(VAR_0);
        (void) FUNC_1(VAR_0);

        FUNC_4(VAR_0->kernel_fd);
        FUNC_2(VAR_0->instructions);
        FUNC_2(VAR_0->attached_path);

        return FUNC_3(VAR_0);
}
