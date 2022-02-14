
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_3__ {double requests; int start; } ;
typedef TYPE_1__ thread ;
typedef int aeEventLoop ;
struct TYPE_4__ {int requests; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,double) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(aeEventLoop *VAR_3, long long VAR_4, void *VAR_5) {
    thread *VAR_6 = VAR_5;

    if (VAR_6->requests > 0) {
        uint64_t VAR_7 = (FUNC_2() - VAR_6->start) / 1000;
        uint64_t VAR_8 = (VAR_6->requests / (double) VAR_7) * 1000;

        FUNC_1(VAR_1.requests, VAR_8);

        VAR_6->requests = 0;
        VAR_6->start = FUNC_2();
    }

    if (VAR_2) FUNC_0(VAR_3);

    return VAR_0;
}
