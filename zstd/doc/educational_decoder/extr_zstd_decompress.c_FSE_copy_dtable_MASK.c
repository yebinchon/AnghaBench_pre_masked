
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {size_t accuracy_log; void* new_state_base; void* num_bits; void* symbols; } ;
typedef TYPE_1__ FSE_dtable ;


 int FUNC_0 () ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static void FUNC_4(FSE_dtable *const VAR_0, const FSE_dtable *const VAR_1) {
    if (VAR_1->accuracy_log == 0) {
        FUNC_3(VAR_0, 0, sizeof(FSE_dtable));
        return;
    }

    size_t VAR_2 = (size_t)1 << VAR_1->accuracy_log;
    VAR_0->accuracy_log = VAR_1->accuracy_log;

    VAR_0->symbols = FUNC_1(VAR_2);
    VAR_0->num_bits = FUNC_1(VAR_2);
    VAR_0->new_state_base = FUNC_1(VAR_2 * sizeof(u16));
    if (!VAR_0->symbols || !VAR_0->num_bits || !VAR_0->new_state_base) {
        FUNC_0();
    }

    FUNC_2(VAR_0->symbols, VAR_1->symbols, VAR_2);
    FUNC_2(VAR_0->num_bits, VAR_1->num_bits, VAR_2);
    FUNC_2(VAR_0->new_state_base, VAR_1->new_state_base, VAR_2 * sizeof(u16));
}
