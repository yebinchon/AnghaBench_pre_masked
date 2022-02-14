
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_11__ {scalar_t__ fd; int offline_state; int offline_thread; TYPE_1__* header; int writable; } ;
struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_2__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;

int FUNC_10(JournalFile *VAR_9, bool VAR_10) {
        bool VAR_11;
        int VAR_12;

        FUNC_0(VAR_9);

        if (!VAR_9->writable)
                return -VAR_1;

        if (VAR_9->fd < 0 || !VAR_9->header)
                return -VAR_0;



        if (!FUNC_2(VAR_9) && VAR_9->header->state != VAR_7)
                return FUNC_4(VAR_9);


        VAR_11 = FUNC_5(VAR_9);
        if ((VAR_11 && VAR_10) || !VAR_11) {
                VAR_12 = FUNC_4(VAR_9);
                if (VAR_12 < 0)
                        return VAR_12;
        }

        if (VAR_11)
                return 0;


        VAR_9->offline_state = VAR_3;

        if (VAR_10)
                FUNC_3(VAR_9);
        else {
                sigset_t VAR_13, VAR_14;
                int VAR_15;

                FUNC_1(FUNC_9(&VAR_13) >= 0);


                FUNC_1(FUNC_8(&VAR_13, VAR_4) >= 0);

                VAR_12 = FUNC_7(VAR_5, &VAR_13, &VAR_14);
                if (VAR_12 > 0)
                        return -VAR_12;

                VAR_12 = FUNC_6(&VAR_9->offline_thread, ((void*)0), VAR_8, VAR_9);

                VAR_15 = FUNC_7(VAR_6, &VAR_14, ((void*)0));
                if (VAR_12 > 0) {
                        VAR_9->offline_state = VAR_2;
                        return -VAR_12;
                }
                if (VAR_15 > 0)
                        return -VAR_15;
        }

        return 0;
}
