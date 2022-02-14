
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {scalar_t__ valid_token; int token; int valid_parser; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct conf *VAR_0)
{
    FUNC_0(VAR_0->valid_parser);

    if (VAR_0->valid_token) {
        FUNC_1(&VAR_0->token);
        VAR_0->valid_token = 0;
    }
}
