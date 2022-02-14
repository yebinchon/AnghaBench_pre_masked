
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
typedef TYPE_1__ mm_cipher_context_t ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,size_t,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static void FUNC_2(mm_cipher_context_t *VAR_0, void *VAR_1, int VAR_2)
{
    RC4_KEY VAR_3;

    FUNC_1(&VAR_3, 16, VAR_0->key);
    FUNC_0(&VAR_3, (size_t) VAR_2, (const unsigned char *) VAR_1,
        (unsigned char *) VAR_1);
}
