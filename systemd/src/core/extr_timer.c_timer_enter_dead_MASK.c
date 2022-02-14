
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ TimerResult ;
struct TYPE_6__ {scalar_t__ result; } ;
typedef TYPE_1__ Timer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(Timer *VAR_3, TimerResult VAR_4) {
        FUNC_1(VAR_3);

        if (VAR_3->result == VAR_2)
                VAR_3->result = VAR_4;

        FUNC_4(FUNC_0(VAR_3), VAR_3->result == VAR_2, FUNC_2(VAR_3->result));
        FUNC_3(VAR_3, VAR_3->result != VAR_2 ? VAR_1 : VAR_0);
}
