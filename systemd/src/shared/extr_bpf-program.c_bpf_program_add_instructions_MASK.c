
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_insn {int dummy; } ;
struct TYPE_4__ {scalar_t__ kernel_fd; scalar_t__ n_instructions; scalar_t__ instructions; int allocated; } ;
typedef TYPE_1__ BPFProgram ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,struct bpf_insn const*,int) ;

int FUNC_3(BPFProgram *VAR_2, const struct bpf_insn *VAR_3, size_t VAR_4) {

        FUNC_1(VAR_2);

        if (VAR_2->kernel_fd >= 0)
                return -VAR_0;

        if (!FUNC_0(VAR_2->instructions, VAR_2->allocated, VAR_2->n_instructions + VAR_4))
                return -VAR_1;

        FUNC_2(VAR_2->instructions + VAR_2->n_instructions, VAR_3, sizeof(struct bpf_insn) * VAR_4);
        VAR_2->n_instructions += VAR_4;

        return 0;
}
