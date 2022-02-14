
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {scalar_t__ valid_event; int event; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct conf *VAR_0)
{
    if (VAR_0->valid_event) {
        FUNC_0(&VAR_0->event);
        VAR_0->valid_event = 0;
    }
}
