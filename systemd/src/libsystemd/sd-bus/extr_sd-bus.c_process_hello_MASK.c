
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; int reply_cookie; TYPE_1__* header; } ;
typedef TYPE_2__ sd_bus_message ;
typedef TYPE_2__ sd_bus ;
struct TYPE_7__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_4, sd_bus_message *VAR_5) {
        FUNC_1(VAR_4);
        FUNC_1(VAR_5);

        if (VAR_4->state != VAR_0)
                return 0;






        if (!FUNC_0(VAR_5->header->type, VAR_3, VAR_2))
                return -VAR_1;

        if (VAR_5->reply_cookie != 1)
                return -VAR_1;

        return 0;
}
