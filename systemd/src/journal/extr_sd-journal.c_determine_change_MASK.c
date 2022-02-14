
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current_invalidate_counter; scalar_t__ last_invalidate_counter; } ;
typedef TYPE_1__ sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sd_journal *VAR_2) {
        bool VAR_3;

        FUNC_0(VAR_2);

        VAR_3 = VAR_2->current_invalidate_counter != VAR_2->last_invalidate_counter;
        VAR_2->last_invalidate_counter = VAR_2->current_invalidate_counter;

        return VAR_3 ? VAR_1 : VAR_0;
}
