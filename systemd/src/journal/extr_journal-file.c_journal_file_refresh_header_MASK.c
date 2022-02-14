
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_id128_t ;
struct TYPE_5__ {int fd; int boot_id; struct TYPE_5__* header; int machine_id; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(JournalFile *VAR_2) {
        sd_id128_t VAR_3;
        int VAR_4;

        FUNC_1(VAR_2);
        FUNC_1(VAR_2->header);

        VAR_4 = FUNC_6(&VAR_2->header->machine_id);
        if (FUNC_0(VAR_4, -VAR_0, -VAR_1))

                FUNC_7(VAR_2->header->machine_id);
        else if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_5(&VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_2->header->boot_id = VAR_3;

        VAR_4 = FUNC_4(VAR_2);


        (void) FUNC_2(VAR_2->fd);


        (void) FUNC_3(VAR_2->fd);

        return VAR_4;
}
