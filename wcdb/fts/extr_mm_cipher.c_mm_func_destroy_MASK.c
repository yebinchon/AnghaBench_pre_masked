
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ref_count; int cnv; } ;
typedef TYPE_1__ mm_cipher_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    mm_cipher_context_t *VAR_1 = (mm_cipher_context_t *) VAR_0;
    if (--VAR_1->ref_count == 0) {
        FUNC_1(VAR_1->cnv);
        FUNC_0(VAR_1);
    }
}
