
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int y ;
typedef scalar_t__ usec_t ;
typedef int uint64_t ;
typedef scalar_t__ curl_off_t ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ last_status_usec; unsigned int progress_percent; scalar_t__ start_usec; int (* on_progress ) (TYPE_1__*) ;int url; } ;
typedef TYPE_1__ PullJob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,unsigned int,int ,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(void *VAR_4, curl_off_t VAR_5, curl_off_t VAR_6, curl_off_t VAR_7, curl_off_t VAR_8) {
        PullJob *VAR_9 = VAR_4;
        unsigned VAR_10;
        usec_t VAR_11;

        FUNC_0(VAR_9);

        if (VAR_5 <= 0)
                return 0;

        VAR_10 = ((100 * VAR_6) / VAR_5);
        VAR_11 = FUNC_4(VAR_0);

        if (VAR_11 > VAR_9->last_status_usec + VAR_3 &&
            VAR_10 != VAR_9->progress_percent &&
            VAR_6 < VAR_5) {
                char VAR_12[VAR_2];

                if (VAR_11 - VAR_9->start_usec > VAR_3 && VAR_6 > 0) {
                        char VAR_13[VAR_1];
                        usec_t VAR_14, VAR_15;

                        VAR_15 = VAR_11 - VAR_9->start_usec;
                        VAR_14 = (usec_t) (((double) VAR_15 * (double) VAR_5) / VAR_6) - VAR_15;

                        FUNC_3("Got %u%% of %s. %s left at %s/s.",
                                 VAR_10,
                                 VAR_9->url,
                                 FUNC_2(VAR_12, sizeof(VAR_12), VAR_14, VAR_3),
                                 FUNC_1(VAR_13, sizeof(VAR_13), (uint64_t) ((double) VAR_6 / ((double) VAR_15 / (double) VAR_3))));
                } else
                        FUNC_3("Got %u%% of %s.", VAR_10, VAR_9->url);

                VAR_9->progress_percent = VAR_10;
                VAR_9->last_status_usec = VAR_11;

                if (VAR_9->on_progress)
                        VAR_9->on_progress(VAR_9);
        }

        return 0;
}
