
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* id; scalar_t__ title; scalar_t__ show_title; } ;
typedef TYPE_1__ BootEntry ;



__attribute__((used)) static inline const char* FUNC_0(const BootEntry *VAR_0) {
        return VAR_0->show_title ?: VAR_0->title ?: VAR_0->id;
}
