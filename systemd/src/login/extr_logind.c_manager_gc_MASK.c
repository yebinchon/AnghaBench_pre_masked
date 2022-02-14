
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int in_gc_queue; } ;
typedef TYPE_1__ User ;
struct TYPE_22__ {TYPE_1__* user_gc_queue; TYPE_1__* session_gc_queue; TYPE_1__* seat_gc_queue; } ;
typedef TYPE_1__ Session ;
typedef TYPE_1__ Seat ;
typedef TYPE_4__ Manager ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_14(Manager *VAR_2, bool VAR_3) {
        Seat *VAR_4;
        Session *VAR_5;
        User *VAR_6;

        FUNC_1(VAR_2);

        while ((VAR_4 = VAR_2->seat_gc_queue)) {
                FUNC_0(VAR_1, VAR_2->seat_gc_queue, VAR_4);
                VAR_4->in_gc_queue = 0;

                if (FUNC_3(VAR_4, VAR_3)) {
                        FUNC_4(VAR_4, 0);
                        FUNC_2(VAR_4);
                }
        }

        while ((VAR_5 = VAR_2->session_gc_queue)) {
                FUNC_0(VAR_1, VAR_2->session_gc_queue, VAR_5);
                VAR_5->in_gc_queue = 0;


                if (FUNC_8(VAR_5, VAR_3) &&
                    FUNC_7(VAR_5) != VAR_0)
                        (void) FUNC_9(VAR_5, 0);




                if (FUNC_8(VAR_5, VAR_3)) {
                        (void) FUNC_5(VAR_5);
                        FUNC_6(VAR_5);
                }
        }

        while ((VAR_6 = VAR_2->user_gc_queue)) {
                FUNC_0(VAR_1, VAR_2->user_gc_queue, VAR_6);
                VAR_6->in_gc_queue = 0;


                if (FUNC_12(VAR_6, VAR_3))
                        (void) FUNC_13(VAR_6, 0);


                if (FUNC_12(VAR_6, VAR_3)) {
                        (void) FUNC_10(VAR_6);
                        FUNC_11(VAR_6);
                }
        }
}
