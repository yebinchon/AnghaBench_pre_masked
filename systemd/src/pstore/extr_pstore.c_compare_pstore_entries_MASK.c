
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d_name; } ;
struct TYPE_4__ {TYPE_1__ dirent; } ;
typedef TYPE_2__ PStoreEntry ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
        PStoreEntry *VAR_2 = (PStoreEntry *)VAR_0, *VAR_3 = (PStoreEntry *)VAR_1;
        return FUNC_0(VAR_2->dirent.d_name, VAR_3->dirent.d_name);
}
