
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ compress_lz4; scalar_t__ compress_xz; } ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(JournalFile *VAR_0) {
        FUNC_0(VAR_0);
        return VAR_0->compress_xz || VAR_0->compress_lz4;
}
