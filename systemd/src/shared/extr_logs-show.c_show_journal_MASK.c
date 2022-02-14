
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int sd_journal ;
typedef int sd_id128_t ;
typedef int OutputMode ;
typedef int OutputFlags ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,scalar_t__*,int *) ;
 int FUNC_6 (int *,scalar_t__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int ,unsigned int,int,int *,int *,int*) ;

int FUNC_12(
                FILE *VAR_5,
                sd_journal *VAR_6,
                OutputMode VAR_7,
                unsigned VAR_8,
                usec_t VAR_9,
                unsigned VAR_10,
                OutputFlags VAR_11,
                bool *VAR_12) {

        int VAR_13;
        unsigned VAR_14 = 0;
        bool VAR_15 = 0;
        int VAR_16 = VAR_11 & VAR_2;

        FUNC_0(*VAR_6);
        FUNC_0(VAR_7 >= 0);
        FUNC_0(VAR_7 < VAR_4);

        if (VAR_10 == (unsigned) -1)
                VAR_15 = 1;
        else {

                VAR_13 = FUNC_9(VAR_6);
                if (VAR_13 < 0)
                        return FUNC_2(VAR_13, "Failed to seek to tail: %m");

                VAR_13 = FUNC_8(VAR_6, VAR_10);
                if (VAR_13 < 0)
                        return FUNC_2(VAR_13, "Failed to skip previous: %m");
        }

        for (;;) {
                for (;;) {
                        usec_t VAR_17;

                        if (VAR_15) {
                                VAR_13 = FUNC_7(VAR_6);
                                if (VAR_13 < 0)
                                        return FUNC_2(VAR_13, "Failed to iterate through journal: %m");
                        }

                        if (VAR_13 == 0)
                                break;

                        VAR_15 = 1;

                        if (VAR_9 > 0) {
                                VAR_13 = FUNC_6(VAR_6, &VAR_17, ((void*)0));



                                if (VAR_13 == -VAR_0)
                                        continue;
                                else if (VAR_13 < 0)
                                        return FUNC_2(VAR_13, "Failed to get journal time: %m");

                                if (VAR_17 < VAR_9)
                                        continue;
                        }

                        VAR_14++;
                        FUNC_3(VAR_5, &VAR_11);

                        VAR_13 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11, ((void*)0), ((void*)0), VAR_12);
                        if (VAR_13 < 0)
                                return VAR_13;
                }

                if (VAR_16 && VAR_14 < VAR_10 && VAR_9 > 0) {
                        sd_id128_t VAR_18;
                        usec_t VAR_19 = 0;



                        VAR_13 = FUNC_4(&VAR_18);
                        if (VAR_13 < 0)
                                return FUNC_2(VAR_13, "Failed to get boot id: %m");

                        VAR_13 = FUNC_5(VAR_6, VAR_18, &VAR_19, ((void*)0));
                        if (VAR_13 < 0)
                                return FUNC_2(VAR_13, "Failed to get journal cutoff time: %m");

                        if (VAR_13 > 0 && VAR_9 < VAR_19) {
                                FUNC_3(VAR_5, &VAR_11);
                                FUNC_1(VAR_5, "Warning: Journal has been rotated since unit was started. Log output is incomplete or unavailable.\n");
                        }

                        VAR_16 = 0;
                }

                if (!(VAR_11 & VAR_1))
                        break;

                VAR_13 = FUNC_10(VAR_6, VAR_3);
                if (VAR_13 < 0)
                        return FUNC_2(VAR_13, "Failed to wait for journal: %m");

        }

        return 0;
}
