
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ nr; } ;
typedef TYPE_1__ UidRange ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(UidRange *VAR_0, uid_t VAR_1, uid_t VAR_2) {
        FUNC_0(VAR_0);

        return VAR_0->start <= VAR_1 + VAR_2 &&
                VAR_0->start + VAR_0->nr >= VAR_1;
}
