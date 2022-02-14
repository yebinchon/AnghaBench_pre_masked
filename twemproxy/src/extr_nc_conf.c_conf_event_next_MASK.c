
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; } ;
struct conf {int valid_event; TYPE_1__ parser; int event; scalar_t__ valid_parser; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct conf *VAR_2)
{
    int VAR_3;

    FUNC_0(VAR_2->valid_parser && !VAR_2->valid_event);

    VAR_3 = FUNC_2(&VAR_2->parser, &VAR_2->event);
    if (!VAR_3) {
        FUNC_1("conf: failed (err %d) to get next event", VAR_2->parser.error);
        return VAR_0;
    }
    VAR_2->valid_event = 1;

    return VAR_1;
}
