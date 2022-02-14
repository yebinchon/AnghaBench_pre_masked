
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int options; int name; int keydev; int keyfile; int uuid; } ;
typedef TYPE_1__ crypto_device ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static crypto_device* FUNC_2(crypto_device *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->uuid);
        FUNC_0(VAR_0->keyfile);
        FUNC_0(VAR_0->keydev);
        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->options);
        return FUNC_1(VAR_0);
}
