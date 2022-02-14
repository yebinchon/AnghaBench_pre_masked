
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usec_t ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct TYPE_5__ {int utc; } ;
typedef TYPE_1__ CalendarSpec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*,struct tm*,int*) ;
 int FUNC_3 (scalar_t__*,struct tm*,int ) ;
 scalar_t__ FUNC_4 (struct tm*,int ) ;

__attribute__((used)) static int FUNC_5(const CalendarSpec *VAR_3, usec_t VAR_4, usec_t *VAR_5) {
        struct tm VAR_6;
        time_t VAR_7;
        int VAR_8;
        usec_t VAR_9;

        FUNC_0(VAR_3);

        if (VAR_4 > VAR_2)
                return -VAR_0;

        VAR_4++;
        VAR_7 = (time_t) (VAR_4 / VAR_1);
        FUNC_1(FUNC_3(&VAR_7, &VAR_6, VAR_3->utc));
        VAR_9 = VAR_4 % VAR_1;

        VAR_8 = FUNC_2(VAR_3, &VAR_6, &VAR_9);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_7 = FUNC_4(&VAR_6, VAR_3->utc);
        if (VAR_7 < 0)
                return -VAR_0;

        if (VAR_5)
                *VAR_5 = (usec_t) VAR_7 * VAR_1 + VAR_9;

        return 0;
}
