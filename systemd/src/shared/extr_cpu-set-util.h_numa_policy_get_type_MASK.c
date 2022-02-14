
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ set; } ;
struct TYPE_5__ {int type; TYPE_1__ nodes; } ;
typedef TYPE_2__ NUMAPolicy ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const NUMAPolicy *VAR_1) {
        return VAR_1->type < 0 ? (VAR_1->nodes.set ? VAR_0 : -1) : VAR_1->type;
}
