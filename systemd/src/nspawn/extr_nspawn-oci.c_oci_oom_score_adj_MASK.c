
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ intmax_t ;
struct TYPE_3__ {int oom_score_adjust; int oom_score_adjust_set; } ;
typedef TYPE_1__ Settings ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        Settings *VAR_7 = VAR_6;
        intmax_t VAR_8;

        FUNC_1(VAR_7);

        VAR_8 = FUNC_3(VAR_4);
        if (VAR_8 < VAR_2 || VAR_8 > VAR_1)
                return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_0),
                                "oomScoreAdj value out of range: %ji", VAR_8);

        VAR_7->oom_score_adjust = (int) VAR_8;
        VAR_7->oom_score_adjust_set = 1;

        return 0;
}
