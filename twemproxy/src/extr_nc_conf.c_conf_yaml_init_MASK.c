
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; } ;
struct conf {int valid_parser; int fh; TYPE_1__ parser; int fname; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,long,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static rstatus_t
FUNC_6(struct conf *VAR_4)
{
    int VAR_5;

    FUNC_0(!VAR_4->valid_parser);

    VAR_5 = FUNC_1(VAR_4->fh, 0L, VAR_2);
    if (VAR_5 < 0) {
        FUNC_2("conf: failed to seek to the beginning of file '%s': %s",
                  VAR_4->fname, FUNC_3(VAR_3));
        return VAR_0;
    }

    VAR_5 = FUNC_4(&VAR_4->parser);
    if (!VAR_5) {
        FUNC_2("conf: failed (err %d) to initialize yaml parser",
                  VAR_4->parser.error);
        return VAR_0;
    }

    FUNC_5(&VAR_4->parser, VAR_4->fh);
    VAR_4->valid_parser = 1;

    return VAR_1;
}
