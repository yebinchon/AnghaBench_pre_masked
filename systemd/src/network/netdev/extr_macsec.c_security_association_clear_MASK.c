
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_file; int key; int key_len; } ;
typedef TYPE_1__ SecurityAssociation ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(SecurityAssociation *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->key, VAR_0->key_len);
        FUNC_1(VAR_0->key);
        FUNC_1(VAR_0->key_file);
}
