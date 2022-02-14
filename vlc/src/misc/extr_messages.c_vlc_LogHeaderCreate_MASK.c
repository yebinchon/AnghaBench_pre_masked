
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_logger {int * ops; } ;
struct vlc_logger_header {struct vlc_logger logger; int header; struct vlc_logger* parent; } ;


 int VAR_0 ;
 struct vlc_logger_header* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;

struct vlc_logger *FUNC_4(struct vlc_logger *VAR_1,
                                       const char *VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_2) + 1;
    struct vlc_logger_header *VAR_4 = FUNC_0(sizeof (*VAR_4) + VAR_3);
    if (FUNC_3(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_4->logger.ops = &VAR_0;
    VAR_4->parent = VAR_1;
    FUNC_1(VAR_4->header, VAR_2, VAR_3);
    return &VAR_4->logger;
}
