
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct iovec {int dummy; } ;
struct TYPE_4__ {scalar_t__ monotonic; scalar_t__ realtime; } ;
typedef TYPE_1__ dual_timestamp ;
typedef int JournalFile ;


 struct iovec FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_1__*,int *,struct iovec*,int,int *,int *,int *) ;

__attribute__((used)) static void FUNC_7(JournalFile *VAR_0, int VAR_1, uint64_t *VAR_2) {
        char *VAR_3;
        dual_timestamp VAR_4;
        static dual_timestamp VAR_5 = {};
        struct iovec VAR_6[1];

        FUNC_4(&VAR_4);

        if (VAR_4.monotonic <= VAR_5.monotonic)
                VAR_4.monotonic = VAR_5.monotonic + 1;

        if (VAR_4.realtime <= VAR_5.realtime)
                VAR_4.realtime = VAR_5.realtime + 1;

        VAR_5 = VAR_4;

        FUNC_3(FUNC_1(&VAR_3, "NUMBER=%d", VAR_1) >= 0);
        VAR_6[0] = FUNC_0(VAR_3);
        FUNC_2(FUNC_6(VAR_0, &VAR_4, ((void*)0), VAR_6, 1, VAR_2, ((void*)0), ((void*)0)));
        FUNC_5(VAR_3);
}
