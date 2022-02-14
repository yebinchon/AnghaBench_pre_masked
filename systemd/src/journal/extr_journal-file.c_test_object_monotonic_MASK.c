
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int monotonic; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;
typedef TYPE_2__ Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__,TYPE_2__**) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(JournalFile *VAR_4, uint64_t VAR_5, uint64_t VAR_6) {
        Object *VAR_7;
        int VAR_8;

        FUNC_0(*VAR_4);
        FUNC_0(VAR_5 > 0);

        VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_5, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (FUNC_2(VAR_7->entry.monotonic) == VAR_6)
                return VAR_1;
        else if (FUNC_2(VAR_7->entry.monotonic) < VAR_6)
                return VAR_2;
        else
                return VAR_3;
}
