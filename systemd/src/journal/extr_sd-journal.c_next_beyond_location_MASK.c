
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_16__ {scalar_t__ location_type; scalar_t__ last_n_entries; scalar_t__ current_offset; TYPE_12__ current_location; int last_direction; TYPE_1__* header; } ;
typedef TYPE_2__ sd_journal ;
typedef int direction_t ;
struct TYPE_15__ {int n_entries; } ;
typedef int Object ;
typedef TYPE_2__ JournalFile ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_12__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int ,int **,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int ,int **,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(sd_journal *VAR_4, JournalFile *VAR_5, direction_t VAR_6) {
        Object *VAR_7;
        uint64_t VAR_8, VAR_9;
        int VAR_10;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        VAR_9 = FUNC_4(VAR_5->header->n_entries);



        if (VAR_5->last_direction == VAR_6 && VAR_5->location_type == VAR_3 &&
            VAR_9 == VAR_5->last_n_entries)
                return 0;

        VAR_5->last_n_entries = VAR_9;

        if (VAR_5->last_direction == VAR_6 && VAR_5->current_offset > 0) {



                if (VAR_5->location_type != VAR_2) {
                        VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8);
                        if (VAR_10 <= 0)
                                return VAR_10;

                        FUNC_3(VAR_5, VAR_7, VAR_8);
                }
        } else {
                VAR_5->last_direction = VAR_6;

                VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8);
                if (VAR_10 <= 0)
                        return VAR_10;

                FUNC_3(VAR_5, VAR_7, VAR_8);
        }







        for (;;) {
                bool VAR_11;

                if (VAR_4->current_location.type == VAR_1) {
                        int VAR_12;

                        VAR_12 = FUNC_1(VAR_5, &VAR_4->current_location);

                        VAR_11 = VAR_6 == VAR_0 ? VAR_12 > 0 : VAR_12 < 0;
                } else
                        VAR_11 = 1;

                if (VAR_11)
                        return 1;

                VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8);
                if (VAR_10 <= 0)
                        return VAR_10;

                FUNC_3(VAR_5, VAR_7, VAR_8);
        }
}
