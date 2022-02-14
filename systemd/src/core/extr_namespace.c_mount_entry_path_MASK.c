
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path_const; scalar_t__ path_malloc; } ;
typedef TYPE_1__ MountEntry ;


 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static const char *FUNC_1(const MountEntry *VAR_0) {
        FUNC_0(VAR_0);




        return VAR_0->path_malloc ?: VAR_0->path_const;
}
