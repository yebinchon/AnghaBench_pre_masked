
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_7__ {int wqueue_size; scalar_t__ windex; int * wqueue; int state; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(sd_bus *VAR_2) {
        int VAR_3, VAR_4 = 0;

        FUNC_2(VAR_2);
        FUNC_2(FUNC_1(VAR_2->state, VAR_1, VAR_0));

        while (VAR_2->wqueue_size > 0) {

                VAR_3 = FUNC_4(VAR_2, VAR_2->wqueue[0], &VAR_2->windex);
                if (VAR_3 < 0)
                        return VAR_3;
                else if (VAR_3 == 0)

                        return VAR_4;
                else if (VAR_2->windex >= FUNC_0(VAR_2->wqueue[0])) {
                        VAR_2->wqueue_size--;
                        FUNC_3(VAR_2->wqueue[0], VAR_2);
                        FUNC_5(VAR_2->wqueue, VAR_2->wqueue + 1, sizeof(sd_bus_message*) * VAR_2->wqueue_size);
                        VAR_2->windex = 0;

                        VAR_4 = 1;
                }
        }

        return VAR_4;
}
