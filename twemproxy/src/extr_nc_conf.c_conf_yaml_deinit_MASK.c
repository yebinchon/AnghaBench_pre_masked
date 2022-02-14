
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {scalar_t__ valid_parser; int parser; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct conf *VAR_0)
{
    if (VAR_0->valid_parser) {
        FUNC_0(&VAR_0->parser);
        VAR_0->valid_parser = 0;
    }
}
