
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_1__* header; } ;
struct TYPE_5__ {int n_tags; } ;
typedef TYPE_2__ JournalFile ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint64_t FUNC_3(JournalFile *VAR_0) {
        uint64_t VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_2(VAR_0->header->n_tags) + 1;
        VAR_0->header->n_tags = FUNC_1(VAR_1);

        return VAR_1;
}
